//
//     Generated by private class-dump
//

@class NSString;

@interface AWELiveHotNewsServiceImpl : NSObject <IESLiveHotNewsService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableLiveHotNews;
- (void)showHotNewsControllerWithParentController:(id)arg0 withTitle:(id)arg1 previousPage:(id)arg2 currentPage:(id)arg3 cellEnableClick:(BOOL)arg4 beforeJumpBlock:(id /* block */)arg5 dismissBlock:(id /* block */)arg6 completeBlock:(id /* block */)arg7;
- (void)showHotNewsControllerWithParentController:(id)arg0 withTitle:(id)arg1 previousPage:(id)arg2 currentPage:(id)arg3 cellEnableClick:(BOOL)arg4 beforeJumpBlock:(id /* block */)arg5 dismissBlock:(id /* block */)arg6 completeBlock:(id /* block */)arg7 extraDict:(id)arg8;

@end
