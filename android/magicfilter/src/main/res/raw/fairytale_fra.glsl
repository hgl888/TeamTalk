varying highp vec2 textureCoordinate;
varying highp vec2 vposition;

uniform sampler2D inputImageTexture;
uniform sampler2D inputImageTexture2;

void main()
{
	vec2 p = (2.0 * vposition.xy);
	p.y -= 0.25;
	vec3 bcol = vec3( 1.0, 0.8, 0.7 - 0.07 * p.y) * (1.0 - 0.25 * length(p));

	//shape
	float a = atan( p.x, p.y)/3.1415926;
	float r = length( p);
	float h = abs(a);
	float d = (13.0 * h - 22.0 * h * h + 10.0 *h * h) / (6.0 - 5.0 * h);


	//color
	float s = 1.0-0.5*clamp(r/d,0.0,1.0);
    s = 0.75 + 0.75*p.x;
    s *= 1.0-0.25*r;
    s = 0.5 + 0.6*s;
    s *= 0.5+0.5*pow( 1.0-clamp(r/d, 0.0, 1.0 ), 0.1 );
    vec3 hcol = vec3(1.0,0.5*r,0.3)*s;
    vec3 col = mix( bcol, hcol, smoothstep( -0.01, 0.01, d-r) );
    gl_FragColor = vec4(col,1.0);


}
