//
//     Generated by private class-dump
//

@class NSMutableDictionary, DYLoginNextActionButton, NSString, AWEUserAttributedLabelView, UIImageView, UITableView, NSMutableArray, DUXButton, DYRouterModel, UILabel, DYSecondAccountUnbindModel;

@interface DYSecondAccountUnbindViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEUserAttributedLabelHighlightClickDelegate> {
    AWEUserAttributedLabelView *_subTitle;
    UITableView *_tableView;
    DYLoginNextActionButton *_nextButton;
    DUXButton *_notUnbindButton;
    DYLoginNextActionButton *_loginButton;
    AWEUserAttributedLabelView *_registerText;
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_lastLoginTimeLabel;
    DYSecondAccountUnbindModel *_model;
    NSMutableArray *_unbindModels;
    DYRouterModel *_context;
    NSMutableDictionary *_registerHighlightClickDict;
}

@property (retain, nonatomic) AWEUserAttributedLabelView *subTitle;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) DYLoginNextActionButton *nextButton;
@property (retain, nonatomic) DUXButton *notUnbindButton;
@property (retain, nonatomic) DYLoginNextActionButton *loginButton;
@property (retain, nonatomic) AWEUserAttributedLabelView *registerText;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *lastLoginTimeLabel;
@property (retain, nonatomic) DYSecondAccountUnbindModel *model;
@property (retain, nonatomic) NSMutableArray *unbindModels;
@property (retain, nonatomic) DYRouterModel *context;
@property (retain, nonatomic) NSMutableDictionary *registerHighlightClickDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)arg0;
- (void)loginAction;
- (void)backBtnTapped;
- (void)setupNaviBar;
- (void)didTapHighlightText:(id)arg0;
- (id)transforToModel:(Class)arg0 rawData:(id)arg1;
- (void)processLoginFailure:(id)arg0 JSON:(id)arg1;
- (void)processLoginSuccess:(id)arg0;
- (void)setUnbindModels:(id)arg0;
- (BOOL)isSingleAccount;
- (id)lastLoginTimeLabel;
- (id)registerText;
- (id)notUnbindButton;
- (void)trackMobileCheckClick:(id)arg0 eventName:(id)arg1;
- (void)actionBlock:(BOOL)arg0;
- (id)unbindModels;
- (void)trackMobileCheckConfirmShow;
- (void)trackMobileCheckConfirmResult:(id)arg0;
- (void)loginActionWithOutTrack;
- (id)linkTextUrl;
- (id)registerHighlightClickDict;
- (void)notUnbindAction;
- (void)registerAction;
- (void)setNotUnbindButton:(id)arg0;
- (void)setRegisterText:(id)arg0;
- (void)setLastLoginTimeLabel:(id)arg0;
- (void)setRegisterHighlightClickDict:(id)arg0;
- (void)setModel:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (void)setContext:(id)arg0;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)model;
- (id)context;
- (id)nameLabel;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)viewDidLoad;
- (void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1;
- (void)setNameLabel:(id)arg0;
- (void)setupUI;
- (id)nextButton;
- (void)setNextButton:(id)arg0;
- (void)nextAction;
- (id)loginButton;
- (void)setLoginButton:(id)arg0;

@end