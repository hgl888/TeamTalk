package com.seu.magiccamera.activity;

import android.animation.Animator;
import android.animation.Animator.AnimatorListener;
import android.animation.ObjectAnimator;
import android.app.Activity;
import android.content.Intent;
import android.graphics.Point;
import android.hardware.Camera.Face;
import android.opengl.GLSurfaceView;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.util.Log;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.FrameLayout;
import android.widget.FrameLayout.LayoutParams;
import android.widget.LinearLayout;

import org.yanzi.mode.GoogleFaceDetect;
import org.yanzi.ui.FaceView;
import org.yanzi.util.EventUtil;

import com.show.tt.R;
import com.seu.magiccamera.common.utils.Constants;
import com.seu.magiccamera.common.view.FilterLayoutUtils;
import com.seu.magicfilter.display.MagicCameraDisplay;
import com.seu.magicfilter.utils.TextureRotationUtil;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.FloatBuffer;

public class CameraActivity extends Activity{
	private MagicCameraDisplay mMagicCameraDisplay;
	private LinearLayout mFilterLayout;
	private GoogleFaceDetect googleFaceDetect = null;
	private MainHandler mMainHandler = null;
	private FaceView faceView;
	private FilterLayoutUtils mFilterLayoutUtils;

	private class MainHandler extends Handler{
		@Override
		public void handleMessage( Message msg ){
			switch( msg.what ){
			case EventUtil.UPDATE_FACE_RECT:
				Face [] faces = (Face[])msg.obj;
				faceView.setFaces(faces);
				break;
			case EventUtil.CAMERA_HAS_STARTED_PREVIEW:
				mMagicCameraDisplay.startFaceDetect(googleFaceDetect);
				faceView.clearFaces();
				faceView.setVisibility(View.VISIBLE);
				break;
			}
			super.handleMessage(msg);
			
		}
	}

