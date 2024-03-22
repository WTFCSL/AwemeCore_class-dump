//
//     Generated by private class-dump
//

@class AWEMenu, NSArray, NSString, AWEMenuTopBar, NSIndexPath;

@interface AWEAdMenuViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIViewControllerTransitioningDelegate> {
    AWEMenu *_menu;
    id /* block */ _didFinishPicking;
    AWEMenuTopBar *_topBar;
    NSArray *_tableViews;
    NSArray *_separatorLines;
    NSIndexPath *_selectedIndexPath;
    NSIndexPath *_preselectedMenuIndexPath;
}

@property (retain, nonatomic) AWEMenuTopBar *topBar;
@property (copy, nonatomic) NSArray *tableViews;
@property (copy, nonatomic) NSArray *separatorLines;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSIndexPath *preselectedMenuIndexPath;
@property (readonly, nonatomic) AWEMenu *menu;
@property (copy, nonatomic) id /* block */ didFinishPicking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelButtonAction:(id)arg0;
- (id /* block */)didFinishPicking;
- (void)setDidFinishPicking:(id /* block */)arg0;
- (id)initWithMenu:(id)arg0 preselectedMenuIndexPath:(id)arg1;
- (void)setTableViews:(id)arg0;
- (id)tableViews;
- (void)setSeparatorLines:(id)arg0;
- (id)preselectedMenuIndexPath;
- (id)currentlySelectedMenuIndexPath;
- (void)setPreselectedMenuIndexPath:(id)arg0;
- (id)separatorLines;
- (id)menuForTableView:(id)arg0;
- (id)selectedIndexPathAheadOfTableView:(id)arg0;
- (void)generateSelectionFeedback;
- (id)menu;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)topBar;
- (void)viewDidLoad;
- (void)setTopBar:(id)arg0;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg0;
- (void)doneButtonAction:(id)arg0;

@end