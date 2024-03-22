//
//     Generated by private class-dump
//

@class NSString, NSArray, UITableView;

@interface HGListPermissionContentView : UIView <UITableViewDataSource, UITableViewDelegate> {
    id /* block */ _didUpdateSelectedScopesCallback;
    UITableView *_tableView;
    NSArray *_scopeList;
    double _tableviewHeight;
}

@property (nonatomic) double tableviewHeight;
@property (copy, nonatomic) id /* block */ didUpdateSelectedScopesCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScopeDescriptions:(id)arg0 height:(double)arg1;
- (id)selectedScopesString;
- (void)setDidUpdateSelectedScopesCallback:(id /* block */)arg0;
- (id)selectedScopes;
- (void)setTableviewHeight:(double)arg0;
- (double)tableviewHeight;
- (id /* block */)didUpdateSelectedScopesCallback;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setupUI;
- (void)setupTableView;

@end