	private  void TestCode(){
		final FloatBuffer mGLCubeBuffer;
		mGLCubeBuffer = ByteBuffer.allocateDirect(TextureRotationUtil.CUBE.length * 4 )
				.order(ByteOrder.nativeOrder())
				.asFloatBuffer();
		mGLCubeBuffer.put(TextureRotationUtil.CUBE).position(0);

		String name = this.getClass().getName();
		int hashcode = this.hashCode();

		return;
	}
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		// TODO Auto-generated method stub
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_camera);
		initConstants();
		TestCode();
		faceView = (FaceView)findViewById(R.id.face_view );
		initMagicPreview();
		initFilterLayout();
		mMainHandler = new MainHandler();
	    googleFaceDetect = new GoogleFaceDetect( this.getApplicationContext(), mMainHandler );
	}
	@Override
	public boolean onTouchEvent( MotionEvent event ) {
		if( mFilterLayout.getVisibility() == View.VISIBLE )
		{
			onFilterClose();
		}
		return super.onTouchEvent( event );
	}
	
	private void initFilterLayout(){
		findViewById(R.id.btn_camera_openfilter).setOnClickListener(btn_camera_openfilter_listener);
		findViewById(R.id.btn_camera_usefilter).setOnClickListener(btn_camera_usefilter_listener);
		findViewById(R.id.btn_camera_closefilter).setOnClickListener(btn_camera_closefilter_listener);
		findViewById(R.id.btn_camera_shutter).setOnClickListener(btn_camera_shutter_listener);
		findViewById(R.id.btn_camera_album).setOnClickListener(btn_camera_album_listener);
		findViewById(R.id.btn_camera_usewhiteskin).setOnClickListener( btn_camera_usewhiteskin_listener);
		
		mFilterLayout = (LinearLayout)findViewById(R.id.layout_filter);
		mFilterLayoutUtils = new FilterLayoutUtils(this, mMagicCameraDisplay);
		mFilterLayoutUtils.init();
	}

	private void ShowTools()
	{
		findViewById(R.id.btn_camera_album).setVisibility(View.VISIBLE);
		findViewById(R.id.btn_camera_shutter).setVisibility(View.VISIBLE);
		findViewById(R.id.btn_camera_openfilter).setVisibility(View.VISIBLE);
		return;
	}

	private void HideTools(){
		findViewById(R.id.btn_camera_album).setVisibility(View.INVISIBLE);
		findViewById(R.id.btn_camera_shutter).setVisibility(View.INVISIBLE);
		findViewById(R.id.btn_camera_openfilter).setVisibility(View.INVISIBLE);
		return;
	}
	
	private void initMagicPreview(){
		GLSurfaceView glSurfaceView = (GLSurfaceView)findViewById(R.id.glsurfaceview_camera);
		FrameLayout.LayoutParams params = new LayoutParams(Constants.mScreenWidth, Constants.mScreenHeight);
		glSurfaceView.setLayoutParams(params);	
		mMagicCameraDisplay = new MagicCameraDisplay(this, glSurfaceView);
	}
		
	@Override
	protected void onPause() {
		super.onPause();
		if(mMagicCameraDisplay != null)
			mMagicCameraDisplay.onPause();
	}

	@Override
	protected void onResume() {
		super.onResume();
		if(mMagicCameraDisplay != null)
		{
			mMagicCameraDisplay.onResume();
			mMainHandler.sendEmptyMessageDelayed(EventUtil.CAMERA_HAS_STARTED_PREVIEW, 1500);
		}
	}
	
	@Override
	protected void onDestroy() {
		// TODO Auto-generated method stub
		super.onDestroy();
		if(mMagicCameraDisplay != null)
			mMagicCameraDisplay.onDestroy();
	}
	
	private OnClickListener btn_camera_shutter_listener = new OnClickListener() {
		
		@Override
		public void onClick(View v) {
			mMagicCameraDisplay.onTakePicture(Constants.getOutputMediaFile(), null, null);
		}
	};
	
	private OnClickListener btn_camera_album_listener = new OnClickListener() {
		
		@Override
		public void onClick(View v) {
			Log.e("test", "test");
		}
	};
	
	private OnClickListener btn_camera_openfilter_listener = new OnClickListener() {
		
		@Override
		public void onClick(View v) {
			onFilterOpen();
		}
	};

	private OnClickListener btn_camera_usewhiteskin_listener = new OnClickListener() {
		@Override
		public void onClick(View v) {
			//todo
		}
	};

	private void onFilterOpen() {
		HideTools();
		ObjectAnimator animator = ObjectAnimator.ofFloat(mFilterLayout, "translationY", mFilterLayout.getHeight(), 0);
		animator.setDuration(200);
		animator.addListener(new AnimatorListener() {

			@Override
			public void onAnimationStart(Animator animation) {
				findViewById(R.id.btn_camera_shutter).setClickable(false);
				mFilterLayout.setVisibility(View.VISIBLE);
			}

			@Override
			public void onAnimationRepeat(Animator animation) {

			}

			@Override
			public void onAnimationEnd(Animator animation) {

			}

			@Override
			public void onAnimationCancel(Animator animation) {

			}
		});
		animator.start();
	}

	private void onFilterClose()
	{
		ObjectAnimator animator = ObjectAnimator.ofFloat(mFilterLayout, "translationY", 0 ,  mFilterLayout.getHeight());
		animator.setDuration(200);
		animator.addListener(new AnimatorListener() {

			@Override
			public void onAnimationStart(Animator animation) {
				// TODO Auto-generated method stub
			}

			@Override
			public void onAnimationRepeat(Animator animation) {
				// TODO Auto-generated method stub

			}

			@Override
			public void onAnimationEnd(Animator animation) {
				// TODO Auto-generated method stub
				mFilterLayout.setVisibility(View.INVISIBLE);
				findViewById(R.id.btn_camera_shutter).setClickable(true);
				ShowTools();
			}

			@Override
			public void onAnimationCancel(Animator animation) {
				// TODO Auto-generated method stub
				mFilterLayout.setVisibility(View.INVISIBLE);
				findViewById(R.id.btn_camera_shutter).setClickable(true);
			}
		});
		animator.start();
	}
	
	private OnClickListener btn_camera_usefilter_listener = new OnClickListener() {
		
		@Override
		public void onClick(View v) {
			onFilterClose();
		}
	};

	private OnClickListener btn_camera_closefilter_listener = new OnClickListener() {
		@Override
		public void onClick(View v) {
			onFilterClose();
		}
	};

	private void initConstants() {
		Point outSize = new Point();
		getWindowManager().getDefaultDisplay().getRealSize(outSize);
		Constants.mScreenWidth = outSize.x;
		Constants.mScreenHeight = outSize.y;
	}

	public boolean onKeyDown( int keyCode, KeyEvent event ){
		if( keyCode == KeyEvent.KEYCODE_BACK && event.getRepeatCount() == 0 )
		{
			Intent intern = new Intent();
			setResult( RESULT_OK, intern );
			finish();
		}
		return false;
	}
}
