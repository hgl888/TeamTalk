package org.yanzi.ui;

import org.yanzi.camera.CameraInterface;
import org.yanzi.util.Util;

import com.show.tt.R;
import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Paint.Style;
import android.graphics.PixelFormat;
import android.graphics.RectF;
import android.graphics.drawable.Drawable;
import android.hardware.Camera.CameraInfo;
import android.hardware.Camera.Face;
import android.util.AttributeSet;
import android.widget.ImageView;

public class FaceView extends ImageView {
	private static final String TAG = "YanZi";
	private Context mContext;
	private Paint mLinePaint;
	private Face[] mFaces;
	private Matrix mMatrix = new Matrix();
	private RectF mRect = new RectF();
	private float[] mPoint = new float[3];
	private Drawable mFaceIndicator = null;
	private Drawable mFaceHat = null;
	private Bitmap mBtmHat = null;
	public FaceView(Context context, AttributeSet attrs) {
		super(context, attrs);
		// TODO Auto-generated constructor stub
		initPaint();
		mContext = context;
		mFaceIndicator = getResources().getDrawable(R.drawable.ic_face_find);
		mFaceHat = getResources().getDrawable(R.drawable.ic_hat );
		drawableToBitmap( mFaceHat );
	}

	Bitmap drawableToBitmap(Drawable drawable) // drawable 转换成 bitmap
	{
		int width = drawable.getIntrinsicWidth();   // 取 drawable 的长宽
		int height = drawable.getIntrinsicHeight();
		Bitmap.Config config = drawable.getOpacity() != PixelFormat.OPAQUE ? Bitmap.Config.ARGB_8888:Bitmap.Config.RGB_565;         // 取 drawable 的颜色格式
		mBtmHat = Bitmap.createBitmap(width, height, config);     // 建立对应 bitmap
		Canvas canvas = new Canvas(mBtmHat);         // 建立对应 bitmap 的画布
		drawable.setBounds(0, 0, width, height);
		drawable.draw(canvas);      // 把 drawable 内容画到画布中
		canvas = null;
		return mBtmHat;
	}

	public void setFaces(Face[] faces){
		this.mFaces = faces;
		invalidate();
	}
	public void clearFaces(){
		mFaces = null;
		invalidate();
	}
	

	@Override
	protected void onDraw(Canvas canvas) {
		// TODO Auto-generated method stub
		if(mFaces == null || mFaces.length < 1){
			return;
		}
		boolean isMirror = false;
		int Id = CameraInterface.getInstance().getCameraId();
		if(Id == CameraInfo.CAMERA_FACING_BACK){
			isMirror = false; //后置Camera无需mirror
		}else if(Id == CameraInfo.CAMERA_FACING_FRONT){
			isMirror = true;  //前置Camera需要mirror
		}
		Util.prepareMatrix(mMatrix, isMirror, 90, getWidth(), getHeight());
		canvas.save();
		mMatrix.postRotate(0); //Matrix.postRotate默认是顺时针
		canvas.rotate(-0);   //Canvas.rotate()默认是逆时针 
		for(int i = 0; i< mFaces.length; i++){
			mRect.set(mFaces[i].rect);
			mMatrix.mapRect(mRect);
            //mFaceIndicator.setBounds(Math.round(mRect.left), Math.round(mRect.top),
            //        Math.round(mRect.right), Math.round(mRect.bottom));
            //mFaceIndicator.draw(canvas);
			//canvas.drawRect(mRect, mLinePaint);
			//mPoint[0] = mFaces[i].rightEye.x;
			//mPoint[1] = mFaces[i].rightEye.y;
			//mMatrix.mapPoints(mPoint);
			RectF dst = new RectF();
			float frate = (float)(1.2 * mRect.width()) /(float)mFaceHat.getMinimumWidth();
			dst.left = mRect.centerX() - mRect.width();
			dst.right = mRect.centerX() + mRect.width();
			dst.top = mRect.top - frate * mFaceHat.getMinimumHeight();
			dst.bottom = mRect.top;

//			//Log.e("");
//			Log.e("FaceView", "l=" + left + ";r=" + right + ";t=" + top + ";b=" + bottom );
//
//			mFaceHat.setBounds( Math.round(left),
//					Math.round(right),
//					Math.round(top),
//					Math.round(bottom));

			//mFaceHat.draw( canvas );


			canvas.drawBitmap(mBtmHat, null, dst ,mLinePaint );
			canvas.drawCircle(mRect.centerX(), mRect.centerY(), 10, mLinePaint);
			canvas.drawCircle( mRect.left + mRect.width() / 4,
					mRect.top + mRect.height() / 4, 10, mLinePaint );
			canvas.drawCircle( mRect.right - mRect.width()/ 4,
					mRect.top + mRect.height() / 4, 10, mLinePaint );
			//canvas.drawCircle( mRect.centerX(), mRect.bottom - mRect.height() / 4,
			//		10, mLinePaint );
			return;
		}
		canvas.restore();
		super.onDraw(canvas);
	}

	private void initPaint(){
		mLinePaint = new Paint(Paint.ANTI_ALIAS_FLAG);
//		int color = Color.rgb(0, 150, 255);
		int color = Color.rgb(98, 212, 68);
//		mLinePaint.setColor(Color.RED);
		mLinePaint.setColor(color);
		mLinePaint.setStyle(Style.STROKE);
		mLinePaint.setStrokeWidth(5f);
		//mLinePaint.setAlpha(180);
		return;
	}
}
