precision highp float;

uniform sampler2D inputImageTexture;
uniform vec2 singleStepOffset; 
uniform highp vec4 params; 

varying highp vec2 textureCoordinate;

const highp vec3 W = vec3(0.299,0.587,0.114);
const mat3 saturateMatrix = mat3(
		1.1102,-0.0598,-0.061,
		-0.0774,1.0826,-0.1186,
		-0.0228,-0.0228,1.1772);
		
float hardlight(float color)
{
	if(color <= 0.5)
	{
		color = color * color * 2.0;
	}
	else
	{
		color = 1.0 - ((1.0 - color)*(1.0 - color) * 2.0);
	}
	return color;
}

void main(){
	vec2 blurCoordinates[12];
	
	blurCoordinates[0] = textureCoordinate.xy + singleStepOffset * vec2(5.0, -8.0);
	blurCoordinates[1] = textureCoordinate.xy + singleStepOffset * vec2(5.0, 8.0);
	blurCoordinates[2] = textureCoordinate.xy + singleStepOffset * vec2(-5.0, 8.0);
	blurCoordinates[3] = textureCoordinate.xy + singleStepOffset * vec2(-5.0, -8.0);
	
	blurCoordinates[4] = textureCoordinate.xy + singleStepOffset * vec2(8.0, -5.0);
	blurCoordinates[5] = textureCoordinate.xy + singleStepOffset * vec2(8.0, 5.0);
	blurCoordinates[6] = textureCoordinate.xy + singleStepOffset * vec2(-8.0, 5.0);	
	blurCoordinates[7] = textureCoordinate.xy + singleStepOffset * vec2(-8.0, -5.0);
	
	blurCoordinates[8] = textureCoordinate.xy + singleStepOffset * vec2(-4.0, -4.0);
	blurCoordinates[9] = textureCoordinate.xy + singleStepOffset * vec2(-4.0, 4.0);
	blurCoordinates[10] = textureCoordinate.xy + singleStepOffset * vec2(4.0, -4.0);
	blurCoordinates[11] = textureCoordinate.xy + singleStepOffset * vec2(4.0, 4.0);
	
	float sampleColor = texture2D(inputImageTexture, textureCoordinate).g * 22.0;

	sampleColor += texture2D(inputImageTexture, blurCoordinates[0]).g;
	sampleColor += texture2D(inputImageTexture, blurCoordinates[1]).g;
	sampleColor += texture2D(inputImageTexture, blurCoordinates[2]).g;
	sampleColor += texture2D(inputImageTexture, blurCoordinates[3]).g;
	sampleColor += texture2D(inputImageTexture, blurCoordinates[4]).g;
	sampleColor += texture2D(inputImageTexture, blurCoordinates[5]).g;
	sampleColor += texture2D(inputImageTexture, blurCoordinates[6]).g;
	sampleColor += texture2D(inputImageTexture, blurCoordinates[7]).g;
	
	sampleColor += texture2D(inputImageTexture, blurCoordinates[8]).g * 2.0;
	sampleColor += texture2D(inputImageTexture, blurCoordinates[9]).g * 2.0;
	sampleColor += texture2D(inputImageTexture, blurCoordinates[10]).g * 2.0;
	sampleColor += texture2D(inputImageTexture, blurCoordinates[11]).g * 2.0;	
	
	sampleColor = sampleColor / 38.0;
	
	vec3 centralColor = texture2D(inputImageTexture, textureCoordinate).rgb;
	
	float highpass = centralColor.g - sampleColor + 0.5;
	
	for(int i = 0; i < 5;i++)
	{
		highpass = hardlight(highpass);
	}
	float lumance = dot(centralColor, W);
	
	float alpha = pow(lumance, params.r);

	vec3 smoothColor = centralColor + (centralColor-vec3(highpass))*alpha*0.1;
	
	smoothColor.r = clamp(pow(smoothColor.r, params.g),0.0,1.0);
	smoothColor.g = clamp(pow(smoothColor.g, params.g),0.0,1.0);
	smoothColor.b = clamp(pow(smoothColor.b, params.g),0.0,1.0);
	
	vec3 lvse = vec3(1.0)-(vec3(1.0)-smoothColor)*(vec3(1.0)-centralColor);
	vec3 bianliang = max(smoothColor, centralColor);
	vec3 rouguang = 2.0*centralColor*smoothColor + centralColor*centralColor - 2.0*centralColor*centralColor*smoothColor;
	
	gl_FragColor = vec4(mix(centralColor, lvse, alpha), 1.0);
	gl_FragColor.rgb = mix(gl_FragColor.rgb, bianliang, alpha);
	gl_FragColor.rgb = mix(gl_FragColor.rgb, rouguang, params.b);
	
	vec3 satcolor = gl_FragColor.rgb * saturateMatrix;
	gl_FragColor.rgb = mix(gl_FragColor.rgb, satcolor, params.a);
}