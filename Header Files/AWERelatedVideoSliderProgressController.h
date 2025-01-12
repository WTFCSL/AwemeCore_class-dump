//
//     Generated by private class-dump
//

@class UIStackView, UIView, UIImage, NSString, AWERVLProgressSlider, UIImageView, UIButton, UIPanGestureRecognizer, NSMutableArray, AWEFakeProgressSliderView, UILabel, UIViewController;
@protocol AWEProgressViewControllerProtocol;

@interface AWERelatedVideoSliderProgressController : AWEVideoPlayControlBaseController <AWEProgressViewControllerDelegate> {
    BOOL _isScreenCast;
    BOOL _isHandleGesture;
    UIView *_progressLabelView;
    UILabel *_progressLeftLabel;
    UILabel *_progressRightLabel;
    UIImageView *_previewImageView;
    UIView *_preImageViewBackView;
    UIView *_bottomBar;
    UIView *_progressBar;
    AWERVLProgressSlider *_progressSlider;
    UIStackView *_bottomStackView;
    UIPanGestureRecognizer *_sliderPanGesture;
    AWEFakeProgressSliderView *_fakeProgressSlider;
    NSMutableArray *_videoHeadTailViewList;
    UIButton *_screencastPlayButton;
    UIView *_screencastLoadingView;
    UIView *_progressSliderTimeLabelView;
    UILabel *_progressSliderTimeLeftLabel;
    UILabel *_progressSliderTimeRightLabel;
    UIImageView *_divideLine;
    long long _rotateMode;
    UIImage *_minimunImage;
    UIImage *_maximunImage;
    UIImage *_wakeupMinimunImage;
    UIImage *_wakeupMaximunImage;
    UIImage *_engineBigImage;
    UIImage *_defaultThumbImage;
    UIImage *_strongDefaultThumbImage;
    NSMutableArray *_paymentTryWatchPointViewArray;
    UIViewController<AWEProgressViewControllerProtocol> *_progressVC;
    struct CGPoint { double x; double y; } _lastLocation;
}

