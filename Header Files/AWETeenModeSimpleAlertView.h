//
//     Generated by private class-dump
//

@class UIView, NSString, UITapGestureRecognizer, DUXAbandonedButton, NSTimer, UIButton, AWETeenModeAlertConfigModel, UIPanGestureRecognizer, UILabel;

@interface AWETeenModeSimpleAlertView : UIView <UIGestureRecognizerDelegate> {
    BOOL _showCountDown;
    NSString *_UIID;
    NSString *_userType;
    id /* block */ _commonDismissBlock;
    id /* block */ _clickOpenTeenModeAction;
    UIView *_alertContentView;
    UIView *_iconContainerView;
    UILabel *_titleLabel;
    UILabel *_linkLabel;
    UIButton *_closeButton;
    DUXAbandonedButton *_actionButton;
    DUXAbandonedButton *_leftActionButton;
    DUXAbandonedButton *_rightActionButton;
    UITapGestureRecognizer *_tapBlankAreaToDismissGesture;
    UITapGestureRecognizer *_tapLinkLabelGesture;
    UIPanGestureRecognizer *_swipeToDismissGesture;
    double _alertContentHeight;
    double _currentSwipeOffset;
    AWETeenModeAlertConfigModel *_configModel;
    long long _windowType;
    long long _buttonType;
    NSString *_enterText;
    NSString *_exitText;
    double _alertShowingTime;
    NSTimer *_timer;
    long long _countDownNum;
    NSString *_countDownPre;
    NSString *_countDownSuf;
    long long _enlargeCloseHeight;
    UIView *_enlargeCloseView;
    struct CGPoint { double x; double y; } _lastLocation;
}

@property (retain, nonatomic) UIView *alertContentView;
@property (retain, nonatomic) UIView *iconContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *linkLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) DUXAbandonedButton *actionButton;
@property (retain, nonatomic) DUXAbandonedButton *leftActionButton;
@property (retain, nonatomic) DUXAbandonedButton *rightActionButton;
@property (retain, nonatomic) UITapGestureRecognizer *tapBlankAreaToDismissGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapLinkLabelGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *swipeToDismissGesture;
@property (nonatomic) double alertContentHeight;
@property (nonatomic) double currentSwipeOffset;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (retain, nonatomic) AWETeenModeAlertConfigModel *configModel;
@property (nonatomic) long long windowType;
@property (nonatomic) long long buttonType;
@property (copy, nonatomic) NSString *enterText;
@property (copy, nonatomic) NSString *exitText;
@property (nonatomic) double alertShowingTime;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL showCountDown;
@property (nonatomic) long long countDownNum;
@property (retain, nonatomic) NSString *countDownPre;
@property (retain, nonatomic) NSString *countDownSuf;
@property (nonatomic) long long enlargeCloseHeight;
@property (retain, nonatomic) UIView *enlargeCloseView;
@property (retain, nonatomic) NSString *UIID;
@property (retain, nonatomic) NSString *userType;
@property (copy, nonatomic) id /* block */ commonDismissBlock;
@property (copy, nonatomic) id /* block */ clickOpenTeenModeAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)arg0 params:(id)arg1;
- (void)setConfigModel:(id)arg0;
- (id)configModel;
- (void)setLinkLabel:(id)arg0;
- (id)enterText;
- (void)setEnterText:(id)arg0;
- (id)exitText;
- (void)setUIID:(id)arg0;
- (void)setCommonDismissBlock:(id /* block */)arg0;
- (long long)windowType;
- (id)initWithConfigModel:(id)arg0;
- (void)setClickOpenTeenModeAction:(id /* block */)arg0;
- (id)UIID;
- (id)tapBlankAreaToDismissGesture;
- (id)leftActionButton;
- (double)currentSwipeOffset;
- (void)setCurrentSwipeOffset:(double)arg0;
- (void)swipeToDismiss:(id)arg0;
- (void)tapBlankAreaToDismiss;
- (id)swipeToDismissGesture;
- (void)setLeftActionButton:(id)arg0;
- (void)setTapBlankAreaToDismissGesture:(id)arg0;
- (void)setSwipeToDismissGesture:(id)arg0;
- (BOOL)showCountDown;
- (void)setShowCountDown:(BOOL)arg0;
- (long long)countDownNum;
- (void)setCountDownNum:(long long)arg0;
- (id)countDownPre;
- (void)setCountDownPre:(id)arg0;
- (id)countDownSuf;
- (void)setCountDownSuf:(id)arg0;
- (long long)enlargeCloseHeight;
- (void)setEnlargeCloseHeight:(long long)arg0;
- (id)enlargeCloseView;
- (void)updateButtonTitle;
- (void)beginAutoClose;
- (id)countDownButtonTitle;
- (void)setEnlargeCloseView:(id)arg0;
- (void)UIAccessbilityTargetChanged;
- (void)transferToTeenMode;
- (void)setExitText:(id)arg0;
- (void)setWindowType:(long long)arg0;
- (id)alertContentView;
- (double)alertContentHeight;
- (id /* block */)commonDismissBlock;
- (void)setAlertContentHeight:(double)arg0;
- (id)tapLinkLabelGesture;
- (void)tapActionButton;
- (id /* block */)clickOpenTeenModeAction;
- (void)tapCloseButton;
- (void)setAlertContentView:(id)arg0;
- (void)setTapLinkLabelGesture:(id)arg0;
- (BOOL)isDoubleBtnStyleEnabled;
- (void)startTrackForStayDuration;
- (void)endTrackForStayDuration;
- (void)setupUIForGreyIconStyle;
- (void)addGestures;
- (void)setupAlertContentView;
- (double)closeBtnLeftAndTopMargin;
- (id)defaultModelWithIndex:(unsigned long long)arg0;
- (id)imageWithURL:(id)arg0 andDefaultImage:(id)arg1;
- (void)setupBottomUI;
- (void)setupDoubleButtonUI;
- (void)setupSingleButtonUI;
- (BOOL)isGreyIconStyleEnabled;
- (void)trackEventForEnterTeenMode;
- (void)trackEventForClickLeftActionBtn;
- (void)trackEventForDismiss:(id)arg0;
- (double)alertCornerRaidus;
- (void)tapEnlargeCloseView;
- (void)tapLeftActionButton;
- (void)tapLinkLabel;
- (void)setAlertShowingTime:(double)arg0;
- (double)alertShowingTime;
- (id)userType;
- (id)timer;
- (void)dismiss;
- (long long)buttonType;
- (void).cxx_destruct;
- (BOOL)isIpad;
- (struct CGPoint { double x0; double x1; })lastLocation;
- (void)setLastLocation:(struct CGPoint { double x0; double x1; })arg0;
- (void)setData:(id)arg0;
- (BOOL)show;
- (id)titleLabel;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)setTimer:(id)arg0;
- (void)setButtonType:(long long)arg0;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)actionButton;
- (void)setActionButton:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)linkLabel;
- (id)iconContainerView;
- (void)setIconContainerView:(id)arg0;
- (id)rightActionButton;
- (void)setRightActionButton:(id)arg0;
- (void)timerDidFire;
- (void)setUserType:(id)arg0;

@end
