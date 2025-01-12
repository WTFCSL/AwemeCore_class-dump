//
//     Generated by private class-dump
//

@class NSString, UIImageView, NSDictionary, UICollectionViewCell, UIViewController;
@protocol AFDBroadcastContextProtocol, AWEAwemeBizPlayVideoProtocol, AFDRichContentListViewControllerProtocol, AWEAwemePlayVideoViewControllerProtocol, IESVideoPlayerProtocol;

@interface RichContentContainerViewController : UIViewController <AFDPureModePinchable, AFDRichContentContainerViewControllerProtocol> {
    void /* unknown type, empty encoding */ useMultiContentContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentVC;
    void /* unknown type, empty encoding */ pureModePageInteractionDelegate;
    void /* unknown type, empty encoding */ pureModeStickerController;
    void /* unknown type, empty encoding */ storyDelegate;
    void /* unknown type, empty encoding */ preloadController;
    void /* unknown type, empty encoding */ interactionController;
    void /* unknown type, empty encoding */ interactionNewController;
    void /* unknown type, empty encoding */ containerDelegate;
    void /* unknown type, empty encoding */ container;
    void /* unknown type, empty encoding */ baseContainerDelegate;
    void /* unknown type, empty encoding */ musicBeatsDelegate;
    void /* unknown type, empty encoding */ containerViewController;
    void /* unknown type, empty encoding */ audioWrapper;
    void /* unknown type, empty encoding */ videoWrapper;
    void /* unknown type, empty encoding */ cityInfoString;
    void /* unknown type, empty encoding */ usingLogExtraDictEnterMethod;
    void /* unknown type, empty encoding */ fromModel;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ shouldPrepareForDisplay;
    void /* unknown type, empty encoding */ clickEnter;
    void /* unknown type, empty encoding */ slideType;
    void /* unknown type, empty encoding */ detailSlide;
    void /* unknown type, empty encoding */ hasReportClickEnter;
    void /* unknown type, empty encoding */ referString;
    void /* unknown type, empty encoding */ enterFrom;
    void /* unknown type, empty encoding */ isFullScreen;
    void /* unknown type, empty encoding */ richBackgroundColor;
    void /* unknown type, empty encoding */ notFadeOut;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ originEntryEnterMethod;
    void /* unknown type, empty encoding */ interactionDelegate;
    void /* unknown type, empty encoding */ interactionNewDelegate;
    void /* unknown type, empty encoding */ shouldAdaptFullScreenThree;
    void /* unknown type, empty encoding */ forceUsePlayerVideoPlayEndTracker;
    void /* unknown type, empty encoding */ playerDelegate;
    void /* unknown type, empty encoding */ videoPlayerDelegate;
    void /* unknown type, empty encoding */ shouldAdaptFullScreen;
    void /* unknown type, empty encoding */ pageType;
    void /* unknown type, empty encoding */ reactId;
    void /* unknown type, empty encoding */ logExtraDict;
    void /* unknown type, empty encoding */ adEventName;
    void /* unknown type, empty encoding */ ruleId;
}

