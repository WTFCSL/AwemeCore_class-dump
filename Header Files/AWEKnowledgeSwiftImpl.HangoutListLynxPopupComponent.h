//
//     Generated by private class-dump
//

@interface AWEKnowledgeSwiftImpl.HangoutListLynxPopupComponent : AWESpeCategoryKit.FeedListBaseComponent {
    void /* unknown type, empty encoding */ xBridgeEventSubscriber;
    void /* unknown type, empty encoding */ isPopupShowing;
    void /* unknown type, empty encoding */ dispatchGroup;
    void /* unknown type, empty encoding */ $__lazy_storage_$_popupDataController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pinTopManager;
    void /* unknown type, empty encoding */ popupPresentBlock;
}

- (void)onContainerViewDidLoad;
- (void)onContainerViewDidAppear;
- (void)onFetchListDataEndWithReason:(long long)arg0 success:(BOOL)arg1 response:(id)arg2 error:(id)arg3;
- (void)onFetchListDataStartWithReason:(long long)arg0;
- (void)onLoadMoreListDataStartWithReason:(long long)arg0;
- (id)init;
- (void).cxx_destruct;

@end