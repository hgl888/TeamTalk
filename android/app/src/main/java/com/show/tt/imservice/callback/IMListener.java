package com.show.tt.imservice.callback;

/**
 * @author : yingmu on 15-1-7.
 * @email : yingmu@mogujie.com.
 */
public interface IMListener<T> {
    public abstract void onSuccess(T response);

    public abstract void onFaild();

    public abstract void onTimeout();
}
