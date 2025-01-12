//
//     Generated by private class-dump
//

@class UIViewController, AWEBasicModeVideoPlayerToastView, NSString, AWEBasicModeCustomDisplayViewModel, UITapGestureRecognizer;
@protocol AWEBasicModeDisplayViewControllerProtocol, AWEBasicModePlayInteractionViewControllerProtocol;

@interface AWEBasicModeCustomDisplayViewController : UIViewController <UIGestureRecognizerDelegate> {
    BOOL _isLastCell;
    BOOL _isValid;
    AWEBasicModeCustomDisplayViewModel *_displayModel;
    double _lastClickTimestamp;
    UITapGestureRecognizer *_tapGesture;
    UIViewController<AWEBasicModeDisplayViewControllerProtocol> *_videoController;
    UIViewController<AWEBasicModePlayInteractionViewControllerProtocol> *_interactionController;
    AWEBasicModeVideoPlayerToastView *_toastLabel;
}

@property (retain, nonatomic) AWEBasicModeCustomDisplayViewModel *displayModel;
@property (nonatomic) BOOL isLastCell;
@property (nonatomic) double lastClickTimestamp;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIViewController<AWEBasicModeDisplayViewControllerProtocol> *videoController;
@property (retain, nonatomic) UIViewController<AWEBasicModePlayInteractionViewControllerProtocol> *interactionController;
@property (retain, nonatomic) AWEBasicModeVideoPlayerToastView *toastLabel;
@property (nonatomic) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForDisplayWithoutCoverImage;
- (id)getVideoController;
- (void)configWithModel:(id)arg0;
- (void)setToastLabel:(id)arg0;
- (id)toastLabel;
- (BOOL)isLastCell;
- (void)setIsLastCell:(BOOL)arg0;
- (void)p_silentUpdate;
- (id)displayModel;
- (void)setDisplayModel:(id)arg0;
- (void)p_configVideoWithModel:(id)arg0;
- (void)p_configInteractionWithModel:(id)arg0;
- (void)p_initVideoController;
- (void)p_initInteractController;
- (void)_onVideoPlayerViewSingleClicked:(id)arg0;
- (double)lastClickTimestamp;
- (void)_onVideoPlayerViewDoubleClicked:(id)arg0;
- (void)setLastClickTimestamp:(double)arg0;
- (void)_onVideoPlayerViewClicked:(id)arg0;
- (void)replaceVideoPlayer:(id)arg0;
- (void)uninstallVideoController:(BOOL)arg0;
- (void)p_showToastWithText:(id)arg0;
- (void)prepareForDisplay;
- (double)currentPlaybackTime;
- (void)setIsValid:(BOOL)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)setInteractionController:(id)arg0;
- (void)stop;
- (BOOL)isValid;
- (id)tapGesture;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)interactionController;
- (void)dealloc;
- (BOOL)play;
- (BOOL)pause;
- (void)reset;
- (void)viewDidLoad;
- (BOOL)pause:(BOOL)arg0;
- (void)setTapGesture:(id)arg0;
- (id)videoController;
- (void)setVideoController:(id)arg0;

@end
