//
//     Generated by private class-dump
//

@class UITableView, NSString, AWEAfterPublishAdvanceSettingDataController, UIViewController, UIView, UILabel, UIButton;
@protocol AFDModalViewHelperProtocol;

@interface AWEAfterPublishAdvanceSettingViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, AWEAfterPublishAdvanceSettingCellDelegate, AWEPanelTransitionWithBackground, AWEAdvanceSettingActionViewControllerProtocol> {
    BOOL _needUseCardUI;
    id /* block */ _confirmDuetPermissonBlock;
    id /* block */ _confirmCommentPermissonBlock;
    id /* block */ _confirmDanmakuPermissonBlock;
    id /* block */ _confirmXiguaPrivacyTypeBlock;
    UIViewController *_sourceViewController;
    UIView *_contentView;
    UIButton *_backButton;
    UIView *_headerView;
    UIView *_headerBar;
    UIView *_navigationView;
    UILabel *_titleLabel;
    id<AFDModalViewHelperProtocol> _helper;
    UITableView *_tableView;
    AWEAfterPublishAdvanceSettingDataController *_dataController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *headerBar;
@property (retain, nonatomic) UIView *navigationView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) id<AFDModalViewHelperProtocol> helper;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEAfterPublishAdvanceSettingDataController *dataController;
@property (nonatomic) BOOL needUseCardUI;
@property (weak, nonatomic) UIViewController *sourceViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ confirmDuetPermissonBlock;
@property (copy, nonatomic) id /* block */ confirmCommentPermissonBlock;
@property (copy, nonatomic) id /* block */ confirmDanmakuPermissonBlock;
@property (copy, nonatomic) id /* block */ confirmXiguaPrivacyTypeBlock;

- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)arg0;
- (void)setDataController:(id)arg0;
- (id)initWithDataController:(id)arg0;
- (void)p_setupViews;
- (void)setHeaderBar:(id)arg0;
- (id)headerBar;
- (void)setNeedUseCardUI:(BOOL)arg0;
- (BOOL)needUseCardUI;
- (id)navigationView;
- (void)setNavigationView:(id)arg0;
- (void)registerTableViewCellReuse;
- (id)identifierForCardUIStyleWithOriginalID:(id)arg0;
- (id /* block */)confirmDuetPermissonBlock;
- (id /* block */)confirmCommentPermissonBlock;
- (id /* block */)confirmDanmakuPermissonBlock;
- (id /* block */)confirmXiguaPrivacyTypeBlock;
- (void)setConfirmDuetPermissonBlock:(id /* block */)arg0;
- (void)setConfirmCommentPermissonBlock:(id /* block */)arg0;
- (void)setConfirmDanmakuPermissonBlock:(id /* block */)arg0;
- (void)setConfirmXiguaPrivacyTypeBlock:(id /* block */)arg0;
- (void)cellDidClickAtIndexPath:(id)arg0 item:(id)arg1;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (double)contentHeight;
- (void)setHelper:(id)arg0;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setSourceViewController:(id)arg0;
- (id)titleLabel;
- (id)helper;
- (id)sourceViewController;
- (void)setHeaderView:(id)arg0;
- (id)contentView;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)viewWillAppear:(BOOL)arg0;
- (id)headerView;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)dataController;
- (void)backButtonTapped:(id)arg0;
- (double)bottomOffset;

@end