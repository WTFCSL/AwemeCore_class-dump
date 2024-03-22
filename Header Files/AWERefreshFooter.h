//
//     Generated by private class-dump
//

@interface AWERefreshFooter : MJRefreshFooter {
    BOOL _needBounces;
    BOOL _forbidTriggerLoadMore;
    BOOL _triggerAtTracking;
    BOOL _newPanGesture;
    long long _mj_insetBResetedOffset;
}

@property (nonatomic) BOOL newPanGesture;
@property (nonatomic) BOOL needBounces;
@property (nonatomic) BOOL forbidTriggerLoadMore;
@property (nonatomic) BOOL triggerAtTracking;
@property (nonatomic) long long mj_insetBResetedOffset;

- (void)setNeedBounces:(BOOL)arg0;
- (void)setTriggerAtTracking:(BOOL)arg0;
- (void)scrollViewContentOffsetDidChange:(id)arg0;
- (void)scrollViewPanStateDidChange:(id)arg0;
- (void)scrollViewContentSizeDidChange:(id)arg0;
- (void)setForbidTriggerLoadMore:(BOOL)arg0;
- (void)setHiddenAndUpdateLayout:(BOOL)arg0;
- (void)setNewPanGesture:(BOOL)arg0;
- (BOOL)forbidTriggerLoadMore;
- (BOOL)triggerAtTracking;
- (BOOL)newPanGesture;
- (void)_updateScrollViewInsetBottomAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)_resetScrollViewInsetBottomAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (long long)mj_insetBResetedOffset;
- (BOOL)scrollViewContentHeightBiggerThanFrameHeight;
- (BOOL)scrollViewDidReachBottom;
- (BOOL)scrollViewDidScrollUp;
- (BOOL)needBounces;
- (void)endRefreshingWithNoMoreDataCompletionBlock:(id /* block */)arg0;
- (void)setMj_insetBResetedOffset:(long long)arg0;
- (void)willMoveToSuperview:(id)arg0;
- (void)setState:(long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end