@property (nonatomic, readonly) BOOL hasTrackCaptionPicShow;
@property (nonatomic, readonly) long long currentSectionIndex;
@property (nonatomic, readonly) long long currentIndex;
@property (nonatomic, readonly) double currentProgress;
@property (nonatomic, readonly) double currentDuration;
@property (nonatomic, readonly) UICollectionViewCell *currentCell;
@property (nonatomic, readonly) long long currentImageIndex;
@property (nonatomic, readonly) UIImageView *currentImageView;
@property (nonatomic, readonly) BOOL isRefinedImageLayoutEnable;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentImageContentRectOC;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentImageRectInContentOC;
@property (nonatomic, readonly) double currentImageWHRatio;
@property (nonatomic) unsigned long long forceBouncesType;
@property (nonatomic) void /* unknown type, empty encoding */ useMultiContentContainer;
@property (nonatomic, readonly) UIViewController<AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoViewControllerProtocol> *videoController;
@property (nonatomic, readonly) UIViewController<AFDRichContentListViewControllerProtocol> *contentListViewController;
@property (nonatomic, weak) void /* unknown type, empty encoding */ pureModePageInteractionDelegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ pureModeStickerController;
@property (nonatomic, weak) void /* unknown type, empty encoding */ storyDelegate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ preloadController;
@property (nonatomic, weak) void /* unknown type, empty encoding */ interactionController;
@property (nonatomic, weak) void /* unknown type, empty encoding */ interactionNewController;
@property (nonatomic, weak) void /* unknown type, empty encoding */ containerDelegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ container;
@property (nonatomic, weak) void /* unknown type, empty encoding */ baseContainerDelegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ musicBeatsDelegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ containerViewController;
@property (nonatomic) void /* unknown type, empty encoding */ audioWrapper;
@property (nonatomic) void /* unknown type, empty encoding */ videoWrapper;
@property (nonatomic, copy) NSString *cityInfoString;
@property (nonatomic, retain) void /* unknown type, empty encoding */ usingLogExtraDictEnterMethod;
@property (nonatomic, retain) void /* unknown type, empty encoding */ fromModel;
@property (nonatomic, retain) void /* unknown type, empty encoding */ model;
@property (nonatomic) void /* unknown type, empty encoding */ shouldPrepareForDisplay;
@property (nonatomic, retain) void /* unknown type, empty encoding */ clickEnter;
@property (nonatomic, retain) void /* unknown type, empty encoding */ slideType;
@property (nonatomic, retain) void /* unknown type, empty encoding */ detailSlide;
@property (nonatomic) void /* unknown type, empty encoding */ hasReportClickEnter;
@property (nonatomic, copy) NSString *referString;
@property (nonatomic, copy) NSString *enterFrom;
@property (nonatomic) void /* unknown type, empty encoding */ isFullScreen;
@property (nonatomic, retain) void /* unknown type, empty encoding */ richBackgroundColor;
@property (nonatomic) void /* unknown type, empty encoding */ notFadeOut;
@property (nonatomic, copy) NSDictionary *context;
@property (nonatomic, copy) NSString *originEntryEnterMethod;
@property (nonatomic, weak) void /* unknown type, empty encoding */ interactionDelegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ interactionNewDelegate;
@property (nonatomic) void /* unknown type, empty encoding */ shouldAdaptFullScreenThree;
@property (nonatomic) void /* unknown type, empty encoding */ forceUsePlayerVideoPlayEndTracker;
@property (nonatomic) double defaultSeekToTime;
@property (nonatomic, retain) id<IESVideoPlayerProtocol> playerController;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerDelegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ videoPlayerDelegate;
@property (nonatomic) long long playState;
@property (nonatomic, readonly) long long loopTimes;
@property (nonatomic, readonly) double totalPlayTime;
@property (nonatomic, readonly) double playStartTimestamp;
@property (nonatomic) void /* unknown type, empty encoding */ shouldAdaptFullScreen;
@property (nonatomic) BOOL pauseBySingleClick;
@property (nonatomic, copy) NSString *pageType;
@property (nonatomic, copy) NSString *reactId;
@property (nonatomic, copy) NSDictionary *logExtraDict;
@property (nonatomic, copy) NSString *adEventName;
@property (nonatomic, copy) NSString *ruleId;
@property (nonatomic, readonly) id<AFDBroadcastContextProtocol> broadcastContext;

