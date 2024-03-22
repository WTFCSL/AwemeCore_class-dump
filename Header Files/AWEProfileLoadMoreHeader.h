//
//     Generated by private class-dump
//

@class UIButton, NSMutableDictionary, AWEUILoadingView, YYLabel;

@interface AWEProfileLoadMoreHeader : MJRefreshFooter {
    BOOL _newPanGesture;
    BOOL _firstLoadMore;
    double _positonY;
    id /* block */ _changeVisiableBlock;
    AWEUILoadingView *_loadingView;
    YYLabel *_label;
    UIButton *_button;
    NSMutableDictionary *_stateTitles;
}

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) YYLabel *label;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) NSMutableDictionary *stateTitles;
@property (nonatomic) BOOL newPanGesture;
@property (nonatomic) BOOL firstLoadMore;
@property (nonatomic) double positonY;
@property (copy, nonatomic) id /* block */ changeVisiableBlock;

- (void)endRefreshingWithNoMoreData;
- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)arg0;
- (void)scrollViewPanStateDidChange:(id)arg0;
- (void)scrollViewContentSizeDidChange:(id)arg0;
- (void)handleTapAction;
- (void)__addObservers;
- (void)setStateTitles:(id)arg0;
- (id)stateTitles;
- (void)setNewPanGesture:(BOOL)arg0;
- (BOOL)newPanGesture;
- (void)endRefreshingWithNoMoreDataCompletionBlock:(id /* block */)arg0;
- (void)__startLoadingAnim;
- (void)__stopLoadingAnim;
- (void)setPositonY:(double)arg0;
- (double)positonY;
- (id /* block */)changeVisiableBlock;
- (BOOL)firstLoadMore;
- (void)setFirstLoadMore:(BOOL)arg0;
- (void)__forceUpdateUI;
- (void)setChangeVisiableBlock:(id /* block */)arg0;
- (void)willMoveToSuperview:(id)arg0;
- (void)applicationWillEnterForeground:(id)arg0;
- (void).cxx_destruct;
- (id)button;
- (void)setButton:(id)arg0;
- (void)setState:(long long)arg0;
- (void)setLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepare;
- (id)label;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end