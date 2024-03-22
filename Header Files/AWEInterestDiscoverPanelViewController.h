//
//     Generated by private class-dump
//

@class UIView, NSString, AWEListDataController, UIImageView, AWEUILoadingView, UITableView, AWEInterestDiscoverContext, UILabel;
@protocol AWEInterestDiscoverPanelViewControllerDelegate;

@interface AWEInterestDiscoverPanelViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    AWEListDataController *_dataController;
    id<AWEInterestDiscoverPanelViewControllerDelegate> _delegate;
    UITableView *_tableView;
    AWEInterestDiscoverContext *_context;
    UIImageView *_roamImageView;
    UILabel *_titleLabel;
    UIImageView *_closeImageView;
    UIView *_closeBackgroundView;
    AWEUILoadingView *_loadingView;
    UIView *_loadingBackgroundView;
}

@property (retain, nonatomic) UIImageView *roamImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIView *closeBackgroundView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIView *loadingBackgroundView;
@property (weak, nonatomic) AWEListDataController *dataController;
@property (weak, nonatomic) id<AWEInterestDiscoverPanelViewControllerDelegate> delegate;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEInterestDiscoverContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDataController:(id)arg0;
- (id)commonParams;
- (void)closePanel;
- (void)addLoadMoreIfNeeded;
- (id)videoAtIndex:(long long)arg0;
- (id)roamImageView;
- (void)setRoamImageView:(id)arg0;
- (void)addHandler;
- (void)scrollToVisibleIndex;
- (void)trackMoreInterestShow;
- (void)hideLoadingIfNeeds;
- (id)closeBackgroundView;
- (id)loadingBackgroundView;
- (void)showLoadingIfNeeds;
- (void)dealSelectVideoWithTableView:(id)arg0 indexPath:(id)arg1;
- (void)trackMoreInterestClick:(id)arg0;
- (void)setCloseBackgroundView:(id)arg0;
- (void)setLoadingBackgroundView:(id)arg0;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)setContext:(id)arg0;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)titleLabel;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (id)context;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (id)titleString;
- (void)setupUI;
- (long long)numberOfVideos;
- (void)willDisplayCell:(id)arg0 forRowAtIndexPath:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)dataController;
- (id)closeImageView;
- (void)setCloseImageView:(id)arg0;

@end
