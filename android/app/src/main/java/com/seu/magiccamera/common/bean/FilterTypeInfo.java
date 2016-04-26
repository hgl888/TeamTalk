package com.seu.magiccamera.common.bean;

/**
 * Created by hougl on 2016/4/27.
 */
public class FilterTypeInfo {
    private boolean bSelected = false;
    private int filterType;

    public void setFilterType(int id){
        this.filterType = id;
    }

    public int getFilterType(){
        return this.filterType;
    }

    public boolean isSelected(){
        return bSelected;
    }

    public void setSelected(boolean bSelected){
        this.bSelected = bSelected;
    }


}
