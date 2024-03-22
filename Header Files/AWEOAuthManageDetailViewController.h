//
//     Generated by private class-dump
//

@class NSString, AWEOAuthManageViewController, AWEOAuthItem, AWEProgressLoadingView, UITableView;

@interface AWEOAuthManageDetailViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    AWEOAuthItem *_model;
    AWEOAuthManageViewController *_parent;
    AWEProgressLoadingView *_progressView;
    UITableView *_tableView;
}

@property (retain, nonatomic) AWEProgressLoadingView *progressView;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) AWEOAuthItem *model;
@property (weak, nonatomic) AWEOAuthManageViewController *parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backBtnClick:(id)arg0;
- (void)showLoadingViewWithTitle:(id)arg0;
- (void)unlinkTapped:(id)arg0;
- (void)setModel:(id)arg0;
- (void)setParent:(id)arg0;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)parent;
- (id)model;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)viewDidLoad;
- (void)unlink;
- (void)hideLoadingView;

@end
