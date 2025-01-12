//
//     Generated by private class-dump
//

@class AWENoxusPlayerSettingTypeView, UILabel, AWEDemaciaPlayerAirPlayInfoView, NSDictionary, AWENoxusLongVideoDetailResponseModel, AWENoxusPlayerTrialBuyBar, AWENoxusLongVideoStatusBarView, AWENoxusGradientView, UIButton, UIView, CAGradientLayer, UIProgressView, NSString, NSTimer, AWENoxusPlayerProgressSlider, AWENoxusPlayerPayMaskView, AWENoxusPlayerStateTipView, UIImageView;
@protocol AWENoxusPlayerControlViewDelegate;

@interface AWENoxusPlayerControlView : UIView <AWENoxusPlayerSettingTypeViewDelegate, AWENoxusPlayerStateTipDelegate, AWENoxusPlayerTrialBuyBarDelegate, AWENoxusPlayerPayMaskViewDelegate, AWENoxusPlayerControlView> {
    BOOL _isPlaying;
    BOOL _isStopped;
    BOOL _trialShouldShow;
    BOOL _isSlidering;
    BOOL _tapSliderSeeking;
    BOOL _isTouchSlider;
    id<AWENoxusPlayerControlViewDelegate> _delegate;
    long long _rotateMode;
    double _dragTime;
    double _totalTime;
    UIView *_topBar;
    UIButton *_backButton;
    UIButton *_loadingBackButton;
    UIButton *_tvButton;
    UILabel *_titleLabel;
    UIImageView *_previewImageView;
    AWENoxusPlayerSettingTypeView *_playerSettingView;
    AWENoxusPlayerStateTipView *_settingTipView;
    UIView *_progressLabelView;
    UILabel *_progressLeftLabel;
    UILabel *_progressRightLabel;
    UIView *_bottomBar;
    UIButton *_playButton;
    UIButton *_nextButton;
    UILabel *_timeLabel;
    UILabel *_totalTimeLabel;
    UIButton *_fullScreenButton;
    UIButton *_panelButton;
    UIButton *_speedButton;
    UIButton *_pixelButton;
    AWENoxusPlayerProgressSlider *_progressSlider;
    UIProgressView *_bufferProgressView;
    AWENoxusGradientView *_topGradientLayer;
    AWENoxusGradientView *_bottomGradientLayer;
    AWEDemaciaPlayerAirPlayInfoView *_airPlayInfoView;
    AWENoxusLongVideoStatusBarView *_statusBarView;
    AWENoxusPlayerTrialBuyBar *_trialBuyBar;
    AWENoxusPlayerPayMaskView *_paymentMaskView;
    CAGradientLayer *_previeBackLayer;
    UIView *_previeBackView;
    double _verticalBottomOffset;
    NSDictionary *_paramDic;
    AWENoxusLongVideoDetailResponseModel *_longVideoDetailModel;
    NSTimer *_tipTimer;
}

