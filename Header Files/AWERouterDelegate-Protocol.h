//
//     Generated by private class-dump
//

@protocol AWERouterDelegate <NSObject>

@optional

- (void)routerDidBeginTransferWithURLString:(id)arg0;
- (void)routerDidRegisterURLString:(id)arg0;
- (void)routerDidFailRegisteringURLString:(id)arg0 errorMessage:(id)arg1;
- (void)routerDidCreateViewControllerBeforeTransferWithURLString:(id)arg0 targetViewController:(id)arg1;
- (void)routerDidTransferWithURLString:(id)arg0 fromViewController:(id)arg1 toViewController:(id)arg2 transitionType:(long long)arg3;
- (void)routerDidFailTransferingWithURLString:(id)arg0 errorMessage:(id)arg1;
- (void)routerDidConfigRouterParamsDict:(id)arg0 viewController:(id)arg1;
- (void)routerDidRetrieveViewControllerForURLString:(id)arg0 viewController:(id)arg1;
- (void)routerDidFailRetrievingViewControllerForURLString:(id)arg0 errorMessage:(id)arg1;
- (void)routerHasBeenInterceptWithURLString:(id)arg0 key:(id)arg1 stage:(unsigned long long)arg2;
- (void)routerHasBeenModifiedBeforeViewControllerRetrieveWithOldURLString:(id)arg0 newURLString:(id)arg1;
- (void)routerHasBeenModifiedBeforeTransitionRetrieveWithOldURLString:(id)arg0 newURLString:(id)arg1;
- (void)routerHasBeenModifiedWhenTransferingWithOldURLString:(id)arg0 newURLString:(id)arg1;

@end