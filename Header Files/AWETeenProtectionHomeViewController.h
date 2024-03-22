//
//     Generated by private class-dump
//

@class UITableView, UITextView, UITableViewCell, DUXButton, NSArray, NSString, UIButton;

@interface AWETeenProtectionHomeViewController : AWETeenProtectionHomeBaseViewController <UITableViewDelegate, UITableViewDataSource, AWERouterViewControllerProtocol, UITextViewDelegate, AWETeenModeCardStyleDelegate, AWETeenProtectionHomeViewControllerProtocol> {
    BOOL dismissVCWhenSucceed;
    BOOL isOpenedByServer;
    BOOL teenModeOn;
    BOOL _timeLockOn;
    BOOL _preferLightTheme;
    BOOL _shouldShowDiscover;
    NSString *userName;
    NSString *enterMethod;
    UITableView *_tableView;
    UIButton *_turnOnToolButton;
    DUXButton *_enterIntroPageButton;
    UIButton *_turnOffToolButton;
    UIButton *_passwordButton;
    UITableViewCell *_bottomPaddingCell;
    UITextView *_moreInfoTextView;
    NSArray *_dataArray;
    long long _triggerTime;
    NSString *_userID;
    NSString *_secUserID;
    long long _enterStyle;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIButton *turnOnToolButton;
@property (retain, nonatomic) DUXButton *enterIntroPageButton;
@property (retain, nonatomic) UIButton *turnOffToolButton;
@property (retain, nonatomic) UIButton *passwordButton;
@property (retain, nonatomic) UITableViewCell *bottomPaddingCell;
@property (retain, nonatomic) UITextView *moreInfoTextView;
@property (nonatomic) BOOL timeLockOn;
@property (retain, nonatomic) NSArray *dataArray;
@property (nonatomic) long long triggerTime;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *secUserID;
@property (nonatomic) BOOL preferLightTheme;
@property (nonatomic) long long enterStyle;
@property (nonatomic) BOOL shouldShowDiscover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL dismissVCWhenSucceed;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isOpenedByServer;
@property (nonatomic) BOOL teenModeOn;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *enterMethod;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)enterMethod;
- (void)handleBroadcastNotification:(id)arg0;
- (void)trackEvent;
- (void)backBtnClicked:(id)arg0;
- (void)setDismissVCWhenSucceed:(BOOL)arg0;
- (void)setTriggerTime:(long long)arg0;
- (long long)triggerTime;
- (void)setTeenModeOn:(BOOL)arg0;
- (void)setIsOpenedByServer:(BOOL)arg0;
- (void)setTimeLockOn:(BOOL)arg0;
- (BOOL)dismissVCWhenSucceed;
- (BOOL)timeLockOn;
- (BOOL)teenModeOn;
- (BOOL)isOpenedByServer;
- (BOOL)preferLightTheme;
- (void)setPreferLightTheme:(BOOL)arg0;
- (id)moreInfoTextView;
- (void)setMoreInfoTextView:(id)arg0;
- (id)createBottomBtnWithTitle:(id)arg0 backgroundColor:(id)arg1 titleColor:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)didClickTurnOnToolButton:(id)arg0;
- (BOOL)timeLockConfigWithRouterParamDict:(id)arg0;
- (BOOL)vcConfigWithRouterParamDict:(id)arg0;
- (void)setShouldShowDiscover:(BOOL)arg0;
- (BOOL)isForTimeLock;
- (BOOL)shouldEnterCardStyleTeenModeOpenPage;
- (void)constructDataArray;
- (BOOL)isForOtherUser;
- (id)itemWithTitle:(id)arg0 imageName:(id)arg1;
- (BOOL)isForTeenMode;
- (void)constructTeenModeArray:(id)arg0;
- (BOOL)shouldUseNewStyleTeenModeOpenPage;
- (BOOL)shouldUseTwoToneStyleTeenModeOpenPage;
- (id)bottomPaddingCell;
- (void)resetBottomButtonUI;
- (id)turnOffToolButton;
- (id)passwordButton;
- (void)layoutBottomUIForButtons:(id)arg0;
- (id)turnOnToolButton;
- (BOOL)shouldShowDiscover;
- (id)enterIntroPageButton;
- (void)setTurnOffToolButton:(id)arg0;
- (id)turnoffBtnColor;
- (void)didClickEnterIntroPage:(id)arg0;
- (void)didClickTurnOffToolButton:(id)arg0;
- (void)didClickPasswordButton:(id)arg0;
- (void)setEnterStyle:(long long)arg0;
- (void)didClickTurnOnToolButton:(id)arg0 triggerTime:(long long)arg1 onlyPopPasswordVCWhenSucceed:(BOOL)arg2;
- (void)p_changeTimeLockStatusWithTriggerTime:(long long)arg0 onlyPopPasswordVCWhenSucceed:(BOOL)arg1;
- (void)didClickTurnOffToolButton:(id)arg0 onlyPopPasswordVCWhenSucceed:(BOOL)arg1;
- (void)didClickPasswordButton:(id)arg0 onlyPopPasswordVCWhenSucceed:(BOOL)arg1;
- (id)childrenAgreementURLString;
- (id)itemWithTitle:(id)arg0 subtitle:(id)arg1 imageName:(id)arg2;
- (long long)enterStyle;
- (void)modifyTimeLockConfigRouterParamDict:(id)arg0;
- (void)popToLastViewController:(id /* block */)arg0;
- (BOOL)isForTeenModeSelf;
- (id)passwordTipStr;
- (id)turnOnToolButtonTitleColor;
- (BOOL)isUserNameEmpty;
- (void)setTurnOnToolButton:(id)arg0;
- (void)setEnterIntroPageButton:(id)arg0;
- (void)setPasswordButton:(id)arg0;
- (void)setBottomPaddingCell:(id)arg0;
- (id)userID;
- (BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg2 interaction:(long long)arg3;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (id)userName;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setUserID:(id)arg0;
- (void)setUserName:(id)arg0;
- (id)initWithType:(unsigned long long)arg0;
- (long long)preferredStatusBarStyle;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)dataArray;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (void)setupUI;
- (void)setDataArray:(id)arg0;

@end
