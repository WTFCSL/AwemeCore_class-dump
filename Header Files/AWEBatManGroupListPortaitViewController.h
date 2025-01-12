//
//     Generated by private class-dump
//

@class AWEPanelTransitionController, NSArray, NSString, UITableView;

@interface AWEBatManGroupListPortaitViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, BtnClickDelegate> {
    NSArray *_groupList;
    AWEPanelTransitionController *_transitionController;
    NSString *_gameName;
    UITableView *_tableView;
    id /* block */ _listener;
}

@property (retain, nonatomic) NSArray *groupList;
@property (retain, nonatomic) AWEPanelTransitionController *transitionController;
@property (retain, nonatomic) NSString *gameName;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) id /* block */ listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)gameName;
- (void)setGameName:(id)arg0;
- (void)configUI;
- (void)addRoundedCorner;
- (void)onBtnClickListener:(int)arg0;
- (id)initWithGroupListData:(id)arg0 andWithGameName:(id)arg1 andWithClickListener:(id /* block */)arg2;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id /* block */)listener;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)transitionController;
- (void)setListener:(id /* block */)arg0;
- (void)setTransitionController:(id)arg0;
- (id)groupList;
- (void)setGroupList:(id)arg0;
- (void)viewDidLoad;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;

@end
