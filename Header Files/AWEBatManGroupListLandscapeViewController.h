//
//     Generated by private class-dump
//

@class UITableView, NSArray, NSString, UIView, AWEBatManTransitionController;

@interface AWEBatManGroupListLandscapeViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, BtnClickDelegate> {
    NSArray *_groupList;
    AWEBatManTransitionController *_transitionController;
    UIView *_rightBlankView;
    UIView *_leftContainerView;
    UITableView *_tableView;
    NSString *_gameName;
    id /* block */ _listener;
}

@property (retain, nonatomic) NSArray *groupList;
@property (retain, nonatomic) AWEBatManTransitionController *transitionController;
@property (retain, nonatomic) UIView *rightBlankView;
@property (retain, nonatomic) UIView *leftContainerView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSString *gameName;
@property (copy, nonatomic) id /* block */ listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)gameName;
- (void)setGameName:(id)arg0;
- (BOOL)awe_shouldBypassPresentationHook;
- (id)leftContainerView;
- (void)configUI;
- (void)setLeftContainerView:(id)arg0;
- (id)rightBlankView;
- (void)addRoundedCorner;
- (void)onTapBlank;
- (void)setRightBlankView:(id)arg0;
- (void)onBtnClickListener:(int)arg0;
- (id)initWithGroupListData:(id)arg0 andWithGameName:(id)arg1 andWithClickListener:(id /* block */)arg2;
- (BOOL)shouldAutorotate;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (id /* block */)listener;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)transitionController;
- (void)setListener:(id /* block */)arg0;
- (void)setTransitionController:(id)arg0;
- (id)groupList;
- (void)dismissAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setGroupList:(id)arg0;
- (void)viewDidLoad;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;

@end