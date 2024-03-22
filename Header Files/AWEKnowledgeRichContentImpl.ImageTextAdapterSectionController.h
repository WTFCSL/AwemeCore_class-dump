//
//     Generated by private class-dump
//

@protocol IESVideoPlayerProtocol;

@interface AWEKnowledgeRichContentImpl.ImageTextAdapterSectionController : BDMultiContentContainer.ImageTextContentSectionController <AFDRichContentPreviewable, AFDAlbumControllerHolder, AFDVideoControllerHolder, AFDPinchable, AFDSectionUpdatable, AFDSlidesViewUpdateableProtocol, AFDPureModePinchable, AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoTrackProtocol, AWEAwemePlayVideoInteractionProtocol, AWEAwemeGestureProtocol, AWEPlayVideoDelegate> {
    void /* unknown type, empty encoding */ zoomingCell;
    void /* unknown type, empty encoding */ zoomingView;
    void /* unknown type, empty encoding */ overlayView;
    void /* unknown type, empty encoding */ beginPoint;
    void /* unknown type, empty encoding */ pinchAnimator;
    void /* unknown type, empty encoding */ pinchZoomTracker;
    void /* unknown type, empty encoding */ shrinkImageView;
    void /* unknown type, empty encoding */ lastTrackedInnerIndex;
    void /* unknown type, empty encoding */ lastImageLoadIndex;
    void /* unknown type, empty encoding */ lastImageLoadDuration;
    void /* unknown type, empty encoding */ isFirstImage;
    void /* unknown type, empty encoding */ fistImageStamp;
    void /* unknown type, empty encoding */ firstClipPreloaded;
    void /* unknown type, empty encoding */ firstClipUseLocalCache;
    void /* unknown type, empty encoding */ bottomImageHeight;
    void /* unknown type, empty encoding */ hasLayoutBottomImage;
    void /* unknown type, empty encoding */ hasTrackFirstPicture;
    void /* unknown type, empty encoding */ imageContentViewOriginY;
    void /* unknown type, empty encoding */ imageContentViewHeight;
    void /* unknown type, empty encoding */ interactionViewTopY;
    void /* unknown type, empty encoding */ forceUsePlayerVideoPlayEndTracker;
    void /* unknown type, empty encoding */ preloadedClips;
    void /* unknown type, empty encoding */ loadedClips;
    void /* unknown type, empty encoding */ largestImageDur;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tagManager;
    void /* unknown type, empty encoding */ elementRect;
    void /* unknown type, empty encoding */ currentImageContentTopInset;
    void /* unknown type, empty encoding */ stickerManager;
    void /* unknown type, empty encoding */ globalBubbleContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stickerManagerDelegate;
    void /* unknown type, empty encoding */ perCellStickerManagers;
    void /* unknown type, empty encoding */ perCellStickerManagerDelegates;
}

@property (nonatomic) void /* unknown type, empty encoding */ forceUsePlayerVideoPlayEndTracker;
@property (nonatomic, retain) id<IESVideoPlayerProtocol> playerController;
@property (nonatomic, readonly) double currentPlaybackTime;

+ (Class)sectionViewModelClass;

- (id)currentPlayerController;
- (void)didEndPreview;
- (struct CGSize { double x0; double x1; })getImageViewSizeWithMaxWHRatio;
- (double)getImageContentTopInset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getTemporaryImageViewRectWithMinWHRatio;
- (void)needUpdateImageContentViewLayoutWithAnthorPostion;
- (id)getCurrentImageView;
- (id)getCurrentContentView;
- (id)getCurrentContentViewBackgroundColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCurrentContentViewRect:(id)arg0;
- (void)endShrinkAlbumContentAnimation;
- (BOOL)shouldAlbumResponseToPinch;
- (void)updateShrinkAlbumContentMode:(BOOL)arg0;
- (id)getVideoController;
- (void)prepareForDisplayIfNeeded;
- (BOOL)shouldResponseToPinchGesture:(id)arg0;
- (BOOL)shouldResponseToPanGesture:(id)arg0;
- (void)handlePinchGesture:(id)arg0;
- (void)handlePanGesture:(id)arg0;
- (void)updateWithSlidesView:(id)arg0;
- (void)updateWithOtherSectionUpdatable:(id)arg0;
- (id)pinchTargetView;
- (id)pinchBackgroundViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isContentReady;
- (void)showPauseIcon;
- (void)hidePauseIcon;
- (id)internalLogExtraDict;
- (id)getPlayModeWithAutoPlayMode;
- (id)repostModel;
- (id)repostFromModel;
- (id)playerExtraTrackInfo;
- (BOOL)isPlaying;
- (id)forwardingTargetForSelector:(SEL)arg0;
- (void)hideInteractionViews:(BOOL)arg0;
- (BOOL)shouldResponsetoLongPress:(struct CGPoint { double x0; double x1; })arg0;
- (void)player:(id)arg0 updatePlayTime:(double)arg1 canPlayTime:(double)arg2 totalTime:(double)arg3;
- (void)player:(id)arg0 didChangePlaybackToAction:(long long)arg1;
- (void)sectionControllerWillDisplay:(id)arg0;
- (void)sectionControllerDidEndDisplaying:(id)arg0;
- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (void)sectionWillDisplayCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (void)didBindSectionViewModel;
- (void)sectionDidEndDisplayingCell:(id)arg0 index:(long long)arg1;
- (void)viewControllerDidAppear:(BOOL)arg0;
- (void)viewControllerWillDisappear:(BOOL)arg0 isBeingDismissed:(BOOL)arg1 isMovingFromParentViewController:(BOOL)arg2;
- (BOOL)forceUsePlayerVideoPlayEndTracker;
- (void)setForceUsePlayerVideoPlayEndTracker:(BOOL)arg0;
- (void)handleImagePlayEndWithNoti:(id)arg0;
- (void)onBottomImageViewHeightChangeWithNoti:(id)arg0;
- (void)viewControllerDidDisappear:(BOOL)arg0;
- (void)listAdapter:(id)arg0 didScrollSectionController:(id)arg1;
- (void)listAdapter:(id)arg0 willBeginDraggingSectionController:(id)arg1;
- (void)listAdapter:(id)arg0 didEndDraggingSectionController:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)listAdapter:(id)arg0 didEndDeceleratingSectionController:(id)arg1;
- (double)currentPlaybackTime;
- (id)init;
- (void).cxx_destruct;
- (id)playerController;
- (void)setPlayerController:(id)arg0;
- (void)startProgressTimer;
- (void)dealloc;

@end
