package com.seu.magiccamera.common.view;

import java.util.ArrayList;
import java.util.List;
import java.util.logging.Filter;

import android.app.Activity;
import android.content.Context;
import android.content.SharedPreferences;
import android.content.SharedPreferences.Editor;
import android.support.v7.widget.LinearLayoutManager;
import android.support.v7.widget.RecyclerView;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.RelativeLayout;

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
	private FilterAdapter mAdapterTypeFilter;
	private RecyclerView mFilterListView;
	private RecyclerView mTypeFilterListView;
	private RelativeLayout mLayoutFilterChose;
	//private ImageView btn_Favourite;

	private int position;
	private List<FilterInfo> filterInfos;
	private List<FilterInfo> whiteSkinInfos;
	private List<FilterInfo> typeFilterInfos;
	
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

	private void initTypeFilter(){
		mAdapterTypeFilter = new FilterAdapter(mContext);
		initTypeFilterInfos();
		mAdapterTypeFilter.setFilterInfos( typeFilterInfos );
		mAdapterTypeFilter.setOnFilterChangeListener(onTypeFilterChangeListener);
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
		mTypeFilterListView.clearFocus();
		mTypeFilterListView.setVisibility(View.GONE);
		mLayoutFilterChose.setVisibility(View.VISIBLE);
		mFilterListView.setAdapter(mAdapterFilter);
	}

	public void useWhiteSkin(){
		mTypeFilterListView.clearFocus();
		mTypeFilterListView.setVisibility(View.GONE);
		mLayoutFilterChose.setVisibility(View.VISIBLE);
		mFilterListView.setAdapter(mAdapterWhiteSkin);
	}

	public void userTypeFilter()
	{
		mTypeFilterListView.setVisibility(View.VISIBLE);
		mLayoutFilterChose.setVisibility(View.GONE);
		mFilterListView.setAdapter( mAdapterFilter);
		mTypeFilterListView.setAdapter( mAdapterTypeFilter);
	}

	public void init(){

		LinearLayoutManager linearLayoutManager = new LinearLayoutManager(mContext);
		linearLayoutManager.setOrientation(LinearLayoutManager.HORIZONTAL);
		mFilterListView = (RecyclerView)((Activity) mContext).findViewById(R.id.filter_listView);
		mFilterListView.setLayoutManager(linearLayoutManager);

		LinearLayoutManager linearLayoutManager1 = new LinearLayoutManager(mContext);
		linearLayoutManager1.setOrientation(LinearLayoutManager.HORIZONTAL);
		mTypeFilterListView = (RecyclerView)((Activity)mContext).findViewById(R.id.type_filter_listView );
		mTypeFilterListView.setLayoutManager(linearLayoutManager1 );

		mLayoutFilterChose = (RelativeLayout)((Activity)mContext).findViewById(R.id.layout_filter_chose);

		initFilter();
		initWhiteSkin();
		initTypeFilter();
		return;
	}

	public void init(View view){
		init();
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

	private FilterAdapter.onFilterChangeListener onTypeFilterChangeListener = new FilterAdapter.onFilterChangeListener() {
		@Override
		public void onFilterChanged(int filterType, int position) {

		}
	};

	private void initTypeFilterInfos(){
		typeFilterInfos = new ArrayList<FilterInfo>();
		FilterInfo filterInfo = new FilterInfo();
		filterInfo.setFilterType( MagicFilterType.NONE);
		filterInfo.setSelected(true);
		typeFilterInfos.add( filterInfo );

		//Divider
		filterInfo = new FilterInfo();
		filterInfo.setFilterType( -1 );
		typeFilterInfos.add(filterInfo );

		for ( int i = MagicFilterType.WHITESKIN_BEAUTY; i <= MagicFilterType.WHITESKIN_END; i++ ){
			filterInfo = new FilterInfo();
			filterInfo.setFilterType( i );
			typeFilterInfos.add( filterInfo );
		}

	}

	private void initWhiteSkinInfos(){
		whiteSkinInfos = new ArrayList<FilterInfo>();
		FilterInfo filterInfo = new FilterInfo();
		filterInfo.setFilterType(MagicFilterType.NONE);
		filterInfo.setSelected(true);
		whiteSkinInfos.add(filterInfo);

		//Divider
		filterInfo = new FilterInfo();
		filterInfo.setFilterType(-1);
		whiteSkinInfos.add( filterInfo );

		for ( int i = MagicFilterType.WHITESKIN_BEAUTY; i <= MagicFilterType.WHITESKIN_END; i++ ){
			filterInfo = new FilterInfo();
			filterInfo.setFilterType(i);
			whiteSkinInfos.add( filterInfo );
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
