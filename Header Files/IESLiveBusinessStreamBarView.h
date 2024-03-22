//
//     Generated by private class-dump
//

@class HTSLiveBusinessConfigure, IESLiveGCDTimer, IESLiveAnimatedImageView, UILabel, UIButton;

@interface IESLiveBusinessStreamBarView : UIView {
    id /* block */ _allAnimationFinished;
    IESLiveAnimatedImageView *_backgroundView;
    UILabel *_adTagLabel;
    UIButton *_arrowRightBtn;
    UILabel *_jumpPromptLabel;
    HTSLiveBusinessConfigure *_configure;
    IESLiveGCDTimer *_timeStampTimer;
}

@property (retain, nonatomic) IESLiveAnimatedImageView *backgroundView;
@property (retain, nonatomic) UILabel *adTagLabel;
@property (retain, nonatomic) UIButton *arrowRightBtn;
@property (retain, nonatomic) UILabel *jumpPromptLabel;
@property (retain, nonatomic) HTSLiveBusinessConfigure *configure;
@property (retain, nonatomic) IESLiveGCDTimer *timeStampTimer;
@property (copy, nonatomic) id /* block */ allAnimationFinished;

- (id)adTagLabel;
- (void)setAdTagLabel:(id)arg0;
- (void)setConfigure:(id)arg0;
- (id)p_getTrackParams;
- (void)closeBar;
- (id /* block */)allAnimationFinished;
- (void)setAllAnimationFinished:(id /* block */)arg0;
- (id)initWithBusinessConfigure:(id)arg0;
- (void)startTimerWithDuration:(double)arg0;
- (void)setTimeStampTimer:(id)arg0;
- (id)timeStampTimer;
- (void)restartAnimated;
- (id)arrowRightBtn;
- (id)jumpPromptLabel;
- (void)layoutPortraitSubviews;
- (void)layoutLandscapeSubviews;
- (void)p_openAdSchema;
- (void)setArrowRightBtn:(id)arg0;
- (void)setJumpPromptLabel:(id)arg0;
- (id)configure;
- (id)backgroundView;
- (void)dismissAnimated:(BOOL)arg0;
- (void).cxx_destruct;
- (void)show;
- (void)dealloc;
- (void)setBackgroundView:(id)arg0;
- (void)setupViews;

@end
