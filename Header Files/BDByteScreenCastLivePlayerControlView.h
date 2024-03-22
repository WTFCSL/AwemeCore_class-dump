//
//     Generated by private class-dump
//

@class BDByteScreenCastControlViewConfig, UILabel, BDSCBackgroundView, BDSCImageView, BDSCLoadingView, BDByteScreenCastAppUIConfigInfo, UIButton, UIView, BDByteScreenPlayControlViewLayoutModel, BDSCControlViewUIModel, NSString, BDSCControlButton, LOTAnimationView, UIImageView;
@protocol BDSCControlViewDelegate;

@interface BDByteScreenCastLivePlayerControlView : UIView <UIGestureRecognizerDelegate, LOTAnimationDelegate, BDByteScreenCastLivePlayerControlViewProtocol> {
    BOOL _isConnected;
    BOOL _danmakuAuth;
    BOOL _didTapButton;
    NSString *_title;
    NSString *_deviceName;
    UIView *_containerView;
    id<BDSCControlViewDelegate> _delegate;
    BDSCBackgroundView *_backgroundView;
    UIImageView *_backgroundImageView;
    UIView *_disableResponderView;
    UILabel *_mainTitleLabel;
    UILabel *_feedbackLabel;
    BDSCLoadingView *_restartIconBtn;
    UIButton *_changeDeviceButton;
    BDSCImageView *_changeDeviceImage;
    UILabel *_errorNotifyLabel;
    UIView *_actionButtonContainer;
    BDSCControlButton *_closeCastButton;
    BDSCImageView *_closeCastButtonImageView;
    BDSCControlButton *_changeClarityButton;
    BDSCControlButton *_castDanmakuButton;
    UIView *_danmakuBtnContentView;
    BDSCImageView *_danmakuButtonImageView;
    UILabel *_danmakuBtnLabel;
    LOTAnimationView *_danmakuAnimation;
    BDByteScreenCastControlViewConfig *_viewConfig;
    BDByteScreenCastAppUIConfigInfo *_appUIInfo;
    unsigned long long _showingStatus;
    BDByteScreenPlayControlViewLayoutModel *_playControlLayoutModel;
    BDSCControlViewUIModel *_controlViewUISetting;
    unsigned long long _castStatus;
    unsigned long long _playStatus;
    NSString *_castPlayFailText;
    double _actionButtonContainerViewHeight;
    double _actionButtonWidth;
    double _closeButtonWidth;
    double _buttonImageWidth;
}

