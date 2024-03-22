//
//     Generated by private class-dump
//

@class NSString, NSDateFormatter, AWEUILoadingView, AWEMixLiveDetailPlayListDataController, UITableView;

@interface AWEMixLiveListViewController : UIViewController <AWERouterViewControllerProtocol, UITableViewDelegate, UITableViewDataSource, AWEAwemeDetailTableViewControllerDelegate> {
    BOOL _loading;
    BOOL _appeared;
    UITableView *_tableView;
    AWEUILoadingView *_loadingView;
    NSString *_mixID;
    NSString *_userID;
    AWEMixLiveDetailPlayListDataController *_dataController;
    NSDateFormatter *_dateFormatter;
    NSString *_fromPersonPage;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) NSString *mixID;
@property (retain, nonatomic) NSString *userID;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (retain, nonatomic) AWEMixLiveDetailPlayListDataController *dataController;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (nonatomic) BOOL appeared;
@property (retain, nonatomic) NSString *fromPersonPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)detailTableViewController:(id)arg0 scrollDidEndAtIndexPath:(id)arg1 model:(id)arg2;
- (void)setDataController:(id)arg0;
- (id)mixID;
- (void)setMixID:(id)arg0;
- (id)fromPersonPage;
- (void)setFromPersonPage:(id)arg0;
- (void)p_reloadData;
- (void)loadDataWithInit:(BOOL)arg0 isRefresh:(BOOL)arg1 isPullUp:(BOOL)arg2;
- (void)backBtndidClick;
- (void)publishBtnDidClick;
- (void)p_mixLivePublishBtnTracker:(BOOL)arg0;
- (void)p_clickCellTracker:(id)arg0;
- (id)userID;
- (BOOL)isLoading;
- (void)setLoading:(BOOL)arg0;
- (id)init;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (void)setDateFormatter:(id)arg0;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setUserID:(id)arg0;
- (id)dateFormatter;
- (void)viewDidDisappear:(BOOL)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (void)setUpTableView;
- (BOOL)appeared;
- (void)setAppeared:(BOOL)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)dataController;
- (void)setUpUI;

@end