//
//     Generated by private class-dump
//

@class AWEGeneralSearchVideoCardView, NSString, UIViewController;
@protocol AWESearchVideoRecommendedWordViewProtocol, AWEModernFeedCellContext, AWEModernFeedCellFrameProtocol;

@interface AWEGeneralSearchVideoCardViewController : UIViewController <AWEModernFeedCellControllerProtocol, AWEGeneralSearchVideoCardContext, AWESearchModernVideoProtocol> {
    id<AWEModernFeedCellContext> _context;
    AWEGeneralSearchVideoCardView *_videoCardView;
    id<AWEModernFeedCellFrameProtocol> _bindedCellFrame;
}

@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (retain, nonatomic) AWEGeneralSearchVideoCardView *videoCardView;
@property (retain, nonatomic) id<AWEModernFeedCellFrameProtocol> bindedCellFrame;
@property (retain, nonatomic) Class cardClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIViewController<AWESearchVideoRecommendedWordViewProtocol> *videoRecommendedWordView;

+ (double)modernFeedCellPreferedHeightForModel:(id)arg0 width:(double)arg1;
+ (id)transformCardModelForCellFrame:(id)arg0;
+ (void)updateVideoCardModel:(id)arg0 withCellFrame:(id)arg1;
+ (BOOL)shouldUseTileController:(id)arg0;
+ (BOOL)shouldUseADTileControllerWith:(id)arg0;

- (id)logExtraDict;
- (BOOL)isContentLoading;
- (id)relatedViewControllerForPrefetch;
- (void)startMagnifyTransition;
- (void)endShrinkTransition;
- (BOOL)delayInteraction;
- (BOOL)shouldSetMask;
- (id)displayPercentagesForCallback:(BOOL)arg0;
- (void)componentDisplayWithTopPercentage:(double)arg0 isReverse:(BOOL)arg1;
- (void)registerCallback:(id /* block */)arg0 forReachingPlaybackTime:(double)arg1;
- (void)updateWithReferString:(id)arg0;
- (void)didStartShowing;
- (void)didBecomeActiveForReason:(unsigned long long)arg0;
- (void)didResignActiveForReason:(unsigned long long)arg0;
- (void)didEndShowing;
- (void)didBecomeVisibleToUsers;
- (id)bindedData;
- (void)forceBecomeActive;
- (void)singleTapEnterAwemeDetailWithExtra:(id)arg0;
- (void)saveCurrentScrollingState;
- (void)focusCurrentCellIfNeeded;
- (void)videoPlayerWillPlay;
- (void)singleTapEnterAwemeDetail;
- (void)endForceBecomingActive;
- (void)reConfigCellFrame;
- (void)reloadCurrentCard;
- (void)videoSinglePlayed:(long long)arg0 cardModel:(id)arg1 awemeModel:(id)arg2 isFromDetail:(BOOL)arg3;
- (BOOL)isInCachalotEnv;
- (void)addSubviewToAccessibilityElementsIfNeed:(id)arg0;
- (id)videoRecommendedWordView;
- (void)handleVideoRecommendedWordViewShow:(id)arg0 awemeModel:(id)arg1 extraParams:(id)arg2 failureCallback:(id /* block */)arg3;
- (BOOL)shouldShowVideoRecommendedWord:(id)arg0;
- (void)setVideoRecommendedWordView:(id)arg0;
- (id)videoCardView;
- (void)setBindedCellFrame:(id)arg0;
- (id)bindedCellFrame;
- (long long)indexOfAccessibilityElementToBeInserted:(id)arg0;
- (void)setVideoCardView:(id)arg0;
- (id)initWithContext:(id)arg0;
- (id)transitionContext;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)context;
- (void)prepareForReuse;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (void)updateWithViewModel:(id)arg0;
- (void)updateWithModel:(id)arg0;

@end
