//
//     Generated by private class-dump
//

@class NSString;

@interface AWERouterDelegateImpl : NSObject <AWERouterSettingsDelegate, AWERouterDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad_Settings;
+ (id)sharedInstance;

- (void)routerDidTransferWithURLString:(id)arg0 fromViewController:(id)arg1 toViewController:(id)arg2 transitionType:(long long)arg3;
- (void)routerDidFailTransferingWithURLString:(id)arg0 errorMessage:(id)arg1;
- (void)routerDidRetrieveViewControllerForURLString:(id)arg0 viewController:(id)arg1;
- (void)routerDidFailRetrievingViewControllerForURLString:(id)arg0 errorMessage:(id)arg1;
- (void)routerHasBeenModifiedBeforeViewControllerRetrieveWithOldURLString:(id)arg0 newURLString:(id)arg1;
- (void)routerHasBeenModifiedBeforeTransitionRetrieveWithOldURLString:(id)arg0 newURLString:(id)arg1;
- (void)routerHasBeenModifiedWhenTransferingWithOldURLString:(id)arg0 newURLString:(id)arg1;
- (void)routerHasBeenInterceptWithURLString:(id)arg0 key:(id)arg1;
- (BOOL)boolValueForKey:(id)arg0;

@end
