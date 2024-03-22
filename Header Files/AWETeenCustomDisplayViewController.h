//
//     Generated by private class-dump
//

@class AWETeenVideoPlayerToastView, NSString, AWEAwemeModel, UIView, AWETeenCustomDisplayViewModel, UIViewController;
@protocol AWETeenPinchZoomTransitionHelperProtocol, AWETeenCustomDisplayViewControllerDelegate, AWETeenDisplayViewControllerProtocol, AWETeenPlayInteractionViewControllerPortocol;

@interface AWETeenCustomDisplayViewController : UIViewController <AWETeenPlayInteractionViewControllerDelegate, AWETeenVideoPlayerContainer, AWETeenPanelPresentPortocol, AWETeenVideoContainerProtocol, AWETeenPureModePageOuterContextProvider, AWETeenPureModePageInnerContextProvider> {
    BOOL _isPinchedToPurePage;
    BOOL _isLandscape;
    BOOL _isLastCell;
    BOOL _didShowPanel;
    BOOL _isValid;
    BOOL _shouldUpdateProgressDirectly;
    long long _vcType;
    long long _mediaType;
    long long _type;
    UIViewController<AWETeenDisplayViewControllerProtocol> *_videoController;
    UIViewController<AWETeenPlayInteractionViewControllerPortocol> *_interactionController;
    id<AWETeenCustomDisplayViewControllerDelegate> _interactionDelegate;
    AWETeenCustomDisplayViewModel *_displayModel;
    UIView *_gradientBackgroundView;
    AWETeenVideoPlayerToastView *_toastLabel;
    NSString *_seekEndToastText;
    id<AWETeenPinchZoomTransitionHelperProtocol> _pinchZoomTransitionHelper;
}

@property (weak, nonatomic) id<AWETeenCustomDisplayViewControllerDelegate> interactionDelegate;
@property (retain, nonatomic) AWETeenCustomDisplayViewModel *displayModel;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL isLastCell;
@property (nonatomic) BOOL didShowPanel;
@property (retain, nonatomic) UIView *gradientBackgroundView;
@property (retain, nonatomic) UIViewController<AWETeenDisplayViewControllerProtocol> *videoController;
@property (retain, nonatomic) UIViewController<AWETeenPlayInteractionViewControllerPortocol> *interactionController;
@property (retain, nonatomic) AWETeenVideoPlayerToastView *toastLabel;
@property (retain, nonatomic) NSString *seekEndToastText;
@property (nonatomic) BOOL isValid;
@property (retain, nonatomic) id<AWETeenPinchZoomTransitionHelperProtocol> pinchZoomTransitionHelper;
@property (nonatomic) BOOL shouldUpdateProgressDirectly;
@property (nonatomic) long long mediaType;
@property (nonatomic) long long type;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isPinchedToPurePage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long vcType;

