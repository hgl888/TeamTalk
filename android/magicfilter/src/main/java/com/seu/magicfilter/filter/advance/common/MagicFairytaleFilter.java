package com.seu.magicfilter.filter.advance.common;

import android.content.Context;
import android.opengl.GLES20;
import android.util.Log;

import com.seu.magicfilter.R;
import com.seu.magicfilter.filter.base.MagicLookupFilter;
import com.seu.magicfilter.filter.base.gpuimage.GPUImageFilter;
import com.seu.magicfilter.utils.OpenGLUtils;

public class MagicFairytaleFilter extends GPUImageFilter {

	protected String table;
	protected Context mContext;
	public int mLookupTextureUniform;
	public int mUniGlobalTime;
	public int mLookupSourceTexture = OpenGLUtils.NO_TEXTURE;

	public MagicFairytaleFilter(Context context) {
		this(context, "filter/fairy_tale.png");
	}

	public MagicFairytaleFilter(Context context,String table) {
		super(OpenGLUtils.readShaderFromRawResource(context, R.raw.fairytale_ver),
				OpenGLUtils.readShaderFromRawResource(context, R.raw.fairytale_fra));
		this.mContext = context;
		this.table = table;
	}



	protected void onInit(){
		super.onInit();
		mLookupTextureUniform = GLES20.glGetUniformLocation(getProgram(), "inputImageTexture2");
		mUniGlobalTime = GLES20.glGetUniformLocation( getProgram(), "uGlobalTime");
		return;
	}

	protected void onInitialized(){
		super.onInitialized();
		runOnDraw(new Runnable(){
			public void run(){
				mLookupSourceTexture = OpenGLUtils.loadTexture(mContext, table);
			}
		});
	}

	protected void onDestroy(){
		super.onDestroy();
		int[] texture = new int[]{mLookupSourceTexture};
		GLES20.glDeleteTextures(1, texture, 0);
		mLookupSourceTexture = -1;
	}

	protected void onDrawArraysAfter(){
		if (mLookupSourceTexture != -1){
			GLES20.glActiveTexture(GLES20.GL_TEXTURE3);
			GLES20.glBindTexture(GLES20.GL_TEXTURE_2D, 0);
			GLES20.glActiveTexture(GLES20.GL_TEXTURE0);
		}
	}

	static float time = (float) 0.0;
	protected void onDrawArraysPre(){
		if( time > 3.0 )
			time = (float) 0.0;
		time += 0.07;
		Log.e("Fairytale", "time=" + time );
		GLES20.glUniform1f(mUniGlobalTime, time);
		if (mLookupSourceTexture != -1){
			GLES20.glActiveTexture(GLES20.GL_TEXTURE3);
			GLES20.glBindTexture(GLES20.GL_TEXTURE_2D, mLookupSourceTexture);
			GLES20.glUniform1i(mLookupTextureUniform, 3);
		}
	}

}
