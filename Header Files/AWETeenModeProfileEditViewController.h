//
//     Generated by private class-dump
//

@class UIButton, NSString, AWETeenAgeGuideManager, AWETeenModeProfileEditViewModel, UILabel, UITableView;

@interface AWETeenModeProfileEditViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, AWEUserMessage, AWETeenUserMessage, AWERouterViewControllerProtocol, AWETeenModeProfileEditViewControllerDelegate> {
    NSString *_userID;
    NSString *_enterFrom;
    UITableView *_tableView;
    AWETeenModeProfileEditViewModel *_viewModel;
    UIButton *_finishButton;
    UILabel *_extraInfoLabel;
    AWETeenAgeGuideManager *_ageAlert;
}

@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWETeenModeProfileEditViewModel *viewModel;
@property (retain, nonatomic) UIButton *finishButton;
@property (retain, nonatomic) UILabel *extraInfoLabel;
@property (retain, nonatomic) AWETeenAgeGuideManager *ageAlert;
@property (copy, nonatomic) NSString *userID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishUpdateAwemeUser;
- (void)setEnterFrom:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)enterFrom;
- (id)extraInfoLabel;
- (void)setExtraInfoLabel:(id)arg0;
- (void)trackAppear;
- (void)tapAvatarCell:(id)arg0 andSender:(id)arg1;
- (void)tapNicknameCell:(id)arg0;
- (void)tapSignatureCell:(id)arg0;
- (void)tapGenderCell:(id)arg0;
- (void)tapBirthdayCell:(id)arg0;
- (void)submitEditInformationWithParams:(id)arg0 andIndexPath:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setAgeAlert:(id)arg0;
- (id)ageAlert;
- (id)userID;
- (double)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setUserID:(id)arg0;
- (void)setViewModel:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)doneButtonClicked;
- (id)finishButton;
- (void)setFinishButton:(id)arg0;
- (void)back;

@end
