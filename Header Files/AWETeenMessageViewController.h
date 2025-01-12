//
//     Generated by private class-dump
//

@class AWENotificationModelNew, NSString, AWEUILoadingView, AWETeenMessageDataController, UITableView;

@interface AWETeenMessageViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWETeenMessageTableViewCellDelegate, AWEViewControllerRefreshable, AWEUserMessage, AWEDigitalWellbeingMessage, AWEPadUITrackerProtocol, AWETabBarItemViewControllerProtocol> {
    BOOL _needRefresh;
    UITableView *_tableView;
    AWEUILoadingView *_loadingView;
    AWENotificationModelNew *_actionSheetOperationModel;
    AWETeenMessageDataController *_dataController;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWENotificationModelNew *actionSheetOperationModel;
@property (retain, nonatomic) AWETeenMessageDataController *dataController;
@property (nonatomic) BOOL needRefresh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *awe_padUITrackerPageEnterFrom;
@property (nonatomic) BOOL awe_padUITrackerIgnoreStayTime;

- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)didFinishLogin;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)setNeedRefresh:(BOOL)arg0;
- (void)setDataController:(id)arg0;
- (void)showActionSheet:(id)arg0;
- (void)p_setupUI;
- (void)teenModeDidChange:(BOOL)arg0 isLogout:(BOOL)arg1;
- (id)titleForActionSheet;
- (id)awe_padUITrackerPageEnterFrom;
- (void)p_refreshData;
- (void)p_loadMoreData;
- (void)onSettingClick:(id)arg0;
- (void)setActionSheetOperationModel:(id)arg0;
- (id)actionSheetOperationModel;
- (void)deleteNotice;
- (void)readAllMessage;
- (id)getTitleAction:(id)arg0;
- (void)onGotoDetailClick:(id)arg0;
- (void)onNoticeTextUnfoldCell:(id)arg0;
- (void)awe_themeDidChange;
- (void)p_addHeaderAndFooter;
- (void)p_initFetchData;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (BOOL)needRefresh;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)refreshWithCompletion:(id /* block */)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)dataController;

@end
