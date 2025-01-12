//
//     Generated by private class-dump
//

@class UIScrollView, AWEUILoadingView;

@interface AWELiveSkylightSideRefreshView : UIView {
    BOOL _disableDragCancel;
    long long _state;
    UIScrollView *_scrollView;
    double _refreshInvokeThreshold;
    double _animationTime;
    AWEUILoadingView *_loading;
    id /* block */ _refreshingBlock;
    double _ignoredScrollViewContentInsetLeft;
    double _insetLDelta;
    double _originalInsetRight;
    double _pullingPercent;
    double _height;
    double _headerHeight;
    long long _direction;
    double _contentWidth;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _scrollViewOriginalInset;
}

@property (weak, nonatomic) AWEUILoadingView *loading;
@property (copy, nonatomic) id /* block */ refreshingBlock;
@property (nonatomic) double ignoredScrollViewContentInsetLeft;
@property (nonatomic) double insetLDelta;
@property (nonatomic) double originalInsetRight;
@property (nonatomic) double pullingPercent;
@property (nonatomic) double height;
@property (nonatomic) double headerHeight;
@property (nonatomic) long long direction;
@property (nonatomic) double contentWidth;
@property (nonatomic) long long state;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } scrollViewOriginalInset;
@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) BOOL isRefreshing;
@property (nonatomic) double refreshInvokeThreshold;
@property (nonatomic) BOOL disableDragCancel;
@property (nonatomic) double animationTime;

+ (id)leftRefreshViewWithRefreshingBlock:(id /* block */)arg0 height:(double)arg1;
+ (id)refreshViewWithRefreshingBlock:(id /* block */)arg0 height:(double)arg1 direction:(long long)arg2;

- (void)placeSubviews;
- (void)setRefreshingBlock:(id /* block */)arg0;
- (void)scrollViewContentOffsetDidChange:(id)arg0;
- (void)scrollViewContentSizeDidChange:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })scrollViewOriginalInset;
- (void)setPullingPercent:(double)arg0;
- (double)pullingPercent;
- (id /* block */)refreshingBlock;
- (void)executeRefreshingCallback;
- (id)initWithHeaderHeight:(double)arg0;
- (double)ignoredScrollViewContentInsetLeft;
- (double)originalInsetRight;
- (void)setInsetLDelta:(double)arg0;
- (double)refreshInvokeThreshold;
- (BOOL)disableDragCancel;
- (double)insetLDelta;
- (void)setRefreshInvokeThreshold:(double)arg0;
- (void)setDisableDragCancel:(BOOL)arg0;
- (void)setIgnoredScrollViewContentInsetLeft:(double)arg0;
- (void)setOriginalInsetRight:(double)arg0;
- (void)willMoveToSuperview:(id)arg0;
- (void)setLoading:(id)arg0;
- (void).cxx_destruct;
- (long long)state;
- (double)height;
- (void)setState:(long long)arg0;
- (long long)direction;
- (double)contentWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)beginRefreshing;
- (void)prepare;
- (id)loading;
- (double)headerHeight;
- (void)setHeight:(double)arg0;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)arg0;
- (void)setContentWidth:(double)arg0;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (id)scrollView;
- (void)endRefreshing;
- (BOOL)isRefreshing;
- (void)setDirection:(long long)arg0;
- (void)setHeaderHeight:(double)arg0;
- (void)addObservers;
- (void)removeObservers;
- (double)animationTime;
- (void)setAnimationTime:(double)arg0;

@end
