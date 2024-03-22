//
//     Generated by private class-dump
//

@class NSArray, BDPUniqueID, UIViewController;

@interface BDPPermissionTableViewController : UITableViewController {
    NSArray *_scopeGroups;
    BDPUniqueID *_uniqueID;
    UIViewController *_parentVC;
}

@property (copy, nonatomic) NSArray *scopeGroups;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (weak, nonatomic) UIViewController *parentVC;

- (id)sectionTitleLabel;
- (BOOL)is12HourFormat;
- (id)initWithUniqueID:(id)arg0 scopeGroups:(id)arg1 parentVC:(id)arg2;
- (void)updateWithScopeGroups:(id)arg0;
- (void)setScopeGroups:(id)arg0;
- (id)scopeGroups;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)uniqueID;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setUniqueID:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)viewDidLoad;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (void)setupUI;
- (id)parentVC;
- (void)setParentVC:(id)arg0;

@end