@property (retain, nonatomic) UIView *progressLabelView;
@property (retain, nonatomic) UILabel *progressLeftLabel;
@property (retain, nonatomic) UILabel *progressRightLabel;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) UIView *preImageViewBackView;
@property (retain, nonatomic) UIView *bottomBar;
@property (retain, nonatomic) UIView *progressBar;
@property (retain, nonatomic) AWERVLProgressSlider *progressSlider;
@property (retain, nonatomic) UIStackView *bottomStackView;
@property (retain, nonatomic) UIPanGestureRecognizer *sliderPanGesture;
@property (retain, nonatomic) AWEFakeProgressSliderView *fakeProgressSlider;
@property (retain, nonatomic) NSMutableArray *videoHeadTailViewList;
@property (retain, nonatomic) UIButton *screencastPlayButton;
@property (retain, nonatomic) UIView *screencastLoadingView;
@property (nonatomic) BOOL isScreenCast;
@property (retain, nonatomic) UIView *progressSliderTimeLabelView;
@property (retain, nonatomic) UILabel *progressSliderTimeLeftLabel;
@property (retain, nonatomic) UILabel *progressSliderTimeRightLabel;
@property (retain, nonatomic) UIImageView *divideLine;
@property (nonatomic) long long rotateMode;
@property (retain, nonatomic) UIImage *minimunImage;
@property (retain, nonatomic) UIImage *maximunImage;
@property (retain, nonatomic) UIImage *wakeupMinimunImage;
@property (retain, nonatomic) UIImage *wakeupMaximunImage;
@property (retain, nonatomic) UIImage *engineBigImage;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (nonatomic) BOOL isHandleGesture;
@property (retain, nonatomic) UIImage *defaultThumbImage;
@property (retain, nonatomic) UIImage *strongDefaultThumbImage;
@property (retain, nonatomic) NSMutableArray *paymentTryWatchPointViewArray;
@property (retain, nonatomic) UIViewController<AWEProgressViewControllerProtocol> *progressVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (BOOL)shouldResponseRecognizer:(id)arg0;
- (BOOL)isScreenCast;
- (void)progressSliderTouchBegan:(id)arg0;
- (void)progressSliderValueChanged:(id)arg0;
- (void)setRotateMode:(long long)arg0;
- (long long)rotateMode;
- (void)bindEvent;
- (id)formateDuration:(id)arg0;
- (id)engineBigImage;
- (void)setEngineBigImage:(id)arg0;
- (id)progressLabelView;
- (id)progressLeftLabel;
- (id)progressRightLabel;
- (void)setProgressLabelView:(id)arg0;
- (void)setProgressLeftLabel:(id)arg0;
- (void)setProgressRightLabel:(id)arg0;
- (void)setUI;
- (void)updateProgressSliderToNormal;
- (id)divideLine;
- (void)setDivideLine:(id)arg0;
- (void)switchScreenCastLoadingModel:(BOOL)arg0;
- (void)progressSliderPanGesture:(id)arg0;
- (id)screencastLoadingView;
- (id)screenCastLoadingAnimation;
- (void)setScreencastLoadingView:(id)arg0;
- (id)preImageViewBackView;
- (id)fakeProgressSlider;
- (id)videoHeadTailViewList;
- (void)showVideoHeadTailWithStartPosition:(double)arg0 endPosition:(double)arg1;
- (id)getVideoHeadTailViewWithColor:(id)arg0;
- (void)updatePreImageViewState:(BOOL)arg0;
- (void)showTryWatchPointView;
- (id)paymentTryWatchPointViewArray;
- (void)showTryWatchPointWithStartPosition:(double)arg0 endPosition:(double)arg1;
- (id)makePaymentTryWatchPointView;
- (void)setFakeProgressSlider:(id)arg0;
- (void)setVideoHeadTailViewList:(id)arg0;
- (void)setPreImageViewBackView:(id)arg0;
- (void)setPaymentTryWatchPointViewArray:(id)arg0;
- (void)refreshPlayTime:(double)arg0 canPlayTime:(double)arg1 totalTime:(double)arg2 forceUpdate:(BOOL)arg3 animated:(BOOL)arg4;
- (void)setIsScreenCast:(BOOL)arg0;
- (void)onPlayAction:(id)arg0;
- (BOOL)shouldUseCommonProgress;
- (void)updatePreviewImageUI:(BOOL)arg0;
- (id)progressSliderTimeLabelView;
- (id)progressVC;
- (void)updateProgressSliderToWakeUp;
- (void)updateIsScreenCast:(BOOL)arg0;
- (id)screencastPlayButton;
- (id)progressSliderTimeLeftLabel;
- (id)progressSliderTimeRightLabel;
- (double)playAreaBottomOffset;
- (void)addProgressViewControllerIfNeed;
- (void)showVideoHeadTailView;
- (void)setProgressVC:(id)arg0;
- (void)updateProgressVCWithScreenCast:(BOOL)arg0;
- (void)setIsHandleGesture:(BOOL)arg0;
- (BOOL)isHandleGesture;
- (void)addFakeProgressSliderIfNeeds;
- (void)remakePadFakeSliderViewConstraint;
- (id)strongDefaultThumbImage;
- (id)wakeupMinimunImage;
- (id)wakeupMaximunImage;
- (id)defaultThumbImage;
- (id)minimunImage;
- (id)maximunImage;
- (void)progressSliderTouchBegan:(id)arg0 touchBeganBlock:(id /* block */)arg1;
- (void)progressSliderValueChanged:(id)arg0 touchChangedBlock:(id /* block */)arg1;
- (void)progressSliderTouchEnded:(id)arg0 bySlideScreen:(BOOL)arg1;
- (void)showFakeSliderIfNeeded;
- (void)restoreToNormalWhenTouchEnd;
- (void)progressSliderTouchEnded;
- (void)progressValueChangedWithStatus:(unsigned long long)arg0 triggerMethod:(unsigned long long)arg1 percentage:(double)arg2 extraInfo:(id)arg3;
- (void)progressStatusChangedFrom:(unsigned long long)arg0 to:(unsigned long long)arg1 withAction:(unsigned long long)arg2 animate:(BOOL)arg3;
- (id)sliderPanGesture;
- (void)setSliderPanGesture:(id)arg0;
- (void)setScreencastPlayButton:(id)arg0;
- (void)setProgressSliderTimeLabelView:(id)arg0;
- (void)setProgressSliderTimeLeftLabel:(id)arg0;
- (void)setProgressSliderTimeRightLabel:(id)arg0;
- (void)setMinimunImage:(id)arg0;
- (void)setMaximunImage:(id)arg0;
- (void)setWakeupMinimunImage:(id)arg0;
- (void)setWakeupMaximunImage:(id)arg0;
- (void)setDefaultThumbImage:(id)arg0;
- (void)setStrongDefaultThumbImage:(id)arg0;
- (BOOL)handlePan:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })lastLocation;
- (void)setLastLocation:(struct CGPoint { double x0; double x1; })arg0;
- (void)setBottomBar:(id)arg0;
- (id)bottomBar;
- (void)reset;
- (void)viewDidLoad;
- (id)previewImageView;
- (void)setPreviewImageView:(id)arg0;
- (id)progressBar;
- (void)setProgressBar:(id)arg0;
- (id)bottomStackView;
- (void)setBottomStackView:(id)arg0;
- (id)progressSlider;
- (void)setProgressSlider:(id)arg0;

@end
