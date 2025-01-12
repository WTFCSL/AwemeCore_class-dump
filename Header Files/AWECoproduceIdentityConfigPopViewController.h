//
//     Generated by private class-dump
//

@class AWEPublishCoCreatorSettingsRoleModel, NSArray, UITableView, NSString, UILabel, NSIndexPath, UIView;

@interface AWECoproduceIdentityConfigPopViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    AWEPublishCoCreatorSettingsRoleModel *_currentSelectRole;
    NSArray *_coProduceRoles;
    UITableView *_tableView;
    id /* block */ _identifyChangeTappedBlock;
    UIView *_topBar;
    UIView *_containerView;
    UILabel *_titleLabel;
    NSIndexPath *_selectedIndex;
}

@property (retain, nonatomic) UIView *topBar;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSIndexPath *selectedIndex;
@property (retain, nonatomic) AWEPublishCoCreatorSettingsRoleModel *currentSelectRole;
@property (copy, nonatomic) NSArray *coProduceRoles;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) id /* block */ identifyChangeTappedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUI;
- (id)coProduceRoles;
- (id)currentSelectRole;
- (id /* block */)identifyChangeTappedBlock;
- (void)setCurrentSelectRole:(id)arg0;
- (void)setCoProduceRoles:(id)arg0;
- (void)setIdentifyChangeTappedBlock:(id /* block */)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (void)setSelectedIndex:(id)arg0;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)titleLabel;
- (id)topBar;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setTopBar:(id)arg0;
- (id)selectedIndex;

@end
