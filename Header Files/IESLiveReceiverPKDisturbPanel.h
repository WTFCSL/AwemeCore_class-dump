//
//     Generated by private class-dump
//

@class HTSLiveUser, IESLiveReceiverPKDisturbViewModel, UIView, UIButton;

@interface IESLiveReceiverPKDisturbPanel : IESLiveRevenueInteractPopupViewController {
    HTSLiveUser *_oppositeAnchor;
    IESLiveReceiverPKDisturbViewModel *_viewModel;
    UIView *_containerView;
    UIButton *_autoRejectButton;
    UIButton *_temporaryRejectButton;
    UIButton *_cancelButton;
    unsigned long long _clickedButtonType;
}

@property (retain, nonatomic) HTSLiveUser *oppositeAnchor;
@property (retain, nonatomic) IESLiveReceiverPKDisturbViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *autoRejectButton;
@property (retain, nonatomic) UIButton *temporaryRejectButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (nonatomic) unsigned long long clickedButtonType;

- (void)bindAction;
- (void)didClickButton:(id)arg0;
- (void)onSetupNavBar:(id)arg0;
- (id)oppositeAnchor;
- (void)setOppositeAnchor:(id)arg0;
- (id)initWithDIContext:(id)arg0 oppositeUser:(id)arg1;
- (void)setClickedButtonType:(unsigned long long)arg0;
- (void)addFlexActivityParamsIfNeed:(id)arg0;
- (unsigned long long)clickedButtonType;
- (void)trackSettingPanelClick:(unsigned long long)arg0;
- (void)setAutoRejectButton:(id)arg0;
- (id)autoRejectButton;
- (void)setTemporaryRejectButton:(id)arg0;
- (id)temporaryRejectButton;
- (void)setCancelButton:(id)arg0;
- (void)dismiss;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)cancelButton;
- (void)setContainerView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)containerView;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setupViews;

@end
