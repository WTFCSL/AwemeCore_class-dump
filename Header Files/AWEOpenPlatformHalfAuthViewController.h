//
//     Generated by private class-dump
//

@class UIView, AWEOpenPlatformHalfAuthHeaderView, NSArray, NSString, UIImageView, UIControl, UIButton, UITableView, DUXButton, DUXCheckBox, UILabel;

@interface AWEOpenPlatformHalfAuthViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEUserMessage, AWEOpenPlatformScopeDelegate> {
    BOOL _configedUI;
    BOOL _hasEnterBack;
    UIView *_containerView;
    UIControl *_blankControl;
    UILabel *_titleLabel;
    UILabel *_applyLabel;
    DUXButton *_authButton;
    DUXButton *_declineButton;
    UIButton *_closeButton;
    UIButton *_descButton;
    UIImageView *_thirdAppImageView;
    UILabel *_reminderLabel;
    UIView *_reminderView;
    UIImageView *_reminderImageView;
    AWEOpenPlatformHalfAuthHeaderView *_headerView;
    UITableView *_scopeTableView;
    DUXCheckBox *_followCheckBox;
    UILabel *_followDescLabel;
    NSArray *_scopeItems;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIControl *blankControl;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *applyLabel;
@property (retain, nonatomic) DUXButton *authButton;
@property (retain, nonatomic) DUXButton *declineButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *descButton;
@property (retain, nonatomic) UIImageView *thirdAppImageView;
@property (retain, nonatomic) UILabel *reminderLabel;
@property (retain, nonatomic) UIView *reminderView;
@property (retain, nonatomic) UIImageView *reminderImageView;
@property (retain, nonatomic) AWEOpenPlatformHalfAuthHeaderView *headerView;
@property (retain, nonatomic) UITableView *scopeTableView;
@property (retain, nonatomic) DUXCheckBox *followCheckBox;
@property (retain, nonatomic) UILabel *followDescLabel;
@property (copy, nonatomic) NSArray *scopeItems;
@property (nonatomic) BOOL configedUI;
@property (nonatomic) BOOL hasEnterBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogout;
- (id)trackerManager;
- (id)descButton;
- (void)setDescButton:(id)arg0;
- (void)p_setupUI;
- (void)followCheckBoxTapped;
- (void)showContainerView;
- (id)choosedScopes;
- (id)virtualUserManager;
- (id)scopeItems;
- (void)setScopeItems:(id)arg0;
- (void)addNotifySubmitTracker:(unsigned long long)arg0 refuseType:(id)arg1;
- (void)addOrRemoveEnterBackgroundNotification:(BOOL)arg0;
- (id)authButton;
- (id)scopeTableView;
- (id)followCheckBox;
- (id)followDescLabel;
- (id)reminderImageView;
- (id)reminderLabel;
- (id)reminderView;
- (void)authButtonTapped;
- (BOOL)hasEnterBack;
- (void)setHasEnterBack:(BOOL)arg0;
- (void)tapScopeQuestionMarkEvent:(id)arg0;
- (void)tapHalfViewScopeQuestionMark;
- (void)setScopeTableView:(id)arg0;
- (void)setAuthButton:(id)arg0;
- (void)setReminderLabel:(id)arg0;
- (void)setReminderView:(id)arg0;
- (void)setReminderImageView:(id)arg0;
- (void)setFollowCheckBox:(id)arg0;
- (void)setFollowDescLabel:(id)arg0;
- (double)marginBottomOfAuthButton;
- (id)applyLabel;
- (void)setApplyLabel:(id)arg0;
- (void)descButtonTapped;
- (id)authNavigationController;
- (void)updateAuthButtonState;
- (id)thirdAppImageView;
- (double)halfAuthViewHeight;
- (id)blankControl;
- (void)hideContainerView;
- (void)setBlankControl:(id)arg0;
- (void)setThirdAppImageView:(id)arg0;
- (BOOL)configedUI;
- (void)setConfigedUI:(BOOL)arg0;
- (void)configureWithAuthInfo:(id)arg0 scopeItems:(id)arg1;
- (void)didEnterBackground;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)titleLabel;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setContainerView:(id)arg0;
- (void)setHeaderView:(id)arg0;
- (id)containerView;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)viewWillAppear:(BOOL)arg0;
- (id)headerView;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (id)tableView:(id)arg0 editActionsForRowAtIndexPath:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)declineButton;
- (void)setDeclineButton:(id)arg0;
- (void)declineButtonTapped;
- (id)userItems;
- (void)closeButtonTapped;
- (double)headerBottomMargin;
- (id)flowManager;

@end
