//
//     Generated by private class-dump
//

@class NSString;

@interface IESECECRouterInterceptHelper : NSObject <IESECRouterIntercept, AWERouterInterceptorDelegate> {
    id /* block */ _block;
}

@property (copy, nonatomic) id /* block */ block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntercept;
+ (void)registerRouterInterceptBlock:(id /* block */)arg0;

- (BOOL)interceptorActionBeforeTransferWithURLString:(id)arg0 userInfo:(id)arg1;
- (unsigned long long)interceptorActionWhenTransferingWithTransitionInfo:(id)arg0;
- (void).cxx_destruct;
- (void)setBlock:(id /* block */)arg0;
- (id /* block */)block;

@end
