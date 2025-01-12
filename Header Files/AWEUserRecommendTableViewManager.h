//
//     Generated by private class-dump
//

@class NSString, AWEFeedRefreshFooter, AWEUserRecommendMJRefreshFooter, UITableView;
@protocol AWEUserRecommendTableSectionProviderProtocol, AWEUserRecommendTableViewManagerDataSource, UITableViewDataSource, UITableViewDelegate;

@interface AWEUserRecommendTableViewManager : NSObject <UITableViewDataSource, UITableViewDelegate, AWEUserRecommendTableSectionProviderDataSource, AWEUserRecommendTableViewManagerProtocol> {
    BOOL _managedFooterHidden;
    id<AWEUserRecommendTableViewManagerDataSource> _dataSource;
    id<UITableViewDataSource> _tableViewDataSource;
    id<UITableViewDelegate> _tableViewDelegate;
    id<AWEUserRecommendTableSectionProviderProtocol> _sectionProvider;
    long long _recommendSection;
    double _managedFooterInsetB;
    double _recommendFooterInsetB;
    UITableView *_tableView;
    AWEUserRecommendMJRefreshFooter *_footer;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) id<AWEUserRecommendTableSectionProviderProtocol> sectionProvider;
@property (nonatomic) long long recommendSection;
@property (retain, nonatomic) AWEUserRecommendMJRefreshFooter *footer;
@property (weak, nonatomic) id<AWEUserRecommendTableViewManagerDataSource> dataSource;
@property (weak, nonatomic) id<UITableViewDataSource> tableViewDataSource;
@property (weak, nonatomic) id<UITableViewDelegate> tableViewDelegate;
@property (readonly, nonatomic) AWEFeedRefreshFooter *managedFooter;
@property (nonatomic) BOOL managedFooterHidden;
@property (nonatomic) double managedFooterInsetB;
@property (nonatomic) double recommendFooterInsetB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTableViewDelegate:(id)arg0;
- (id)sectionProvider;
- (id)managedFooter;
- (void)setRecommendFooterInsetB:(double)arg0;
- (id)indexesForVisibleCellsForRecommendSectionProvider:(id)arg0;
- (id)visibleCellsForRecommendSectionProvider:(id)arg0;
- (id)cellForRecommendSectionProvider:(id)arg0 atIndex:(long long)arg1;
- (id)headerViewForRecommendSectionProvider:(id)arg0;
- (id)footerViewForRecommendSectionProvider:(id)arg0;
- (id)recommendSectionProvider:(id)arg0 dequeueReusableCellWithIdentifier:(id)arg1;
- (id)recommendSectionProvider:(id)arg0 dequeueReusableHeaderFooterViewWithIdentifier:(id)arg1;
- (void)recommendSectionProvider:(id)arg0 insertRowsAtIndexes:(id)arg1 animated:(BOOL)arg2;
- (void)recommendSectionProvider:(id)arg0 deleteRowsAtIndexes:(id)arg1 animated:(BOOL)arg2;
- (void)recommendSectionProvider:(id)arg0 performBatchUpdates:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)reloadRecommendSectionProvider:(id)arg0;
- (void)recommendSectionProviderWillBecomeEmpty:(id)arg0;
- (void)recommendSectionProviderDidBecomeEmpty:(id)arg0;
- (void)recommendSectionProviderDidBecomeNonEmpty:(id)arg0;
- (long long)recommendSection;
- (void)setManagedFooterHidden:(BOOL)arg0;
- (void)setManagedFooterInsetB:(double)arg0;
- (id)initWithTableView:(id)arg0 contextBuilder:(id /* block */)arg1;
- (id)initWithTableView:(id)arg0 viewModel:(id)arg1;
- (BOOL)shouldHideManagedFooter;
- (double)recommendFooterInsetB;
- (double)managedFooterInsetB;
- (id)initWithTableView:(id)arg0 sectionProvider:(id)arg1;
- (void)p_updateMJFooterIfNeeded;
- (void)setRecommendSection:(long long)arg0;
- (id)tableViewDelegate;
- (BOOL)managedFooterHidden;
- (void)setSectionProvider:(id)arg0;
- (void)setDataSource:(id)arg0;
- (void)setFooter:(id)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)dataSource;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)scrollViewDidScroll:(id)arg0;
- (id)footer;
- (id)sectionIndexTitlesForTableView:(id)arg0;
- (long long)tableView:(id)arg0 sectionForSectionIndexTitle:(id)arg1 atIndex:(long long)arg2;
- (void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(long long)arg2;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1;
- (BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg0 commitEditingStyle:(long long)arg1 forRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)tableView:(id)arg0 willDisplayFooterView:(id)arg1 forSection:(long long)arg2;
- (void)tableView:(id)arg0 didEndDisplayingHeaderView:(id)arg1 forSection:(long long)arg2;
- (void)tableView:(id)arg0 didEndDisplayingFooterView:(id)arg1 forSection:(long long)arg2;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg0 editActionsForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg0 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg0 willBeginEditingRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg0 didEndEditingRowAtIndexPath:(id)arg1;
- (id)tableViewDataSource;
- (void)setTableViewDataSource:(id)arg0;

@end
