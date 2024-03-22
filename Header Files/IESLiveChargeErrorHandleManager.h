//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveChargeErrorHandleManager : NSObject <IESLiveChargeErrorHandleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)chargeFaildWithError:(id)arg0 trackerInfo:(id)arg1;
- (void)chargeFaildWithError:(id)arg0 source:(id)arg1 chargeModel:(id)arg2 trackerInfo:(id)arg3;
- (void)pr_handleChareErrorLocal:(id)arg0 model:(id)arg1 trackerInfo:(id)arg2;
- (BOOL)pr_needCustomHandleChargeError:(id)arg0;
- (BOOL)pr_needCustomHandleOptimizeError:(id)arg0;
- (void)pr_handleChargeError:(id)arg0 trackerInfo:(id)arg1;
- (void)pr_exchangeAntiSpam;
- (id)pr_modifyScheme:(id)arg0 queryParams:(id)arg1;
- (id)p_schemeQueryInfo:(id)arg0;

@end