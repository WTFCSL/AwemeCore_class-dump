//
//     Generated by private class-dump
//

@class BDSCVideoActionView, BDSCImageView, BDSCBackgroundView, BDByteScreenPlayControlViewLayoutModel, BDByteScreenCastAppUIConfigInfo, UIView, BDSCControlViewUIModel, BDSCFailVideoActionView, NSString, LOTAnimationView, BDByteScreenCastControlViewConfig, BDSCVideoPlayerTopView;
@protocol BDSCControlViewDelegate;

@interface BDSCBaseVideoPlayerControlView : UIView <BDSCVideoPlayerTopViewDelegate, LOTAnimationDelegate, BDByteScreenCastLivePlayerControlViewProtocol> {
    BOOL _isConnected;
    BOOL _inGreyActionMode;
    UIView *_containerView;
    NSString *_title;
    NSString *_deviceName;
    id<BDSCControlViewDelegate> _delegate;
    unsigned long long _currentShowStatus;
    unsigned long long _castStatus;
    unsigned long long _playStatus;
    BDSCImageView *_backgroundImageView;
    BDSCVideoPlayerTopView *_topView;
    BDSCVideoActionView *_videoActionView;
    BDByteScreenCastControlViewConfig *_viewConfig;
    BDByteScreenCastAppUIConfigInfo *_appUIInfo;
    unsigned long long _showingStatus;
    BDByteScreenPlayControlViewLayoutModel *_playControlLayoutModel;
    BDSCControlViewUIModel *_controlViewUISetting;
    double _actionButtonContainerViewHeight;
    double _actionButtonWidth;
    BDSCBackgroundView *_backgroundView;
    LOTAnimationView *_connectAnimationView;
    LOTAnimationView *_fullConnectAnimationView;
    BDSCFailVideoActionView *_longVideoActionView;
    UIView *_disableResponderView;
}

@property (nonatomic) unsigned long long currentShowStatus;
@property (nonatomic) unsigned long long castStatus;
@property (nonatomic) unsigned long long playStatus;
@property (retain, nonatomic) BDSCImageView *backgroundImageView;
@property (retain, nonatomic) BDSCVideoPlayerTopView *topView;
@property (retain, nonatomic) BDSCVideoActionView *videoActionView;
@property (retain, nonatomic) BDByteScreenCastControlViewConfig *viewConfig;
@property (retain, nonatomic) BDByteScreenCastAppUIConfigInfo *appUIInfo;
@property (nonatomic) unsigned long long showingStatus;
@property (retain, nonatomic) BDByteScreenPlayControlViewLayoutModel *playControlLayoutModel;
@property (retain, nonatomic) BDSCControlViewUIModel *controlViewUISetting;
@property (nonatomic) double actionButtonContainerViewHeight;
@property (nonatomic) double actionButtonWidth;
@property (retain, nonatomic) BDSCBackgroundView *backgroundView;
@property (retain, nonatomic) LOTAnimationView *connectAnimationView;
@property (retain, nonatomic) LOTAnimationView *fullConnectAnimationView;
@property (retain, nonatomic) BDSCFailVideoActionView *longVideoActionView;
@property (nonatomic) BOOL inGreyActionMode;
@property (retain, nonatomic) UIView *disableResponderView;
@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) BOOL isConnected;
@property (weak, nonatomic) id<BDSCControlViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)playStatus;
- (void)animationView:(id)arg0 fetchResourceWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setPlayStatus:(unsigned long long)arg0;
- (BOOL)isFail;
- (id)viewConfig;
- (void)setViewConfig:(id)arg0;
- (void)updatePlayStatus:(unsigned long long)arg0;
- (double)actionButtonWidth;
- (void)setActionButtonWidth:(double)arg0;
- (void)setViewResponderDisable:(BOOL)arg0;
- (void)setAppUIInfo:(id)arg0;
- (unsigned long long)castStatus;
- (void)updateControlViewWithLayoutModel:(id)arg0;
- (void)updateProgressInfo:(id)arg0;
- (void)updateProgressInfo:(id)arg0 force:(BOOL)arg1;
- (void)updateControlViewConfig:(id)arg0;
- (void)updateCastStatus:(unsigned long long)arg0;
- (void)updateCastClarity:(id)arg0 showTitle:(id)arg1;
- (void)showControlViewWithStatus:(unsigned long long)arg0 animated:(BOOL)arg1;
- (void)showControlViewFromFloatBall;
- (void)dismissControlViewWithAnimated:(BOOL)arg0;
- (unsigned long long)showingStyle;
- (void)updateCastContinuousPlay:(BOOL)arg0;
- (void)updateCastDanmakuShow:(BOOL)arg0;
- (void)updateCastDanmakuAuth:(BOOL)arg0 enable:(BOOL)arg1 animation:(BOOL)arg2;
- (void)setActionButtonGreyMode:(BOOL)arg0;
- (id)appUIInfo;
- (void)continuePlayButtonClicked:(id)arg0;
- (void)setCastStatus:(unsigned long long)arg0;
- (void)setActionButtonContainerViewHeight:(double)arg0;
- (id)disableResponderView;
- (id)playControlLayoutModel;
- (double)actionButtonContainerViewHeight;
- (void)setControlViewUISetting:(id)arg0;
- (void)refreshUISettings;
- (void)updateStatusView;
- (void)setShowingStatus:(unsigned long long)arg0;
- (void)setPlayControlLayoutModel:(id)arg0;
- (id)controlViewUISetting;
- (BOOL)needResizeBackgroundImage;
- (void)setDisableResponderView:(id)arg0;
- (unsigned long long)showingStatus;
- (id)videoActionView;
- (BOOL)inGreyActionMode;
- (void)setInGreyActionMode:(BOOL)arg0;
- (void)updateActionButtonAlpha;
- (id)longVideoActionView;
- (unsigned long long)currentShowStatus;
- (void)doFailAnimation;
- (void)changeToFail;
- (id)connectAnimationView;
- (id)fullConnectAnimationView;
- (void)setCurrentShowStatus:(unsigned long long)arg0;
- (void)doConnectingAnimation;
- (void)changeToConnecting;
- (void)updateFinishTitle;
- (void)doSuccessAnimation;
- (void)changeToSuccess;
- (id)createVideoActionView;
- (void)feedbackButtonClicked:(id)arg0;
- (void)onChangeDeviceButton:(id)arg0;
- (void)setVideoActionView:(id)arg0;
- (void)setConnectAnimationView:(id)arg0;
- (void)setFullConnectAnimationView:(id)arg0;
- (void)setLongVideoActionView:(id)arg0;
- (id)init;
- (void)setDeviceName:(id)arg0;
- (void)setIsConnected:(BOOL)arg0;
- (id)backgroundView;
- (BOOL)isConnecting;
- (void).cxx_destruct;
- (id)deviceName;
- (BOOL)isIpad;
- (id)backgroundImageView;
- (BOOL)isConnected;
- (void)setContainerView:(id)arg0;
- (id)title;
- (id)delegate;
- (id)containerView;
- (BOOL)isLandscape;
- (void)setDelegate:(id)arg0;
- (void)setBackgroundView:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)topView;
- (void)setupViews;
- (void)setTopView:(id)arg0;
- (void)rebuildConstraints;
- (void)updateSubviews;
- (void)setBackgroundImageView:(id)arg0;

@end