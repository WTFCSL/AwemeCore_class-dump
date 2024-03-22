//
//     Generated by private class-dump
//

@class UILabel, AWEUILoadingView, AWERVNewDetailSkeletonView;

@interface AWERVNewDetailLoadMoreFooter : MJRefreshBackFooter {
    BOOL _isFirstAppear;
    AWEUILoadingView *_loadingView;
    AWERVNewDetailSkeletonView *_skeletonView;
    UILabel *_label;
}

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWERVNewDetailSkeletonView *skeletonView;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) BOOL isFirstAppear;

- (void)placeSubviews;
- (void)setLoadMoreLabelTextColor:(id)arg0;
- (void)scrollViewContentOffsetDidChange:(id)arg0;
- (void)scrollViewContentSizeDidChange:(id)arg0;
- (void)setIsFirstAppear:(BOOL)arg0;
- (void)__addObservers;
- (BOOL)scrollViewContentHeightBiggerThanFrameHeight;
- (BOOL)scrollViewDidReachBottom;
- (BOOL)scrollViewDidScrollUp;
- (id)skeletonView;
- (void)setSkeletonView:(id)arg0;
- (void)__removeObservers;
- (void)__startLoadingAnim;
- (void)__stopLoadingAnim;
- (void)resetIdleState;
- (void)applicationWillEnterForeground:(id)arg0;
- (void).cxx_destruct;
- (void)setState:(long long)arg0;
- (void)setLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepare;
- (id)label;
- (void)dealloc;
- (BOOL)isFirstAppear;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end