@property (retain, nonatomic) BDSCBackgroundView *backgroundView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *disableResponderView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *feedbackLabel;
@property (retain, nonatomic) BDSCLoadingView *restartIconBtn;
@property (retain, nonatomic) UIButton *changeDeviceButton;
@property (retain, nonatomic) BDSCImageView *changeDeviceImage;
@property (retain, nonatomic) UILabel *errorNotifyLabel;
@property (retain, nonatomic) UIView *actionButtonContainer;
@property (retain, nonatomic) BDSCControlButton *closeCastButton;
@property (retain, nonatomic) BDSCImageView *closeCastButtonImageView;
@property (retain, nonatomic) BDSCControlButton *changeClarityButton;
@property (retain, nonatomic) BDSCControlButton *castDanmakuButton;
@property (retain, nonatomic) UIView *danmakuBtnContentView;
@property (retain, nonatomic) BDSCImageView *danmakuButtonImageView;
@property (retain, nonatomic) UILabel *danmakuBtnLabel;
@property (retain, nonatomic) LOTAnimationView *danmakuAnimation;
@property (nonatomic) BOOL danmakuAuth;
@property (retain, nonatomic) BDByteScreenCastControlViewConfig *viewConfig;
@property (retain, nonatomic) BDByteScreenCastAppUIConfigInfo *appUIInfo;
@property (nonatomic) unsigned long long showingStatus;
@property (retain, nonatomic) BDByteScreenPlayControlViewLayoutModel *playControlLayoutModel;
@property (retain, nonatomic) BDSCControlViewUIModel *controlViewUISetting;
@property (nonatomic) unsigned long long castStatus;
@property (nonatomic) unsigned long long playStatus;
@property (copy, nonatomic) NSString *castPlayFailText;
@property (nonatomic) double actionButtonContainerViewHeight;
@property (nonatomic) double actionButtonWidth;
@property (nonatomic) double closeButtonWidth;
@property (nonatomic) double buttonImageWidth;
@property (nonatomic) BOOL didTapButton;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) BOOL isConnected;
@property (retain, nonatomic) UIView *containerView;
@property (weak, nonatomic) id<BDSCControlViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)playStatus;
- (void)animationView:(id)arg0 fetchResourceWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setPlayStatus:(unsigned long long)arg0;
- (BOOL)isFail;
- (id)mainTitleLabel;
- (void)setMainTitleLabel:(id)arg0;
- (id)viewConfig;
- (void)setViewConfig:(id)arg0;
- (id)changeDeviceButton;
- (void)setChangeDeviceButton:(id)arg0;
- (void)updatePlayStatus:(unsigned long long)arg0;
- (void)setFeedbackLabel:(id)arg0;
- (id)feedbackLabel;
- (void)singleTapped;
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
- (void)updateCastDanmakuShow:(BOOL)arg0;
- (void)updateCastDanmakuAuth:(BOOL)arg0 enable:(BOOL)arg1 animation:(BOOL)arg2;
- (void)setActionButtonGreyMode:(BOOL)arg0;
- (void)updateDanmakuButton;
- (id)appUIInfo;
- (void)setCastStatus:(unsigned long long)arg0;
- (id)changeClarityButton;
- (id)errorNotifyLabel;
- (id)closeCastButton;
- (id)actionButtonContainer;
- (void)setActionButtonContainer:(id)arg0;
- (void)setChangeClarityButton:(id)arg0;
- (void)setCloseCastButton:(id)arg0;
- (void)setCloseCastButtonImageView:(id)arg0;
- (void)setErrorNotifyLabel:(id)arg0;
- (id)closeCastButtonImageView;
- (void)setCastPlayFailText:(id)arg0;
- (void)setActionButtonContainerViewHeight:(double)arg0;
- (void)setButtonImageWidth:(double)arg0;
- (id)restartIconBtn;
- (id)changeDeviceImage;
- (id)disableResponderView;
- (id)playControlLayoutModel;
- (double)actionButtonContainerViewHeight;
- (void)rebuildDanmakuConstraints;
- (id)castDanmakuButton;
- (double)buttonImageWidth;
- (id)danmakuButtonImageView;
- (id)danmakuBtnContentView;
- (void)setControlViewUISetting:(id)arg0;
- (void)refreshUISettings;
- (void)updateStatusView;
- (void)setShowingStatus:(unsigned long long)arg0;
- (void)setPlayControlLayoutModel:(id)arg0;
- (void)setDanmakuAuth:(BOOL)arg0;
- (void)updateButtonImages;
- (void)setDanmakuAnimation:(id)arg0;
- (id)danmakuAnimation;
- (id)castPlayFailText;
- (BOOL)danmakuAuth;
- (id)danmakuBtnLabel;
- (id)controlViewUISetting;
- (BOOL)needResizeBackgroundImage;
- (void)setDidTapButton:(BOOL)arg0;
- (void)feedbackLabelTapped;
- (void)reStartButtonDidTap;
- (void)onChangeDeviceBtn:(id)arg0;
- (void)setDisableResponderView:(id)arg0;
- (void)setRestartIconBtn:(id)arg0;
- (void)setChangeDeviceImage:(id)arg0;
- (void)setCastDanmakuButton:(id)arg0;
- (void)setDanmakuBtnContentView:(id)arg0;
- (void)setDanmakuButtonImageView:(id)arg0;
- (void)setDanmakuBtnLabel:(id)arg0;
- (unsigned long long)showingStatus;
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
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)title;
- (id)delegate;
- (id)containerView;
- (BOOL)isLandscape;
- (void)setDelegate:(id)arg0;
- (void)setBackgroundView:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setupViews;
- (void)rebuildConstraints;
- (void)updateSubviews;
- (void)setBackgroundImageView:(id)arg0;
- (BOOL)didTapButton;
- (double)closeButtonWidth;
- (void)setCloseButtonWidth:(double)arg0;

@end
