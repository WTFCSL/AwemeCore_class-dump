//
//     Generated by private class-dump
//

@class NSString, UIView, AWEPublishVideoSyncDataModel, UITableView;

@interface AWEPublishVideoSyncContentViewController : AWEPublishHalfScreenContentViewController <UITableViewDataSource, UITableViewDelegate> {
    UIView *_headerView;
    UIView *_headerBar;
    UITableView *_tableView;
    AWEPublishVideoSyncDataModel *_model;
}

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *headerBar;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEPublishVideoSyncDataModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHeaderBar:(id)arg0;
- (id)headerBar;
- (void)registerTableViewCellReuse;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (double)contentHeight;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)model;
- (void)setHeaderView:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)headerView;
- (void)viewDidLoad;
- (BOOL)accessibilityPerformEscape;
- (void)setupViews;

@end