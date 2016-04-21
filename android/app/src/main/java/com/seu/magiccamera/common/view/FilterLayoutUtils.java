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
	private RecyclerView mFilterListView;
	//private ImageView btn_Favourite;

	private int position;
	private List<FilterInfo> filterInfos;
	private List<FilterInfo> whiteSkinInfos;
	
	private int mFilterType = MagicFilterType.NONE;
	
	public FilterLayoutUtils(Context context,MagicDisplay magicDisplay) {
		mContext = context;	
		mMagicDisplay = magicDisplay;
	}

	private void initFilter()
	{
		mAdapterFilter = new FilterAdapter(mContext);
		initFilterInfos();
		mAdapterFilter.setFilterInfos(filterInfos);
		mAdapterFilter.setOnFilterChangeListener(onFilterChangeListener);
	}

	private void initWhiteSkin()
	{
		mAdapterWhiteSkin = new FilterAdapter(mContext);
		initWhiteSkinInfos();
		mAdapterWhiteSkin.setFilterInfos(whiteSkinInfos);
		mAdapterWhiteSkin.setOnFilterChangeListener(onWhiteSkinChangeListener);
		return;
	}

	public void useFilter() {
		mFilterListView.setAdapter(mAdapterFilter);
	}

	public void useWhiteSkin(){
		mFilterListView.setAdapter(mAdapterWhiteSkin);
	}

	public void init(){
		//btn_Favourite = (ImageView) ((Activity) mContext).findViewById(R.id.btn_camera_favourite);
		//btn_Favourite.setOnClickListener(btn_Favourite_listener);

		LinearLayoutManager linearLayoutManager = new LinearLayoutManager(mContext);
		linearLayoutManager.setOrientation(LinearLayoutManager.HORIZONTAL);
		mFilterListView = (RecyclerView)((Activity) mContext).findViewById(R.id.filter_listView);
		mFilterListView.setLayoutManager(linearLayoutManager);

		initFilter();
		initWhiteSkin();
		useFilter();
		return;
	}

	public void init(View view){
		//btn_Favourite = (ImageView) view.findViewById(R.id.btn_camera_favourite);
		//btn_Favourite.setOnClickListener(btn_Favourite_listener);
		
		LinearLayoutManager linearLayoutManager = new LinearLayoutManager(mContext);  
        linearLayoutManager.setOrientation(LinearLayoutManager.HORIZONTAL); 
        mFilterListView = (RecyclerView) view.findViewById(R.id.filter_listView);
        mFilterListView.setLayoutManager(linearLayoutManager);

		initFilter();
		initWhiteSkin();
		useFilter();

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

	private FilterAdapter.onFilterChangeListener onWhiteSkinChangeListener = new FilterAdapter.onFilterChangeListener() {
		@Override
		public void onFilterChanged(int filterType, int position) {
			int type = whiteSkinInfos.get(position).getFilterType();
			FilterLayoutUtils.this.position = position;
			mMagicDisplay.setFilter( filterType );
			mFilterType = filterType;
		}
	};

	private void initWhiteSkinInfos(){
		whiteSkinInfos = new ArrayList<FilterInfo>();
		FilterInfo filterInof = new FilterInfo();
		filterInof.setFilterType(MagicFilterType.NONE);
		filterInof.setSelected(true);
		whiteSkinInfos.add(filterInof);

		//Divider
		filterInof = new FilterInfo();
		filterInof.setFilterType(-1);
		whiteSkinInfos.add( filterInof );

		for ( int i = MagicFilterType.WHITESKIN_BEAUTY; i <= MagicFilterType.WHITESKIN_END; i++ ){
			filterInof = new FilterInfo();
			filterInof.setFilterType( i );
			whiteSkinInfos.add( filterInof );
		}
		return;
	}
	
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
		for(int i = MagicFilterType.FILTER_FAIRYTALE; i < MagicFilterType.FILTER_END; i++){
			filterInfo = new FilterInfo();
			filterInfo.setFilterType(i);
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
