//
//     Generated by private class-dump
//

@class UIView;
@protocol BDXRefreshDelegate;

@interface BDXRefreshFooter : MJRefreshAutoFooter {
    BOOL _hasMore;
    BOOL _autoLoadMore;
    BOOL _canRebound;
    BOOL _canLoadMoreWhenScrollDisabled;
    id<BDXRefreshDelegate> _delegate;
    UIView *_footerView;
    SEL _releasedAction;
    long long _triggerTimes;
}

@property (weak, nonatomic) id<BDXRefreshDelegate> delegate;
@property (retain, nonatomic) UIView *footerView;
@property (nonatomic) SEL releasedAction;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long triggerTimes;
@property (nonatomic) BOOL autoLoadMore;
@property (nonatomic) BOOL canRebound;
@property (nonatomic) BOOL canLoadMoreWhenScrollDisabled;

- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)arg0;
- (void)scrollViewPanStateDidChange:(id)arg0;
- (void)scrollViewContentSizeDidChange:(id)arg0;
- (void)setPullingPercent:(double)arg0;
- (long long)triggerTimes;
- (void)setTriggerTimes:(long long)arg0;
- (void)setReleasedAction:(SEL)arg0;
- (SEL)releasedAction;
- (void)withReleasedAction:(SEL)arg0;
- (void)setAutoLoadMore:(BOOL)arg0;
- (void)setCanRebound:(BOOL)arg0;
- (void)setCanLoadMoreWhenScrollDisabled:(BOOL)arg0;
- (void)setYPosition;
- (BOOL)canRebound;
- (BOOL)autoLoadMore;
- (void)setInsetBottom:(double)arg0;
- (BOOL)canLoadMoreWhenScrollDisabled;
- (BOOL)tryRefresh:(double)arg0;
- (void)rebound;
- (void)footerRefreshingAction;
- (void)footerEndAction;
- (void)willMoveToSuperview:(id)arg0;
- (id)init;
- (id)footerView;
- (void)setFooterView:(id)arg0;
- (void).cxx_destruct;
- (void)setState:(long long)arg0;
- (id)delegate;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setDelegate:(id)arg0;

@end
