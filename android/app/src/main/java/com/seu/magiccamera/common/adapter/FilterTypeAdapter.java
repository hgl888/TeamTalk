package com.seu.magiccamera.common.adapter;

import java.util.List;

import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.support.v7.widget.RecyclerView;
import android.support.v7.widget.RecyclerView.ViewHolder;

import com.seu.magiccamera.common.utils.FilterTypeHelper;
import com.show.tt.R;
import com.show.tt.ui.adapter.InternalAdapter;
import com.seu.magiccamera.common.bean.FilterTypeInfo;
import android.content.Context;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;

/**
 * Created by hougl on 2016/4/27.
 */
public class FilterTypeAdapter extends   RecyclerView.Adapter<FilterTypeAdapter.FilterTypeHolder>{
    private LayoutInflater mInflater;
    private int lastSelected = 0;
    private Context context;
    private List<FilterTypeInfo> filterTypeInfo;

    class FilterTypeHolder extends ViewHolder {
        ImageView typeImage;
        FrameLayout filtTypeRoot;
        FrameLayout filteTypeThumbSelected;
        View filteTypeThumbSelected_bg;
        public FilterTypeHolder(View itemView) {
            super(itemView);
        }
    };

    public FilterTypeAdapter( Context context ){
        this.context = context;
        this.mInflater = LayoutInflater.from(context);
    }

    public void setFilterTypeInfo( List<FilterTypeInfo> filterTypeInfo ){
        this.filterTypeInfo = filterTypeInfo;
        notifyDataSetChanged();
    }

    @Override
    public int getItemCount(){
        return filterTypeInfo.size();
    }

    @Override
    public int getItemViewType( int position){
        return filterTypeInfo.get(position).getFilterType();
    }

    @Override
    public void onBindViewHolder(FilterTypeHolder filterHolder, final int arg1 ){
        if( filterTypeInfo.get(arg1).getFilterType() != -1 ){
            filterHolder.typeImage.setImageResource(FilterTypeHelper.FilterType2Thumb(filterTypeInfo.get(arg1).getFilterType()));
           if( filterTypeInfo.get(arg1).isSelected()){
                filterHolder.filteTypeThumbSelected.setVisibility(View.VISIBLE);
                filterHolder.filteTypeThumbSelected_bg.setBackgroundColor(context.getResources().getColor( FilterTypeHelper.FilterType2Color(filterTypeInfo.get(arg1).getFilterType())));;
                filterHolder.filteTypeThumbSelected_bg.setAlpha( 0.7f );
            }else{
                filterHolder.filteTypeThumbSelected.setVisibility(View.GONE);
            }
            filterHolder.filtTypeRoot.setOnClickListener(new View.OnClickListener() {
                @Override
                public void onClick(View view) {
                    Log.e("FilterTypeAdapter", "test");
                    if( onFilterTypeChangeListener != null
                            && filterTypeInfo.get(arg1).getFilterType() != -1
                            && arg1!= lastSelected
                            && !filterTypeInfo.get(arg1).isSelected( )){
                        filterTypeInfo.get(lastSelected).setSelected( false);
                        filterTypeInfo.get(arg1).setSelected( true );
                        notifyItemChanged(lastSelected);
                        notifyItemChanged(arg1);
                        lastSelected = arg1;

                        onFilterTypeChangeListener.onFilterTypeChanged( filterTypeInfo.get(arg1).getFilterType(), arg1);
                        return;
                    }
                }
            });
        }
    }

    @Override
    public FilterTypeHolder onCreateViewHolder(ViewGroup arg0, int arg1 ){
        if( arg1 != -1 ) {
            View view = mInflater.inflate(R.layout.filter_type_item_layout, arg0, false);
            FilterTypeHolder viewHolder = new FilterTypeHolder(view);
            viewHolder.typeImage = (ImageView) view.findViewById(R.id.filter_type_image);
            viewHolder.filtTypeRoot = (FrameLayout) view.findViewById(R.id.filter_type_root);
            viewHolder.filteTypeThumbSelected = (FrameLayout)view.findViewById(R.id.filter_type_thumb_selected );
            viewHolder.filteTypeThumbSelected_bg = (View)view.findViewById(R.id.filter_type_thumb_selected_bg);
            return viewHolder;
        }else{
                View view = mInflater.inflate(R.layout.filter_division_layout, arg0, false );
                FilterTypeHolder viewHolder = new FilterTypeHolder(view);
                return viewHolder;
            }
    }

    public interface OnFilterTypeChangeListener{
        void onFilterTypeChanged(int filterType,int position);
    }

    private OnFilterTypeChangeListener onFilterTypeChangeListener;

    public void setOnFilterChangeListener(OnFilterTypeChangeListener onFilterChangeListener){
        this.onFilterTypeChangeListener = onFilterChangeListener;
    }
}
