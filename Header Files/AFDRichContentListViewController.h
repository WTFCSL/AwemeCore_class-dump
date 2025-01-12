//
//     Generated by private class-dump
//

@class _TtC14AWEFriendsImpl25RichContentListViewHolder, AWEBaseListViewModel, UIImageView, _TtC14AWEFriendsImpl24RichContentListViewModel;
@protocol AWEAwemeDisplayViewController, AFDRichContentPageContextProtocol, AFDRichContentListViewModelProtocol, AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoTrackProtocol;

@interface AFDRichContentListViewController : AWEBaseListViewController <AFDAlbumDetailTransitionOuterContextProvider, AWEShellViewControllerProtocol, UIScrollViewDelegate, AFDRichContentListViewControllerProtocol, AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoTrackProtocol, AWELandscapeFeedProtocol, AWEVideoDescriptionMaskLayerProtocol, UIGestureRecognizerDelegate, AWEAwemeContentControllerProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_enableControllerKit;
    void /* unknown type, empty encoding */ $__lazy_storage_$_controllerManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_touchDownGesture;
    void /* unknown type, empty encoding */ interactionController;
    void /* unknown type, empty encoding */ richAwemeFullPageVC;
    void /* unknown type, empty encoding */ searchAdRichAwemeFullPageVC;
    void /* unknown type, empty encoding */ lastUpdatedProgress;
    void /* unknown type, empty encoding */ isInLandscapeMode;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionViewChangeBackgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionViewChangePanelView;
    void /* unknown type, empty encoding */ collectionViewChangePanelCurrentContentView;
    void /* unknown type, empty encoding */ collectionViewChangePanelTopGradientView;
    void /* unknown type, empty encoding */ collectionViewChangePanelBottomGradientView;
    void /* unknown type, empty encoding */ collectionViewChangePanelbottomMaskImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pageContext;
    void /* unknown type, empty encoding */ lastSectionIndex;
    void /* unknown type, empty encoding */ accessibilityView;
    void /* unknown type, empty encoding */ collectionViewSize;
    void /* unknown type, empty encoding */ isContentOffsetChanged;
    void /* unknown type, empty encoding */ isTransitionAnimating;
    void /* unknown type, empty encoding */ isAppear;
    void /* unknown type, empty encoding */ $__lazy_storage_$_progressController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_concernLeftPanGuideView;
    void /* unknown type, empty encoding */ customProgressDelegate;
    void /* unknown type, empty encoding */ tailEntranceGuideView;
    void /* unknown type, empty encoding */ collectionViewContentSizeObserver;
    void /* unknown type, empty encoding */ collectionViewFrameEqualSuperView;
    void /* unknown type, empty encoding */ needPlayWhenIndexUpdate;
}

@property (nonatomic, readonly) AWEBaseListViewModel<AFDRichContentListViewModelProtocol> *listVM;
@property (nonatomic, readonly) id<AFDRichContentPageContextProtocol> contentPageContext;
@property (nonatomic) BOOL pauseBySingleClick;
@property (nonatomic) BOOL forceUsePlayerVideoPlayEndTracker;
@property (nonatomic, readonly) _TtC14AWEFriendsImpl24RichContentListViewModel *viewModel;
@property (nonatomic, readonly) _TtC14AWEFriendsImpl25RichContentListViewHolder *viewHolder;
@property (nonatomic) void /* unknown type, empty encoding */ isInLandscapeMode;
@property (nonatomic, readonly) id<AWEAwemeBizPlayVideoProtocol, AWEAwemeDisplayViewController, AWEAwemePlayVideoTrackProtocol> currentVideoController;
@property (nonatomic, readonly) UIImageView *currentImageView;
@property (nonatomic, readonly) BOOL shouldAlbumResponseToPinch;

+ (Class)viewModelClass;
+ (Class)collectionViewClass;
+ (Class)viewHolderClass;

