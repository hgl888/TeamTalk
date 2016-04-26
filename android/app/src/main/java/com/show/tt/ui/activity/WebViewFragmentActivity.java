package com.show.tt.ui.activity;

import android.content.Intent;
import android.os.Bundle;

import com.show.tt.R;
import com.show.tt.config.IntentConstant;
import com.show.tt.ui.base.TTBaseFragmentActivity;
import com.show.tt.ui.fragment.WebviewFragment;

public class WebViewFragmentActivity extends TTBaseFragmentActivity {
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		Intent intent=getIntent();
		if (intent.hasExtra(IntentConstant.WEBVIEW_URL)) {
			WebviewFragment.setUrl(intent.getStringExtra(IntentConstant.WEBVIEW_URL));
		}
		setContentView(R.layout.tt_fragment_activity_webview);
	}

	@Override
	protected void onDestroy() {
		super.onDestroy();
	}
}