- (void)setHasCovered:(BOOL)arg0;
- (double)currentLoadDuration;
- (BOOL)hasTrackCaptionPicShow;
- (void)showRichAwemeFullPageWithInsertIds:(id)arg0 highlightID:(id)arg1 logExtra:(id)arg2 priorityType:(id)arg3;
- (BOOL)isAlbumStopState;
- (long long)viewedImagesCountWithItemID:(id)arg0;
- (id)viewedImagesUri;
- (long long)currentSectionInnerIndex;
- (BOOL)isMusicPlaying;
- (double)currentAlbumDuration;
- (struct CGSize { double x0; double x1; })getImageViewSizeWithMaxWHRatio;
- (double)getImageContentTopInset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getTemporaryImageViewRectWithMinWHRatio;
- (void)needUpdateImageContentViewLayoutWithAnthorPostion;
- (struct AFDAlbumImageZoomInfo { double x0; struct CGPoint { double x0; double x1; } x1; })currentImageZoomInfo;
- (void)setCurrentImageZoomWithInfo:(struct AFDAlbumImageZoomInfo { double x0; struct CGPoint { double x0; double x1; } x1; })arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)addTailEntranceGuideView:(id)arg0;
- (void)updateTailEntranceGuideViewConstraints:(double)arg0;
- (void)trackGraphicPlaytime;
- (void)retimeGraphicPlaytime;
- (void)disableGraphicPlaytime:(BOOL)arg0;
- (void)trackGraphicPlayTimeFeed;
- (void)retimeGraphicPlayTimeFeed;
- (void)disableGraphicPlayTimeFeed:(BOOL)arg0;
- (void)trackPinchZoomWithZoomType:(long long)arg0;
- (void)setAlbumFastPlay:(BOOL)arg0;
- (id)getPinchTargetViewForContainerView:(id)arg0;
- (void)updateAlbumContainerWithOtherRichContentContainer:(id)arg0 andPlayVideoVC:(id)arg1 inPureModeVC:(id)arg2;
- (void)updateWithAwemePlayVideoVC:(id)arg0 inPureModeVC:(id)arg1;
- (void)updateWithOtherRichContentContainer:(id)arg0 andPlayVideoVC:(id)arg1 inPureModeVC:(id)arg2;
- (void)configBeforEnterToLandscapeFeed:(BOOL)arg0;
- (void)configBeforEnterToLandscapeFeed;
- (void)configAfterQuitFromLandscapeFeed:(id)arg0;
- (id)internalLogExtraDict;
- (id)getPlayModeWithAutoPlayMode;
- (id)repostModel;
- (id)repostFromModel;
- (id)playerExtraTrackInfo;
- (void)pauseWithAnimation;
- (void)playWithAnimation;
- (void)setPauseHidden:(BOOL)arg0;
- (BOOL)shouldResponseToTapPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)updatePlayerController:(id)arg0 withPlayVideoVC:(id)arg1;
- (void)recreatePlayerAndPrepare;
- (void)updatePlayerBackgroundViewIfNeededWhenLandscape:(BOOL)arg0 fromHomepageHot:(BOOL)arg1;
- (void)removePlayerBackgroundViewIfNeeded;
- (id)getPlayerBackgroundView;
- (BOOL)holdStop;
- (void)updatePlayerIfNeeded;
- (void)setPlayerSeekTime:(double)arg0 completion:(id /* block */)arg1;
- (void)prepareForDisplay;
- (BOOL)stop;
- (BOOL)play;
- (BOOL)pause;
- (void)reset;
- (void)willDisplay;
- (void)updatePaginatedProgress:(double)arg0;
- (void)setPureMode:(BOOL)arg0;
- (void)setNeedGradientLayer:(BOOL)arg0;
- (void)setContentScene:(unsigned long long)arg0;
- (void)setProgressControllerDelegate:(id)arg0;
- (void)setContainerPlayEnable:(BOOL)arg0;
- (void)buildInteractionControllerIfNeeded:(id)arg0;
- (BOOL)edgePan:(id)arg0;
- (BOOL)isPlayingFirstStory;
- (BOOL)isContentLoading;
- (BOOL)shouldHandleSingleClick;
- (void)handleSingleClick;
- (BOOL)isLocationInInteractiveView:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)tryToHandleTapStickerInPoint:(struct CGPoint { double x0; double x1; })arg0;
- (id)currentAwemeModel;
- (void)setIsPureModeFromAlbumDetail:(BOOL)arg0;
- (void)setNeedSetTargetContentOffset;
- (BOOL)isSectionPlaying;
- (void)scrollNoneSlideMethodToIndex:(long long)arg0;
- (void)scrollToIndex:(long long)arg0 method:(unsigned long long)arg1;
- (void)scrollToIndex:(long long)arg0 method:(unsigned long long)arg1 syncUpdateCell:(BOOL)arg2;
- (void)scrollToAweme:(id)arg0;
- (void)syncUpdateCell;
- (id)convertGlobalIndexToIndexPath:(long long)arg0;
- (void)cycleUpdateCurrentSectionIndexBy:(long long)arg0;
- (BOOL)isContainAweme:(id)arg0;
- (void)rotateConfigAfterQuitFromLandscapeFeed:(id)arg0;
- (BOOL)isCollectionViewPanGesture:(id)arg0;
- (BOOL)shouldRespondToEdgePanGesture:(id)arg0;
- (void)updateWithSlidesView:(id)arg0;
- (void)updateAlbumContainerWithOtherContainer:(id)arg0;
- (void)updateAlbumHandlerWithOtherContainer:(id)arg0;
- (void)updateAlbumPlayStateWithOtherContainer:(id)arg0 playVideoVC:(id)arg1;
- (void)updateWithRichContentContainer:(id)arg0 andPlayerController:(id)arg1;
- (void)hideContentView:(BOOL)arg0;
- (void)updateAlbumProgressWithOtherContainer:(id)arg0 andPlayerController:(id)arg1;
- (void)forcePlay;
- (BOOL)shouldAlbumReponseToPinch;
- (void)setCustomProgressDelegate:(id)arg0;
- (id)richContainerProgressController;
- (id)currentDotFromCenter;
- (void)createFinishTrackTriggerIfNeeded;
- (void)transferFinishTrackTriggerTo:(id)arg0;
- (void)resetFinishTrackTrigger;
- (id)indexProgressForVideo;
- (id)transitionContext;
- (void)setIsPinching:(BOOL)arg0;
- (id)itemsCount;
- (id)selectedItemIndex;
- (void)handlePinchGesture:(id)arg0;
- (void)playFromBeginning;
- (void)pauseTimer;
- (void)playTimer;
- (id)pinchTargetView;
- (id)pinchBackgroundViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isContentReady;
- (long long)currentSectionIndex;
- (BOOL)isRefinedImageLayoutEnable;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentImageContentRectOC;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentImageRectInContentOC;
- (double)currentImageWHRatio;
- (unsigned long long)forceBouncesType;
- (void)setForceBouncesType:(unsigned long long)arg0;
- (long long)currentImageIndex;
- (long long)currentIndex;
- (id)currentImageView;
- (double)currentProgress;
- (id)currentCell;
- (double)currentDuration;
- (id)reactId;
- (void)setReactId:(id)arg0;
- (id)cityInfoString;
- (void)setCityInfoString:(id)arg0;
- (id)originEntryEnterMethod;
- (void)setOriginEntryEnterMethod:(id)arg0;
- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (void)setReferString:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)enterFrom;
- (id)adEventName;
- (void)setAdEventName:(id)arg0;
- (id)fromModel;
- (void)setFromModel:(id)arg0;
- (BOOL)shouldPrepareForDisplay;
- (void)setShouldPrepareForDisplay:(BOOL)arg0;
- (void)setStoryDelegate:(id)arg0;
- (id)contentListViewController;
- (id)pureModeStickerController;
- (void)setPureModeStickerController:(id)arg0;
- (id)storyDelegate;
- (id)preloadController;
- (void)setPreloadController:(id)arg0;
- (id)interactionNewController;
- (void)setInteractionNewController:(id)arg0;
- (id)musicBeatsDelegate;
- (void)setMusicBeatsDelegate:(id)arg0;
- (id)broadcastContext;
- (BOOL)useMultiContentContainer;
- (void)setUseMultiContentContainer:(BOOL)arg0;
- (id)richBackgroundColor;
- (void)setRichBackgroundColor:(id)arg0;
- (BOOL)notFadeOut;
- (void)setNotFadeOut:(BOOL)arg0;
- (void)setPlayerDelegate:(id)arg0;
- (id)detailSlide;
- (void)setDetailSlide:(id)arg0;
- (id)pureModePageInteractionDelegate;
- (void)setPureModePageInteractionDelegate:(id)arg0;
- (id)baseContainerDelegate;
- (void)setBaseContainerDelegate:(id)arg0;
- (BOOL)forceUsePlayerVideoPlayEndTracker;
- (void)setForceUsePlayerVideoPlayEndTracker:(BOOL)arg0;
- (id)playerDelegate;
- (id)videoPlayerDelegate;
- (void)setVideoPlayerDelegate:(id)arg0;
- (long long)loopTimes;
- (double)totalPlayTime;
- (double)playStartTimestamp;
- (double)defaultSeekToTime;
- (void)setDefaultSeekToTime:(double)arg0;
- (BOOL)shouldAdaptFullScreen;
- (void)setShouldAdaptFullScreen:(BOOL)arg0;
- (BOOL)shouldAdaptFullScreenThree;
- (void)setShouldAdaptFullScreenThree:(BOOL)arg0;
- (BOOL)pauseBySingleClick;
- (void)setPauseBySingleClick:(BOOL)arg0;
- (id)interactionNewDelegate;
- (void)setInteractionNewDelegate:(id)arg0;
- (id)clickEnter;
- (void)setClickEnter:(id)arg0;
- (id)slideType;
- (void)setSlideType:(id)arg0;
- (BOOL)hasReportClickEnter;
- (void)setHasReportClickEnter:(BOOL)arg0;
- (struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *)audioWrapper;
- (void)setAudioWrapper:(struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *)arg0;
- (struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *)videoWrapper;
- (void)setVideoWrapper:(struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *)arg0;
- (id)usingLogExtraDictEnterMethod;
- (void)setUsingLogExtraDictEnterMethod:(id)arg0;
- (id)pageType;
- (id)container;
- (void)setModel:(id)arg0;
- (void)setContainerViewController:(id)arg0;
- (BOOL)isFullScreen;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (id)containerViewController;
- (void)setContext:(id)arg0;
- (id)model;
- (void)setInteractionController:(id)arg0;
- (id)playerController;
- (void)setContainer:(id)arg0;
- (void)setInteractionDelegate:(id)arg0;
- (id)interactionDelegate;
- (void)setPlayerController:(id)arg0;
- (id)interactionController;
- (id)context;
- (id)initWithCoder:(id)arg0;
- (void)setPageType:(id)arg0;
- (BOOL)isPlaying;
- (id)forwardingTargetForSelector:(SEL)arg0;
- (void)viewDidLoad;
- (BOOL)accessibilityScroll:(long long)arg0;
- (void)setIsFullScreen:(BOOL)arg0;
- (id)videoController;
- (long long)playState;
- (void)setPlayState:(long long)arg0;
- (void)setRuleId:(id)arg0;
- (id)ruleId;
- (id)containerDelegate;
- (void)setContainerDelegate:(id)arg0;

@end
