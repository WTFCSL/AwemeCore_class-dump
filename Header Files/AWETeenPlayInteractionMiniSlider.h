//
//     Generated by private class-dump
//

@class NSTimer, UIView, AWETeenModePlayerProgressSlider, AWETeenPlayInteractionContext, UIImage, UIWindow, AWETeenPlayInteractionProgressHelper, UIVisualEffectView;

@interface AWETeenPlayInteractionMiniSlider : UIView {
    BOOL _isAppearing;
    BOOL _isSliding;
    BOOL _pause;
    AWETeenPlayInteractionProgressHelper *_progressHelper;
    AWETeenModePlayerProgressSlider *_progressSlider;
    AWETeenModePlayerProgressSlider *_fakeProgressSlider;
    UIWindow *_window;
    AWETeenPlayInteractionContext *_context;
    UIView *_progressSliderUnderView;
    NSTimer *_sliderToNormalTimer;
    UIImage *_defaultThumbImage;
    UIImage *_middleThumbImage;
    UIImage *_wakeupDefaultThumbImage;
    UIVisualEffectView *_blurBackgroudView;
    UIView *_maskView;
}

@property (weak, nonatomic) AWETeenPlayInteractionProgressHelper *progressHelper;
@property (retain, nonatomic) AWETeenModePlayerProgressSlider *progressSlider;
@property (retain, nonatomic) AWETeenModePlayerProgressSlider *fakeProgressSlider;
@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) AWETeenPlayInteractionContext *context;
@property (retain, nonatomic) UIView *progressSliderUnderView;
@property (nonatomic) BOOL isSliding;
@property (nonatomic) BOOL pause;
@property (retain, nonatomic) NSTimer *sliderToNormalTimer;
@property (retain, nonatomic) UIImage *defaultThumbImage;
@property (retain, nonatomic) UIImage *middleThumbImage;
@property (retain, nonatomic) UIImage *wakeupDefaultThumbImage;
@property (retain, nonatomic) UIVisualEffectView *blurBackgroudView;
@property (retain, nonatomic) UIView *maskView;
@property (nonatomic) BOOL isAppearing;

- (BOOL)isSliding;
- (void)setIsSliding:(BOOL)arg0;
- (id)fakeProgressSlider;
- (void)setFakeProgressSlider:(id)arg0;
- (id)defaultThumbImage;
- (void)setDefaultThumbImage:(id)arg0;
- (id)blurBackgroudView;
- (void)setBlurBackgroudView:(id)arg0;
- (id)progressHelper;
- (void)setProgressHelper:(id)arg0;
- (id)sliderToNormalTimer;
- (id)progressSliderUnderView;
- (void)p_updateProgressSliderToNormal;
- (void)p_stopSliderToNormalTimer;
- (void)p_updateProgressSliderToWakeUp;
- (void)p_updateProgressSliderToMiddle;
- (void)p_startSliderToNormalTimer;
- (id)wakeupDefaultThumbImage;
- (id)middleThumbImage;
- (void)setSliderToNormalTimer:(id)arg0;
- (id)initWithProgressHelper:(id)arg0 context:(id)arg1;
- (void)updateSliderStatusWithPause:(BOOL)arg0;
- (void)hideUnderView;
- (void)setProgressSliderUnderView:(id)arg0;
- (void)setMiddleThumbImage:(id)arg0;
- (void)setWakeupDefaultThumbImage:(id)arg0;
- (void).cxx_destruct;
- (void)setIsAppearing:(BOOL)arg0;
- (void)setContext:(id)arg0;
- (id)maskView;
- (void)setPause:(BOOL)arg0;
- (void)setWindow:(id)arg0;
- (BOOL)isAppearing;
- (id)context;
- (id)window;
- (void)dealloc;
- (BOOL)pause;
- (void)setMaskView:(id)arg0;
- (id)progressSlider;
- (void)setProgressSlider:(id)arg0;

@end
