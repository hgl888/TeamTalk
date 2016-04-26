package com.show.tt.app;

import android.app.Application;
import android.content.Intent;
import com.show.tt.imservice.service.IMService;
import com.show.tt.utils.ImageLoaderUtil;
import com.show.tt.utils.Logger;


public class IMApplication extends Application {

	private Logger logger = Logger.getLogger(IMApplication.class);

	/**
	 * @param args
	 */
	public static void main(String[] args) {
	}

	@Override
	public void onCreate() {
		super.onCreate();
		logger.i("Application starts");
		startIMService();
		ImageLoaderUtil.initImageLoaderConfig(getApplicationContext());
	}

	private void startIMService() {
		logger.i("start IMService");
		Intent intent = new Intent();
		intent.setClass(this, IMService.class);
		startService(intent);
	}

    public static boolean gifRunning = true;//gif是否运行
}