- (void)customLayoutCollectionView:(id)arg0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)pauseWithAnimation;
- (void)playWithAnimation;
- (BOOL)holdStop;
- (unsigned long long)pinchTransition_destinatedType;
- (BOOL)transition_shouldStartPinchInteractiveTranstionForZoomType:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (id)transition_destinatedViewControllerForZoomType:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (BOOL)transition_shouldStartPinchInteractiveTranstionToVC:(id)arg0;
- (void)setPureMode:(BOOL)arg0;
- (void)setProgressControllerDelegate:(id)arg0;
- (void)buildInteractionControllerIfNeeded:(id)arg0;
- (BOOL)edgePan:(id)arg0;
- (BOOL)isPlayingFirstStory;
- (BOOL)isContentLoading;
- (BOOL)shouldHandleSingleClick;
- (void)handleSingleClick;
- (id)currentAwemeModel;
- (void)rotateConfigAfterQuitFromLandscapeFeed:(id)arg0;
- (void)setHasCovered:(BOOL)arg0;
- (double)currentLoadDuration;
- (void)setCustomProgressDelegate:(id)arg0;
- (void)configBeforEnterToLandscapeFeed:(BOOL)arg0;
- (void)configBeforEnterToLandscapeFeed;
- (void)configAfterQuitFromLandscapeFeed:(id)arg0;
- (void)configAfterQuitFromLandscapeFeedForPersonalStory:(id)arg0;
- (struct CGSize { double x0; double x1; })getImageViewSizeWithMaxWHRatio;
- (double)getImageContentTopInset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getTemporaryImageViewRectWithMinWHRatio;
- (void)needUpdateImageContentViewLayoutWithAnthorPostion;
- (void)setCurrentImageZoomWithInfo:(struct AFDAlbumImageZoomInfo { double x0; struct CGPoint { double x0; double x1; } x1; })arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)addTailEntranceGuideView:(id)arg0;
- (void)updateTailEntranceGuideViewConstraints:(double)arg0;
- (void)setPauseHidden:(BOOL)arg0;
- (void)updatePlayerIfNeeded;
- (void)showPauseIcon;
- (void)hidePauseIcon;
- (BOOL)shouldResponseToPinchGesture:(id)arg0;
- (BOOL)shouldResponseToPanGesture:(id)arg0;
- (BOOL)shouldResponseToTapPoint:(struct CGPoint { double x0; double x1; })arg0;
- (id)indexProgressForVideo;
- (BOOL)forceUsePlayerVideoPlayEndTracker;
- (void)setForceUsePlayerVideoPlayEndTracker:(BOOL)arg0;
- (BOOL)pauseBySingleClick;
- (void)setPauseBySingleClick:(BOOL)arg0;
- (id)internalLogExtraDict;
- (id)getPlayModeWithAutoPlayMode;
- (id)repostModel;
- (id)repostFromModel;
- (id)playerExtraTrackInfo;
- (void)updateAudioPlayWithPlayVideoVC:(id)arg0;
- (id)viewHolder;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })arg0 originalTargetContentOffset:(struct CGPoint { double x0; double x1; })arg1;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)arg0;
- (id)currentVideoController;
- (void)albumDetailSinkingTransitionWillBegin;
- (void)albumDetailSinkingTransitionDidCancel;
- (void)albumDetailSinkingTransitionDidEnd;
- (void)albumDetailDidBack;
- (void)albumDetailTransitionWillBegin;
- (void)albumDetailTransitionDidEnd;
- (void)albumDetailPinchInTransitionWillBegin;
- (void)albumDetailPinchInTransitionDidCancel;
- (void)albumDetailPinchInTransitionDidEnd;
- (BOOL)shouldAlbumResponseToPinch;
- (id)modernTransitionContext;
- (id)contentPageContext;
- (id)outerAlbumContainer;
- (id)interactionViewSnapShot;
- (void)playOrPauseTimer:(BOOL)arg0;
- (id)listVM;
- (BOOL)isInLandscapeMode;
- (void)viewWillDisplay;
- (void)showRichAwemeFullPageWithInsertIds:(id)arg0 highlightID:(id)arg1 logExtra:(id)arg2 currentIndex:(long long)arg3 commentExtraParams:(id)arg4 priorityType:(id)arg5;
- (void)showFullPageFeedWithPriorityType:(id)arg0 currentIndex:(long long)arg1 logExtra:(id)arg2;
- (void)updateInteractionViewFrame;
- (void)setIsInLandscapeMode:(BOOL)arg0;
- (long long)progressBarThumbnailCount;
- (void)showADRichAwemeFullPageWithCurrentIndex:(long long)arg0;
- (void)configBeforEnterToVideoDescriptionMaskLayer;
- (void)configAfterQuitFromVideoDescriptionMaskLayer:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })awemeContentViewInitFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })awemeContentViewFrame;
- (void)updateAwemeContentViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareForDisplay;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)arg2;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (BOOL)stop;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)itemsCount;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (id)currentImageView;
- (id)viewModel;
- (void)didReceiveMemoryWarning;
- (BOOL)isPlaying;
- (id)selectedItemIndex;
- (id)forwardingTargetForSelector:(SEL)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (BOOL)play;
- (BOOL)pause;
- (void)reset;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (BOOL)accessibilityScroll:(long long)arg0;
- (void)handlePinchGesture:(id)arg0;
- (void)handlePanGesture:(id)arg0;
- (void)setupCollectionView:(id)arg0;
- (void)willDisplay;
- (BOOL)userScrolled;
- (void)handleTouchDown:(id)arg0;

@end
