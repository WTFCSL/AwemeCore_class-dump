//
//     Generated by private class-dump
//

@class NSString;

@protocol BDPTrustIsolationUIService <BDPService>

@property (readonly, nonatomic) NSString *logoTemplate;

- (void)showTrustIsolationUIWithUniqueID:(id)arg0 appPage:(id)arg1 hideLogo:(BOOL)arg2 navigationBarToastAnimation:(id /* block */)arg3;
- (BOOL)canShowLogoAnimationWithUniqueID:(id)arg0;
- (void)showWarningTipFloatingWithUniqueID:(id)arg0 appPage:(id)arg1;
- (void)showCustomerServiceWithUniqueID:(id)arg0 appPage:(id)arg1 completion:(id /* block */)arg2;
- (void)updateInnerTrustConfigIfNeed:(id)arg0;
- (void)getStrategosConfigWithUniqueID:(id)arg0 completion:(id /* block */)arg1;
- (id)logoTemplate;

@end