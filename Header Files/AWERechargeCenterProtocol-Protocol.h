//
//     Generated by private class-dump
//

@class NSDictionary;

@protocol AWERechargeCenterProtocol <NSObject>

@property (readonly, nonatomic) NSDictionary *productsDict;

- (void)startupService;
- (void)preFetchProducts:(id)arg0 completion:(id /* block */)arg1;
- (id)productsDict;
- (void)checkUnverifiedTransaction;
- (void)buyWithBizParams:(id)arg0 completion:(id /* block */)arg1;
- (void)addDelegate:(id)arg0 forBusiness:(id)arg1;
- (void)removeDelegateForBusiness:(id)arg0;

@end