- (unsigned long long)pinchTransition_destinatedType;
- (BOOL)transition_shouldStartPinchInteractiveTranstionForZoomType:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (id)transition_destinatedViewControllerForZoomType:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (BOOL)transition_shouldStartPinchInteractiveTranstionToVC:(id)arg0;
- (void)prepareForDisplayWithoutCoverImage;
- (void)inner_pinchTransitionWillBegin;
- (void)inner_pinchTransitionDidFinish;
- (void)inner_pinchTransitionDidCancel;
- (void)outer_pinchTransitionWillBegin;
- (void)outer_pinchTransitionDidFinish;
- (void)outer_pinchTransitionDidCancel;
- (id)getVideoController;
- (void)transition_didEndPinchTransitionWithContext:(id)arg0;
- (void)transition_didStartPinchTransitionWithContext:(id)arg0;
- (void)configWithModel:(id)arg0;
- (void)setGradientBackgroundView:(id)arg0;
- (BOOL)alertIfNotValidForAction:(long long)arg0;
- (void)setIsPinchedToPurePage:(BOOL)arg0;
- (void)setVcType:(long long)arg0;
- (void)setToastLabel:(id)arg0;
- (id)toastLabel;
- (BOOL)isLastCell;
- (void)setIsLastCell:(BOOL)arg0;
- (void)p_silentUpdate;
- (id)displayModel;
- (void)setDisplayModel:(id)arg0;
- (void)p_initVideoController;
- (void)p_initInteractController;
- (void)replaceVideoPlayer:(id)arg0;
- (void)p_showToastWithText:(id)arg0;
- (void)willDisplayWithFromSlideUp:(id)arg0 usingPreloaded:(BOOL)arg1;
- (BOOL)isPinchedToPurePage;
- (void)preparePinchZoomTransition;
- (id)pinchZoomTransitionHelper;
- (void)resetPinchZoomTransition;
- (void)setPinchZoomTransitionHelper:(id)arg0;
- (void)doActionIfNotValid;
- (long long)vcType;
- (BOOL)didShowPanel;
- (void)willPresentPanel:(id)arg0;
- (void)didPresentPanel:(id)arg0;
- (void)willDismissPanel:(id)arg0;
- (void)didDismissPanel:(id)arg0;
- (id)initWithMediaType:(long long)arg0 isLandscape:(BOOL)arg1;
- (void)setDidShowPanel:(BOOL)arg0;
- (id)preloadCurrentViewController;
- (void)p_addMaskView;
- (void)p_showUpgradeIfNeeded;
- (long long)p_awemeTypeFromVideoController:(id)arg0;
- (void)p_configVideoWithModel:(id)arg0 shouldRebuild:(BOOL)arg1;
- (void)p_configInteractionWithModel:(id)arg0 shouldRebuild:(BOOL)arg1;
- (double)currentSliderProgress;
- (void)showStrongSubscribe;
- (void)setSeekEndToastText:(id)arg0;
- (id)seekEndToastText;
- (void)p_showUpgradeModal;
- (void)interactionSelectAlbumClicked;
- (void)interactionEnterLandscapeClicked;
- (void)interactionExitLandscapeClicked;
- (void)interactionNextEpisodeButtonClicked;
- (void)interactionPlayButtonClicked:(BOOL)arg0;
- (void)interactionScreenCastButtonClicked;
- (void)interactionViewImmersiveStatusChanged:(unsigned long long)arg0;
- (void)interactionMorePanelShow:(BOOL)arg0;
- (void)interactionReportSubmit;
- (BOOL)interactionCanShowEyeProtectionRemind;
- (void)swipeToNextImage;
- (void)swipeToLastImage;
- (void)setShouldUpdateProgressDirectly:(BOOL)arg0;
- (void)showLongPressPanelWithGesture:(id)arg0;
- (void)interactionStickerCardClicked;
- (void)uninstallVideoController:(BOOL)arg0 installNew:(BOOL)arg1;
- (id)getSliderView;
- (id)outer_pinchTargetView;
- (void)outer_updatePlayerController:(id)arg0 withPlayVideoVC:(id)arg1 model:(id)arg2;
- (void)inner_updatePlayerController:(id)arg0 withPlayVideoVC:(id)arg1 model:(id)arg2;
- (void)hideInteractionView:(BOOL)arg0 animated:(BOOL)arg1;
- (BOOL)canShowProgressForAweme:(id)arg0;
- (BOOL)shouldUpdateProgressDirectly;
- (void)prepareForDisplay;
- (void)setModel:(id)arg0;
- (double)currentPlaybackTime;
- (void)setMediaType:(long long)arg0;
- (void)setIsValid:(BOOL)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)setInteractionController:(id)arg0;
- (void)setInteractionDelegate:(id)arg0;
- (void)stop;
- (long long)mediaType;
- (id)interactionDelegate;
- (long long)type;
- (BOOL)isValid;
- (BOOL)play:(BOOL)arg0;
- (void)setIsLandscape:(BOOL)arg0;
- (void)setType:(long long)arg0;
- (id)interactionController;
- (BOOL)isLandscape;
- (void)dealloc;
- (BOOL)play;
- (BOOL)pause;
- (void)reset;
- (void)viewDidLoad;
- (BOOL)pause:(BOOL)arg0;
- (void)seekToTime:(double)arg0;
- (void)didEndDisplaying;
- (id)videoController;
- (void)setVideoController:(id)arg0;
- (void)willDisplay;
- (id)gradientBackgroundView;

@end