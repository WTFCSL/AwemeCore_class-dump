//
//     Generated by private class-dump
//

@class NSString, AWEUILoadingView, AFDPublishVisibleListDataController, UITableView;

@interface AFDCloseFriendsMomentVisibilityListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    UITableView *_tableView;
    AWEUILoadingView *_loadingView;
    AFDPublishVisibleListDataController *_dataController;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AFDPublishVisibleListDataController *dataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (id)dux_titleForColoseButton;
- (void)setDataController:(id)arg0;
- (id)initWithAwemeID:(id)arg0;
- (void)hideLoadingViewIfNeeded;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)viewDidLoad;
- (void)requestData;
- (void)showLoadingView;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)dataController;

@end
