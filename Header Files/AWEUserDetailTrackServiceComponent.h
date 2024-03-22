//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, NSMutableDictionary;

@interface AWEUserDetailTrackServiceComponent : AWEUserDetailBaseComponent <AWEUserTrackServiceProtocol> {
    BOOL _hasTrackedLeaveHomepage;
    id /* block */ _headerErrorBlock;
    NSMutableArray *_tabTypeArray;
    NSMutableDictionary *_tabTypeErrorDict;
    NSString *_currentPage;
    NSMutableDictionary *_tabLogNameDict;
    NSMutableDictionary *_tabTypeLoadIndexDict;
    NSMutableDictionary *_tabTypeCellDisplayDict;
    NSMutableDictionary *_tabTypeRequestCountDict;
    NSString *_selectedTabName;
}

@property (copy, nonatomic) id /* block */ headerErrorBlock;
@property (retain, nonatomic) NSMutableArray *tabTypeArray;
@property (retain, nonatomic) NSMutableDictionary *tabTypeErrorDict;
@property (copy, nonatomic) NSString *currentPage;
@property (retain, nonatomic) NSMutableDictionary *tabLogNameDict;
@property (retain, nonatomic) NSMutableDictionary *tabTypeLoadIndexDict;
@property (retain, nonatomic) NSMutableDictionary *tabTypeCellDisplayDict;
@property (retain, nonatomic) NSMutableDictionary *tabTypeRequestCountDict;
@property (copy, nonatomic) NSString *selectedTabName;
@property (nonatomic) BOOL hasTrackedLeaveHomepage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)selectedTabName;
- (void)setSelectedTabName:(id)arg0;
- (BOOL)p_isCurrentUser;
- (void)onTabdidSelectIndex:(long long)arg0;
- (void)onBackButtonClicked:(id)arg0;
- (void)onDidRequestUser:(id)arg0 error:(id)arg1;
- (void)requestCompletionWithTabType:(long long)arg0 error:(id)arg1 refresh:(BOOL)arg2 ext:(id)arg3;
- (void)cellWillDisplayWithTabType:(long long)arg0 secondTabLogName:(id)arg1 item:(long long)arg2;
- (id)tabTypeCellDisplayDict;
- (id)tabLogNameDict;
- (void)trackLeaveHomepageIsClickBackButton:(BOOL)arg0;
- (void)setTabTypeErrorDict:(id)arg0;
- (void)setHasTrackedLeaveHomepage:(BOOL)arg0;
- (id)tabTypeErrorDict;
- (id /* block */)headerErrorBlock;
- (void)setHeaderErrorBlock:(id /* block */)arg0;
- (void)p_checkCompletion;
- (id)tabTypeLoadIndexDict;
- (id)tabTypeRequestCountDict;
- (id)tabTypeArray;
- (void)p_completionWith:(id)arg0 headerError:(id)arg1;
- (BOOL)hasTrackedLeaveHomepage;
- (void)setTabTypeArray:(id)arg0;
- (void)setTabLogNameDict:(id)arg0;
- (void)setTabTypeLoadIndexDict:(id)arg0;
- (void)setTabTypeCellDisplayDict:(id)arg0;
- (void)setTabTypeRequestCountDict:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setCurrentPage:(id)arg0;
- (id)currentPage;
- (void)dealloc;
- (void)viewWillAppear;
- (void)onInit;

@end
