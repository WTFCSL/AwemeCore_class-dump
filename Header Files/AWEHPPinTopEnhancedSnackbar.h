//
//     Generated by private class-dump
//

@class NSString, NSTimer, DUXButton, AWEHPPinTopComponentUIConfig, UIView, DUXBaseLabel;
@protocol AWEHPPinTopUILifeCycleProtocol;

@interface AWEHPPinTopEnhancedSnackbar : UIView <CAAnimationDelegate, AWEHPPinTopComponentProtocol> {
    BOOL _shouldDismissWhenPointOutSide;
    BOOL _isDismissing;
    BOOL _disableAutoDismiss;
    AWEHPPinTopComponentUIConfig *_config;
    UIView *_closeView;
    UIView *_contentView;
    UIView *_backgroundView;
    UIView *_shadowView;
    DUXButton *_primaryButton;
    DUXBaseLabel *_titleLabel;
    UIView<AWEHPPinTopUILifeCycleProtocol> *_businessView;
    id /* block */ _dismissBlock;
    id /* block */ _actionBlock;
    id /* block */ _showBlock;
    long long _dismissType;
    NSTimer *_autoHideTimer;
}

@property (retain, nonatomic) AWEHPPinTopComponentUIConfig *config;
@property (retain, nonatomic) UIView *closeView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) DUXButton *primaryButton;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) UIView<AWEHPPinTopUILifeCycleProtocol> *businessView;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ showBlock;
@property (nonatomic) long long dismissType;
@property (retain, nonatomic) NSTimer *autoHideTimer;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) BOOL disableAutoDismiss;
@property (nonatomic) BOOL shouldDismissWhenPointOutSide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDisableAutoDismiss:(BOOL)arg0;
- (void)setShouldDismissWhenPointOutSide:(BOOL)arg0;
- (void)clickCloseButton;
- (id /* block */)showBlock;
- (void)setShowBlock:(id /* block */)arg0;
- (id)closeView;
- (void)setCloseView:(id)arg0;
- (void)p_dismiss;
- (void)startAutoHideIfNeeded;
- (BOOL)disableAutoDismiss;
- (void)showPinTopComponentOnViewController:(id)arg0 withButtonAction:(id /* block */)arg1 didShow:(id /* block */)arg2 didDismiss:(id /* block */)arg3;
- (void)setDismissType:(long long)arg0;
- (void)setShowAnimation;
- (void)setHideAnimation;
- (void)setBusinessView:(id)arg0;
- (id)businessView;
- (void)clickPrimaryButton;
- (void)clickSecondaryButton;
- (BOOL)shouldDismissWhenPointOutSide;
- (void)dismiss;
- (void)setConfig:(id)arg0;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)config;
- (id)shadowView;
- (BOOL)isDismissing;
- (id)titleLabel;
- (id)contentView;
- (id)initWithConfig:(id)arg0;
- (void)setShadowView:(id)arg0;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (id /* block */)actionBlock;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (void)setBackgroundView:(id)arg0;
- (void)setContentView:(id)arg0;
- (void)setupUI;
- (void)setActionBlock:(id /* block */)arg0;
- (void)setIsDismissing:(BOOL)arg0;
- (long long)dismissType;
- (id)primaryButton;
- (void)setPrimaryButton:(id)arg0;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;
- (id)autoHideTimer;
- (void)setAutoHideTimer:(id)arg0;

@end
