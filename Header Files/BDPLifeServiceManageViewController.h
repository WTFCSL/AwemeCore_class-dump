//
//     Generated by private class-dump
//

@class NSString, BDPPermissionTableViewController, BDPUniqueID, NSMutableArray;

@interface BDPLifeServiceManageViewController : BDPBusinessXScreenViewController <UITableViewDelegate, UITableViewDataSource> {
    NSString *_appId;
    NSString *_desc;
    BDPPermissionTableViewController *_tableViewController;
    NSMutableArray *_lifeScopeGroups;
}

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) BDPPermissionTableViewController *tableViewController;
@property (readonly, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)indexPathWithTag:(long long)arg0;
- (id)initWithUniqueID:(id)arg0 subPageDict:(id)arg1;
- (void)openSwitchClicked:(id)arg0;
- (void)trackLifeServicePageShowWithUniqueId:(id)arg0;
- (void)trackLifeServiceScopeButtonClickWithUniqueId:(id)arg0 scopeType:(id)arg1 actionType:(id)arg2;
- (id)desc;
- (void)setAppId:(id)arg0;
- (void).cxx_destruct;
- (id)appId;
- (void)viewDidLoad;
- (void)setDesc:(id)arg0;
- (void)setupUI;
- (id)tableViewController;
- (void)setTableViewController:(id)arg0;
- (void)updateNavigationTitle;

@end