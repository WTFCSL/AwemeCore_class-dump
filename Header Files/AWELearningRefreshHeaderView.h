//
//     Generated by private class-dump
//

@class UILabel, NSString, UIScrollView, UIView, DUXLoadingParticleView;

@interface AWELearningRefreshHeaderView : UIControl {
    BOOL _notNeedExecuteRefreshBlock;
    BOOL _notNeedShowLoadingView;
    long long _currentRefreshStatus;
    long long _oldRefreshStatus;
    id /* block */ _refreshBlock;
    UIView *_greateView;
    double _greateViewHeight;
    NSString *_greateViewWillShowTips;
    NSString *_pullingTips;
    UIScrollView *_scrollView;
    UIView *_panelView;
    UIView *_loadingPanelView;
    DUXLoadingParticleView *_loadingView;
    UILabel *_loadingTips;
    UILabel *_sideMessage;
}

@property (copy, nonatomic) id /* block */ refreshBlock;
@property (retain, nonatomic) UIView *greateView;
@property (nonatomic) double greateViewHeight;
@property (copy, nonatomic) NSString *greateViewWillShowTips;
@property (copy, nonatomic) NSString *pullingTips;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) long long currentRefreshStatus;
@property (nonatomic) long long oldRefreshStatus;
@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) UIView *loadingPanelView;
@property (retain, nonatomic) DUXLoadingParticleView *loadingView;
@property (retain, nonatomic) UILabel *loadingTips;
@property (retain, nonatomic) UILabel *sideMessage;
@property (nonatomic) BOOL notNeedExecuteRefreshBlock;
@property (nonatomic) BOOL notNeedShowLoadingView;

+ (id)refreshWithBlock:(id /* block */)arg0 greateView:(id)arg1 greateViewHeight:(double)arg2 greateViewWillShowTips:(id)arg3;

- (long long)currentRefreshStatus;
- (void)setCurrentRefreshStatus:(long long)arg0;
- (void)enterRefreshingState:(BOOL)arg0 refresh:(BOOL)arg1;
- (void)scrollViewDidEndDragging:(id)arg0;
- (void)updateGreateViewHeight:(double)arg0;
- (void)stopRefreshingWithNoAnimation;
- (void)hiddenGreateView;
- (long long)oldRefreshStatus;
- (void)updateGreateView:(id)arg0 greateViewHeight:(double)arg1 greateViewWillShowTips:(id)arg2;
- (void)updatePullingTips:(id)arg0;
- (void)__setupUI;
- (id)panelView;
- (void)setPanelView:(id)arg0;
- (void)setGreateView:(id)arg0;
- (void)setGreateViewHeight:(double)arg0;
- (void)setGreateViewWillShowTips:(id)arg0;
- (void)__refresh;
- (double)greateViewHeight;
- (void)setPullingTips:(id)arg0;
- (void)setNotNeedExecuteRefreshBlock:(BOOL)arg0;
- (void)setNotNeedShowLoadingView:(BOOL)arg0;
- (id)loadingPanelView;
- (id)loadingTips;
- (id)sideMessage;
- (void)setOldRefreshStatus:(long long)arg0;
- (id)pullingTips;
- (id)greateViewWillShowTips;
- (BOOL)notNeedShowLoadingView;
- (BOOL)notNeedExecuteRefreshBlock;
- (id)greateView;
- (void)__updateGreateViewShow:(double)arg0;
- (void)showGreateView;
- (void)setLoadingPanelView:(id)arg0;
- (void)setLoadingTips:(id)arg0;
- (void)setSideMessage:(id)arg0;
- (void)stopRefreshing;
- (void)willMoveToSuperview:(id)arg0;
- (void)setScrollView:(id)arg0;
- (void).cxx_destruct;
- (void)startRefreshing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (id)scrollView;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)setRefreshBlock:(id /* block */)arg0;
- (id /* block */)refreshBlock;

@end
