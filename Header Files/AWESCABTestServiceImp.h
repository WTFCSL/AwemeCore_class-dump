//
//     Generated by private class-dump
//

@class NSString;

@interface AWESCABTestServiceImp : NSObject <BDSCABTestService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (void)registerEnableOnlySupportXsgClientABTest;
+ (void)registerEnableScreenCastClarityLimitABTest;
+ (void)registerNewEnableOnlySupportXsgClientABTest;
+ (void)registerLocalNetworkAlertStyle;
+ (void)registerScreenCastConnectError;
+ (void)registerUseNewFeedback;
+ (void)registerRequestRedirectURL;

- (id)abValueForKey:(id)arg0;
- (id)clientABvalueForKey:(id)arg0 exposure:(BOOL)arg1;

@end
