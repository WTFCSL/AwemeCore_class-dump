//
//     Generated by private class-dump
//

@class NSDictionary, AFDFamiliarOperationEngine;

@interface AFDSettingSearchEngine : NSObject {
    NSDictionary *_settingItems;
    AFDFamiliarOperationEngine *_searchEngine;
}

@property (retain, nonatomic) AFDFamiliarOperationEngine *searchEngine;
@property (copy, nonatomic) NSDictionary *settingItems;

- (void)setSearchEngine:(id)arg0;
- (void)p_searchSectionsWithKeyword:(id)arg0 completed:(id /* block */)arg1;
- (void)p_addOperationWithKeyword:(id)arg0 completed:(id /* block */)arg1;
- (BOOL)p_judgeRangeWithItem:(id)arg0 keyword:(id)arg1;
- (void)p_handleSettingItem:(id)arg0 withOperation:(id)arg1 context:(id)arg2;
- (void)p_handleResultItems:(id)arg0 withOperation:(id)arg1 context:(id)arg2;
- (void)p_handleAttributedTitle:(id)arg0 context:(id)arg1;
- (id)p_addResultItemWithSettingItem:(id)arg0 inResultItems:(id)arg1 pathItems:(id)arg2;
- (void)p_addResultItemInSection:(id)arg0 resultSections:(id)arg1;
- (void)p_handleResultSections:(id)arg0 withOperation:(id)arg1 context:(id)arg2;
- (void)p_handleSearchDataWithOperation:(id)arg0 context:(id)arg1;
- (void)searchItemsWithKeyword:(id)arg0 completed:(id /* block */)arg1;
- (void)searchSectionsWithKeyword:(id)arg0 completed:(id /* block */)arg1;
- (void).cxx_destruct;
- (id)searchEngine;
- (id)settingItems;
- (void)setSettingItems:(id)arg0;

@end