@property (retain, nonatomic) AWENoxusGradientView *topGradientLayer;
@property (retain, nonatomic) AWENoxusGradientView *bottomGradientLayer;
@property (retain, nonatomic) AWEDemaciaPlayerAirPlayInfoView *airPlayInfoView;
@property (retain, nonatomic) AWENoxusLongVideoStatusBarView *statusBarView;
@property (retain, nonatomic) AWENoxusPlayerTrialBuyBar *trialBuyBar;
@property (retain, nonatomic) AWENoxusPlayerPayMaskView *paymentMaskView;
@property (retain, nonatomic) CAGradientLayer *previeBackLayer;
@property (retain, nonatomic) UIView *previeBackView;
@property (nonatomic) double verticalBottomOffset;
@property (copy, nonatomic) NSDictionary *paramDic;
@property (retain, nonatomic) AWENoxusLongVideoDetailResponseModel *longVideoDetailModel;
@property (retain, nonatomic) NSTimer *tipTimer;
@property (weak, nonatomic) id<AWENoxusPlayerControlViewDelegate> delegate;
@property (nonatomic) long long rotateMode;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isStopped;
@property (nonatomic) BOOL trialShouldShow;
@property (nonatomic) BOOL isSlidering;
@property (nonatomic) BOOL tapSliderSeeking;
@property (nonatomic) double dragTime;
@property (nonatomic) double totalTime;
@property (retain, nonatomic) UIView *topBar;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *loadingBackButton;
@property (retain, nonatomic) UIButton *tvButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) AWENoxusPlayerSettingTypeView *playerSettingView;
@property (retain, nonatomic) AWENoxusPlayerStateTipView *settingTipView;
@property (retain, nonatomic) UIView *progressLabelView;
@property (retain, nonatomic) UILabel *progressLeftLabel;
@property (retain, nonatomic) UILabel *progressRightLabel;
@property (retain, nonatomic) UIView *bottomBar;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *totalTimeLabel;
@property (retain, nonatomic) UIButton *fullScreenButton;
@property (retain, nonatomic) UIButton *panelButton;
@property (retain, nonatomic) UIButton *speedButton;
@property (retain, nonatomic) UIButton *pixelButton;
@property (retain, nonatomic) AWENoxusPlayerProgressSlider *progressSlider;
@property (retain, nonatomic) UIProgressView *bufferProgressView;
@property (nonatomic) BOOL isTouchSlider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)paymentMaskView;
- (id)totalTimeLabel;
- (void)progressSliderTouchBegan:(id)arg0;
- (void)progressSliderValueChanged:(id)arg0;
- (void)progressSliderTouchEnded:(id)arg0;
- (void)setTotalTimeLabel:(id)arg0;
- (void)hideControlView;
- (void)setFullScreenButton:(id)arg0;
- (void)setRotateMode:(long long)arg0;
- (long long)rotateMode;
- (id)topGradientLayer;
- (id)bottomGradientLayer;
- (void)setTopGradientLayer:(id)arg0;
- (void)setBottomGradientLayer:(id)arg0;
- (BOOL)isTrial;
- (id)bufferProgressView;
- (id)formateDuration:(id)arg0;
- (BOOL)isSlidering;
- (double)dragTime;
- (void)setIsSlidering:(BOOL)arg0;
- (void)setDragTime:(double)arg0;
- (void)refreshPlayTime:(double)arg0 canPlayTime:(double)arg1 totalTime:(double)arg2;
- (BOOL)reachEnd;
- (void)setBufferProgressView:(id)arg0;
- (void)setParamDic:(id)arg0;
- (id)paramDic;
- (id)previeBackView;
- (id)previeBackLayer;
- (double)horizonalLayerHeight;
- (id)airPlayInfoView;
- (id)panelButton;
- (id)pixelButton;
- (id)speedButton;
- (double)speedBtnWidth;
- (void)touchProgressSliderTouchBegan:(id)arg0;
- (void)touchProgressSliderTouchEnded:(id)arg0;
- (id)tvButton;
- (id)loadingBackButton;
- (id)progressLabelView;
- (id)playerSettingView;
- (id)settingTipView;
- (id)longVideoDetailModel;
- (id)trialBuyBar;
- (BOOL)isForbidden;
- (BOOL)trialShouldShow;
- (BOOL)hasPanel;
- (double)verticalBottomOffset;
- (void)adjustPlayAndNextButtonLayout:(long long)arg0;
- (void)reloadTrialAnimated:(BOOL)arg0;
- (void)showPaymentMaskViewIfNeeded;
- (void)rotateAimMode:(long long)arg0 duration:(double)arg1 subViewsShown:(BOOL)arg2 progress:(id /* block */)arg3 complete:(id /* block */)arg4;
- (void)reloadTrialBuyBarAnimated:(BOOL)arg0;
- (void)dismissSettingTipViewAnimate:(BOOL)arg0 block:(id /* block */)arg1;
- (void)setVerticalBottomOffset:(double)arg0;
- (void)setLongVideoDetailModel:(id)arg0;
- (void)showAirPlayInfoView:(BOOL)arg0;
- (void)setIsTouchSlider:(BOOL)arg0;
- (BOOL)tapSliderSeeking;
- (BOOL)hidePreviewForPoorDevice;
- (void)tryAdjustSliderValueIfNeeded;
- (id)progressLeftLabel;
- (id)progressRightLabel;
- (void)hidePaymentMaskView;
- (void)hideTrialBuyBar;
- (id)tipTimer;
- (void)setTipTimer:(id)arg0;
- (void)noxusSettingTypeListSelectModel:(id)arg0;
- (void)noxusSettingTypeDismiss:(BOOL)arg0;
- (void)noxusPlayerTrialBuyBarDidClickBuyButton;
- (void)noxusPlayerPayMaskViewDidClickBuyButton;
- (void)showPlayerSettingView:(unsigned long long)arg0;
- (void)noxusSettingTypeWithoutFullHD:(BOOL)arg0;
- (void)noxusPlayerStateTipNetworkActionModel:(id)arg0;
- (void)noxusPlayerStateTipCloseAction;
- (void)noxusPlayerPayMaskViewDidClickReplayButton;
- (void)noxusPlayerPayMaskViewDidClickBackButton;
- (BOOL)isPaymentMaskViewShowing;
- (void)updateByModel:(id)arg0 paramDic:(id)arg1;
- (void)refreshVideoResolutions:(id)arg0;
- (void)rotatelayout;
- (void)setVerticalModeBottomOffset:(double)arg0;
- (void)topBottomBarOpacity:(double)arg0 duration:(double)arg1 completeBlock:(id /* block */)arg2;
- (void)updateAirPlayDeviceName:(id)arg0;
- (void)refreshSettingTipModel:(id)arg0 stateType:(unsigned long long)arg1;
- (void)showSettingTipAnimate:(BOOL)arg0 block:(id /* block */)arg1;
- (void)dismissSettingTipViewAfterSenconds;
- (void)setTrialShouldShow:(BOOL)arg0;
- (void)setTapSliderSeeking:(BOOL)arg0;
- (void)setLoadingBackButton:(id)arg0;
- (void)setTvButton:(id)arg0;
- (void)setPlayerSettingView:(id)arg0;
- (void)setSettingTipView:(id)arg0;
- (void)setProgressLabelView:(id)arg0;
- (void)setProgressLeftLabel:(id)arg0;
- (void)setProgressRightLabel:(id)arg0;
- (void)setPanelButton:(id)arg0;
- (void)setSpeedButton:(id)arg0;
- (void)setPixelButton:(id)arg0;
- (BOOL)isTouchSlider;
- (void)setAirPlayInfoView:(id)arg0;
- (void)setTrialBuyBar:(id)arg0;
- (void)setPaymentMaskView:(id)arg0;
- (void)setPrevieBackLayer:(id)arg0;
- (void)setPrevieBackView:(id)arg0;
- (double)totalTime;
- (id)imageNamed:(id)arg0;
- (void).cxx_destruct;
- (void)setBottomBar:(id)arg0;
- (id)statusBarView;
- (id)titleLabel;
- (id)topBar;
- (BOOL)isStopped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTimeLabel:(id)arg0;
- (id)delegate;
- (BOOL)isPlaying;
- (id)bottomBar;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setIsPlaying:(BOOL)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)backButton;
- (id)timeLabel;
- (void)setBackButton:(id)arg0;
- (void)setTotalTime:(double)arg0;
- (void)setTopBar:(id)arg0;
- (id)nextButton;
- (void)setNextButton:(id)arg0;
- (void)setupSubviews;
- (id)previewImageView;
- (void)setPreviewImageView:(id)arg0;
- (id)playButton;
- (BOOL)hasNext;
- (void)setIsStopped:(BOOL)arg0;
- (void)setPlayButton:(id)arg0;
- (id)fullScreenButton;
- (id)progressSlider;
- (void)setProgressSlider:(id)arg0;
- (void)backButtonAction;
- (void)setStatusBarView:(id)arg0;

@end
