//
//     Generated by private class-dump
//

@class NSArray, NSString, UITableView;

@interface IESPrefetchDebugViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    UITableView *_tableView;
    NSArray *_allBiz;
}

@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *allBiz;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allBiz;
- (void)setAllBiz:(id)arg0;
- (void)dismiss;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (id)tableView:(id)arg0 titleForHeaderInSection:(long long)arg1;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)viewDidLoad;
- (void)setupTableView;

@end
