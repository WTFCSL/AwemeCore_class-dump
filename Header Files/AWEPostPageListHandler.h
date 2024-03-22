//
//     Generated by private class-dump
//

@class AWEPostPageListDataSource, AWEPostPageElementCenter, AWEPostPageListBatchUpdatesCombiner, NSMutableSet, NSString, UITableView;
@protocol AWEPostPageListDataTemplate, AWEPostPageContext;

@interface AWEPostPageListHandler : NSObject <AWEPostPageElementUpdateListener, AWEPostPageListService> {
    BOOL _isInUpdateTransaction;
    BOOL _isDataLoaded;
    UITableView *_tableView;
    id<AWEPostPageContext> _context;
    AWEPostPageElementCenter *_elementCenter;
    AWEPostPageListDataSource *_dataSource;
    NSMutableSet *_cellIdentifiers;
    NSMutableSet *_headerFooterIdentifiers;
    id /* block */ _bactchUpdatesBlock;
    id<AWEPostPageListDataTemplate> _template;
    AWEPostPageListBatchUpdatesCombiner *_combiner;
}

@property (retain, nonatomic) id<AWEPostPageContext> context;
@property (weak, nonatomic) AWEPostPageElementCenter *elementCenter;
@property (retain, nonatomic) AWEPostPageListDataSource *dataSource;
@property (retain, nonatomic) NSMutableSet *cellIdentifiers;
@property (retain, nonatomic) NSMutableSet *headerFooterIdentifiers;
@property (nonatomic) BOOL isInUpdateTransaction;
@property (copy, nonatomic) id /* block */ bactchUpdatesBlock;
@property (retain, nonatomic) id<AWEPostPageListDataTemplate> template;
@property (nonatomic) BOOL isDataLoaded;
@property (retain, nonatomic) AWEPostPageListBatchUpdatesCombiner *combiner;
@property (weak, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)arg0;
- (void)performRowHeightUpdatesWithAnimation:(id /* block */)arg0;
- (void)performRowHeightUpdates:(id /* block */)arg0;
- (void)setElementCenter:(id)arg0;
- (id)elementCenter;
- (id)indexPathForElementType:(id)arg0;
- (id)elementForElementType:(id)arg0;
- (void)buildListData;
- (id)initWithListTemplate:(id)arg0;
- (id)cellForElementType:(id)arg0;
- (void)reloadElementType:(id)arg0;
- (void)batchUpdateWithElementTypes:(id)arg0;
- (void)batchUpdate:(id)arg0;
- (void)reloadAllListData;
- (void)center:(id)arg0 didRegisterElements:(id)arg1;
- (void)setIsDataLoaded:(BOOL)arg0;
- (id)cellIdentifiers;
- (id)headerFooterIdentifiers;
- (void)p_clearBackgroundColorForHeaderFooterView:(id)arg0;
- (id /* block */)bactchUpdatesBlock;
- (void)setBactchUpdatesBlock:(id /* block */)arg0;
- (void)setIsInUpdateTransaction:(BOOL)arg0;
- (BOOL)isInUpdateTransaction;
- (void)p_batchUpdateIfNeeded;
- (void)p_updateUIWithDiff:(id)arg0;
- (void)p_applyBatchData:(id)arg0;
- (void)setCellIdentifiers:(id)arg0;
- (void)setHeaderFooterIdentifiers:(id)arg0;
- (id)sections;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (id)cellForRowAtIndexPath:(id)arg0;
- (void)setTableView:(id)arg0;
- (void).cxx_destruct;
- (id)tableView;
- (void)setContext:(id)arg0;
- (long long)numberOfSections;
- (void)setCombiner:(id)arg0;
- (id)context;
- (long long)numberOfRowsInSection:(long long)arg0;
- (void)didSelectRowAtIndexPath:(id)arg0;
- (id)combiner;
- (double)heightForHeaderInSection:(long long)arg0;
- (double)heightForFooterInSection:(long long)arg0;
- (id)viewForHeaderInSection:(long long)arg0;
- (id)viewForFooterInSection:(long long)arg0;
- (id)template;
- (void)setTemplate:(id)arg0;
- (BOOL)isDataLoaded;

@end