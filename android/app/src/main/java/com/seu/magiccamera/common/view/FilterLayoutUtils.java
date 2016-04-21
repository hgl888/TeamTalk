package com.seu.magiccamera.common.view;

import java.util.ArrayList;
import java.util.List;

import android.app.Activity;
import android.content.Context;
import android.content.SharedPreferences;
import android.content.SharedPreferences.Editor;
import android.support.v7.widget.LinearLayoutManager;
import android.support.v7.widget.RecyclerView;
import android.view.View;
import android.view.View.OnClickListener;

import com.seu.magiccamera.common.adapter.FilterAdapter;
import com.seu.magiccamera.common.bean.FilterInfo;
import com.seu.magicfilter.display.MagicDisplay;
import com.seu.magicfilter.filter.helper.MagicFilterType;
import com.show.tt.R;

public class FilterLayoutUtils{
	private Context mContext;
	private MagicDisplay mMagicDisplay;
	private FilterAdapter mAdapterFilter;
	private FilterAdapter mAdapterWhiteSkin;
	//private ImageView btn_Favourite;

	private int position;
	private List<FilterInfo> filterInfos;
	//private List<FilterInfo> favouriteFilterInfos;
	
	private int mFilterType = MagicFilterType.NONE;
	
	public FilterLayoutUtils(Context context,MagicDisplay magicDisplay) {
		mContext = context;	
		mMagicDisplay = magicDisplay;
	}

	public void init(){
		//btn_Favourite = (ImageView) ((Activity) mContext).findViewById(R.id.btn_camera_favourite);
		//btn_Favourite.setOnClickListener(btn_Favourite_listener);
		
		LinearLayoutManager linearLayoutManager = new LinearLayoutManager(mContext);  
        linearLayoutManager.setOrientation(LinearLayoutManager.HORIZONTAL); 
        RecyclerView mFilterListView = (RecyclerView)((Activity) mContext).findViewById(R.id.filter_listView);
        mFilterListView.setLayoutManager(linearLayoutManager);       
        
        mAdapterFilter = new FilterAdapter(mContext);
        mFilterListView.setAdapter(mAdapterFilter);
        initFilterInfos();
        mAdapterFilter.setFilterInfos(filterInfos);
        mAdapterFilter.setOnFilterChangeListener(onFilterChangeListener);
	}
	
	public void init(View view){
		//btn_Favourite = (ImageView) view.findViewById(R.id.btn_camera_favourite);
		//btn_Favourite.setOnClickListener(btn_Favourite_listener);
		
		LinearLayoutManager linearLayoutManager = new LinearLayoutManager(mContext);  
        linearLayoutManager.setOrientation(LinearLayoutManager.HORIZONTAL); 
        RecyclerView mFilterListView = (RecyclerView) view.findViewById(R.id.filter_listView);
        mFilterListView.setLayoutManager(linearLayoutManager);       
        
        mAdapterFilter = new FilterAdapter(mContext);
        mFilterListView.setAdapter(mAdapterFilter);
        initFilterInfos();
        mAdapterFilter.setFilterInfos(filterInfos);
        mAdapterFilter.setOnFilterChangeListener(onFilterChangeListener);
        
        view.findViewById(R.id.btn_camera_usefilter).setVisibility(View.GONE);
	}
	
	private FilterAdapter.onFilterChangeListener onFilterChangeListener = new FilterAdapter.onFilterChangeListener(){

		@Override
		public void onFilterChanged(int filterType, int position)
		{
			// TODO Auto-generated method stub
			int Type = filterInfos.get(position).getFilterType();
			FilterLayoutUtils.this.position = position;
			mMagicDisplay.setFilter(filterType);
			mFilterType = filterType;

		}
		
	};
	
	private void initFilterInfos(){
		filterInfos = new ArrayList<FilterInfo>();
		//add original
		FilterInfo filterInfo = new FilterInfo();
		filterInfo.setFilterType(MagicFilterType.NONE);
		filterInfo.setSelected(true);
		filterInfos.add(filterInfo);
		
		//add Divider
		filterInfo = new FilterInfo();
		filterInfo.setFilterType(-1);
		filterInfos.add(filterInfo);
		
		//addAll
		for(int i = 1;i < MagicFilterType.FILTER_COUNT; i++){
			filterInfo = new FilterInfo();
			filterInfo.setFilterType(MagicFilterType.NONE + i);
			filterInfos.add(filterInfo);
		}
		return;
	}
	
	private OnClickListener btn_Favourite_listener = new OnClickListener() {
		
		@Override
		public void onClick(View v) {


		}
	};	
	

	private void saveFavourite(){
		SharedPreferences shared = ((Activity) mContext).getSharedPreferences("favourite_filter",Activity.MODE_PRIVATE);
		Editor editor = shared.edit();
		editor.remove("favourite_filter_list");
		editor.commit();
		String str = "";
		editor.putString("favourite_filter_list", str);
		editor.commit();
	}
	
	public int getFilterType(){
		return mFilterType;
	}
}
