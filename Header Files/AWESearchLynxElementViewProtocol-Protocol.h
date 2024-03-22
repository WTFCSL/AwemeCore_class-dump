//
//     Generated by private class-dump
//

@protocol SearchDynamicElementStatusDelegate;

@protocol AWESearchLynxElementViewProtocol <NSObject>

@property (weak, nonatomic) id<SearchDynamicElementStatusDelegate> statusDelegate;
@property (nonatomic) long long transitionIndex;

- (BOOL)isMediaSourceCard;
- (id)getLynxElementType;
- (id)transitionContext;
- (id)statusDelegate;
- (void)setStatusDelegate:(id)arg0;
- (id)videoView;

@optional

- (id)liveTransitionContext;
- (id)currentAwemeModel;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithFromContext:(id)arg0;
- (void)modernTransitionUpdateOffset:(long long)arg0 isScrolled:(BOOL)arg1;
- (void)resetLivePlayer;
- (BOOL)shouldRVDTransitionUpdatePlayerControllerWithFromContext:(id)arg0;
- (void)didStartShowing;
- (void)didEndShowing;
- (void)updateDataContainerWidth:(id)arg0;
- (void)startScroll;
- (void)endScroll;
- (long long)transitionIndex;
- (void)setTransitionIndex:(long long)arg0;
- (void)updateAwemeList:(id)arg0;
- (void)updateAwemeModel:(id)arg0;
- (void)viewWillDisAppear;
- (BOOL)shouldEnterFullScreenWithPlayer;
- (BOOL)shouldEnterFullScreenWithPlayStatus;
- (void)updateTransitionIndex:(long long)arg0 idList:(id)arg1;
- (void)refreshAwemeList:(id)arg0;
- (void)updateLoadMoreAwemeList:(id)arg0;
- (void)updateTrackerContext:(id)arg0;
- (void)updateSearchVideoCardName:(id)arg0;
- (void)updateParentContainerWidth:(id)arg0;
- (void)updateWaterFallLayoutType:(id)arg0;
- (void)updateLandScapeType:(id)arg0;
- (BOOL)needUpdateAwemeListOnPaymentChange;
- (void)horizontalLoadmoreWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)didBecomeActive;
- (id)viewController;
- (void)didResignActive;
- (void)viewDidAppear;
- (void)prepareForReuse;
- (id)transitionView;
- (void)willEnterFullScreen;
- (void)resetPlayer;
- (id)transitionContextProvider;
- (id)livePlayer;
- (void)pauseWithSingleClick;
- (void)playWithSingleClick;

@end
