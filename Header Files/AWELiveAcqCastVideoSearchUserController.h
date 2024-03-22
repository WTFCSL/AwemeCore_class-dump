//
//     Generated by private class-dump
//

@class AWELiveAcqCastVideoSearchUserManager, NSDictionary, NSString, AWEUILoadingView, UITableView;
@protocol AWELiveAcqCastVideoViewModelProtocol;

@interface AWELiveAcqCastVideoSearchUserController : AWELiveAcqCastVideoSearchBaseController <UITableViewDelegate, UITableViewDataSource> {
    BOOL _isFetching;
    NSDictionary *_trackParams;
    AWELiveAcqCastVideoSearchUserManager *_userManager;
    AWEUILoadingView *_loadingView;
    UITableView *_tableView;
    id<AWELiveAcqCastVideoViewModelProtocol> _viewModel;
}

@property (nonatomic) BOOL isFetching;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) AWELiveAcqCastVideoSearchUserManager *userManager;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) id<AWELiveAcqCastVideoViewModelProtocol> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userManager;
- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (void)setUserManager:(id)arg0;
- (void)loadMore;
- (id)initWithDataManager:(id)arg0 viewModel:(id)arg1 trackParams:(id)arg2;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setViewModel:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setupUI;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end