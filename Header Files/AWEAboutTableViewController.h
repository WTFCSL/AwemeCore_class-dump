//
//     Generated by private class-dump
//

@class NSArray, NSString, UIView, UITableView;

@interface AWEAboutTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEAboutTableViewControllerProtocol> {
    UIView *_topGapView;
    UITableView *_tableView;
    NSArray *_itemModels;
}

@property (retain, nonatomic) UIView *topGapView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *itemModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backBtnClick;
- (id)itemModels;
- (void)setItemModels:(id)arg0;
- (void)__setupItemModels;
- (void)setTopGapView:(id)arg0;
- (id)topGapView;
- (id)__versionTableViewCell;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)scrollViewDidScroll:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)viewDidLoad;

@end
