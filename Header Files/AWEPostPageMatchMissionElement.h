//
//     Generated by private class-dump
//

@class AWENewPublishTableCell, NSString, NSDictionary, AWEStudioMissionViewController;

@interface AWEPostPageMatchMissionElement : AWEPostPageCellElement <UITableViewDelegate, UITableViewDataSource, AWEPostPageAnchorProtocol> {
    AWENewPublishTableCell *_matchMissionCell;
    AWEStudioMissionViewController *_popVC;
}

@property (retain, nonatomic) AWENewPublishTableCell *matchMissionCell;
@property (weak, nonatomic) AWEStudioMissionViewController *popVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *extras;

+ (void)_aweLazyRegisterPostPage;

- (id)starAtlas;
- (void)setupCell:(id)arg0;
- (id)localLife;
- (void)refreshWithAnchorVM:(id)arg0;
- (void)showAnchorPanel;
- (BOOL)forceReceiveEvents;
- (id)matchMissionCell;
- (void)p_trackShowEventAnchorPanel;
- (void)setPopVC:(id)arg0;
- (void)cancelMissionAction;
- (id)popVC;
- (void)setMatchMissionCell:(id)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)type;
- (BOOL)isEnabled;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)viewDidLoad;
- (id)service;
- (BOOL)isVisible;
- (id)listData;
- (id)cell;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (void)didSelect;

@end
