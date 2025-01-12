//
//     Generated by private class-dump
//

@class UITableView, NSArray, NSString, NSMutableSet, UIView, AWEColorFilterDataManager, IESCategoryModel;
@protocol ACCLoadingViewProtocol;

@interface AWEFilterBoxView : UIView <UITableViewDataSource, UITableViewDelegate> {
    NSArray *_categories;
    AWEColorFilterDataManager *_filterManager;
    id /* block */ _selectionBlock;
    id /* block */ _unselectionBlock;
    NSArray *_filterCategorys;
    IESCategoryModel *_currentCategory;
    UITableView *_categoryTableView;
    UITableView *_filterTableView;
    NSMutableSet *_checkSet;
    NSMutableSet *_uncheckSet;
    UIView<ACCLoadingViewProtocol> *_loadingView;
    UIView *_categoryBackgroundView;
}

@property (copy, nonatomic) NSArray *filterCategorys;
@property (retain, nonatomic) IESCategoryModel *currentCategory;
@property (retain, nonatomic) UITableView *categoryTableView;
@property (retain, nonatomic) UITableView *filterTableView;
@property (retain, nonatomic) NSMutableSet *checkSet;
@property (retain, nonatomic) NSMutableSet *uncheckSet;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) UIView *categoryBackgroundView;
@property (readonly, nonatomic) NSArray *checkArray;
@property (readonly, nonatomic) NSArray *uncheckArray;
@property (copy, nonatomic) NSArray *categories;
@property (retain, nonatomic) AWEColorFilterDataManager *filterManager;
@property (copy, nonatomic) id /* block */ selectionBlock;
@property (copy, nonatomic) id /* block */ unselectionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showLoading:(BOOL)arg0;
- (id)currentCategory;
- (void)setCurrentCategory:(id)arg0;
- (id)filterTableView;
- (void)setFilterTableView:(id)arg0;
- (id)filterManager;
- (void)setFilterManager:(id)arg0;
- (unsigned long long)p_cellIconStyle;
- (id)categoryBackgroundView;
- (id)categoryTableView;
- (id)checkSet;
- (id)uncheckSet;
- (void)setFilterCategorys:(id)arg0;
- (id)filterCategorys;
- (id /* block */)unselectionBlock;
- (id)checkArray;
- (id)uncheckArray;
- (void)setUnselectionBlock:(id /* block */)arg0;
- (void)setCategoryTableView:(id)arg0;
- (void)setCheckSet:(id)arg0;
- (void)setUncheckSet:(id)arg0;
- (void)setCategoryBackgroundView:(id)arg0;
- (id)init;
- (id)categories;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (void)setCategories:(id)arg0;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id /* block */)selectionBlock;
- (void)setSelectionBlock:(id /* block */)arg0;
- (void)showError:(BOOL)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
