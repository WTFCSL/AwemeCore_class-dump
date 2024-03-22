//
//     Generated by private class-dump
//

@class NSArray, NSString, UITableView;

@interface IESLiveTableViewAdapterUpdater : NSObject <UITableViewDataSource, UITableViewDelegate> {
    UITableView *_tableView;
    NSArray *_sections;
    long long _state;
}

@property (retain, nonatomic) NSArray *sections;
@property long long state;
@property (weak, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transparentCell;
- (void)performReloadData:(id)arg0 completion:(id /* block */)arg1;
- (void)stopRefresh;
- (void)trackTableViewException:(id)arg0;
- (void)performIndexPathUpdates:(id)arg0 cellUpdateBlock:(id /* block */)arg1;
- (id)sections;
- (void)resetState;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)performBatchUpdates:(id)arg0 completion:(id /* block */)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (long long)state;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setState:(long long)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setSections:(id)arg0;
- (void)configureCell:(id)arg0 atIndexPath:(id)arg1;

@end