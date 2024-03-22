//
//     Generated by private class-dump
//

@class AWEShareSaveAlertViewModel, NSArray, AWEAlertPanelTransitionController, NSString, UILabel, UIView, UIButton;

@interface AWEShareSaveAlertController : UIViewController <AWEPanelTransitionWithBackground> {
    BOOL _isStayLandscape;
    UIView *_headerView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIButton *_dismissButton;
    NSArray *_actionButtons;
    AWEShareSaveAlertViewModel *_viewModel;
    AWEAlertPanelTransitionController *_transitionController;
}

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UIButton *dismissButton;
@property (copy, nonatomic) NSArray *actionButtons;
@property (retain, nonatomic) AWEShareSaveAlertViewModel *viewModel;
@property (retain, nonatomic) AWEAlertPanelTransitionController *transitionController;
@property (nonatomic) BOOL isStayLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)arg0;
- (BOOL)awe_shouldBypassPresentationHook;
- (id)initWithViewModel:(id)arg0 stayLandscape:(BOOL)arg1;
- (void)setIsStayLandscape:(BOOL)arg0;
- (BOOL)isStayLandscape;
- (BOOL)shouldAutorotate;
- (id)actionButtons;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)arg0;
- (id)transitionController;
- (id)titleLabel;
- (void)setMessageLabel:(id)arg0;
- (void)setHeaderView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (void)setTransitionController:(id)arg0;
- (id)viewModel;
- (void)viewWillAppear:(BOOL)arg0;
- (id)headerView;
- (id)messageLabel;
- (void)setActionButtons:(id)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (id)dismissButton;
- (void)setDismissButton:(id)arg0;
- (void)actionButtonTapped:(id)arg0;
- (void)dismissButtonTapped:(id)arg0;

@end