//
//     Generated by private class-dump
//

@class NSString;

@interface IESECClientAIService : NSObject <IESECClientAIServiceInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getSingleDictFeatureAsyncWithFeatureName:(id)arg0 businessName:(id)arg1 extraParams:(id)arg2 completionBlock:(id /* block */)arg3;
+ (BOOL)isEcomServiceReady;
+ (BOOL)isPitayaServiceReady;
+ (void)registerFeatureUpdateCallbackWithFeatureName:(id)arg0 businessName:(id)arg1 callback:(id /* block */)arg2;
+ (void)unregisterFeatureUpdateCallbackWithFeatureName:(id)arg0 businessName:(id)arg1 callback:(id /* block */)arg2;
+ (id)getSingleNumericFeatureSyncWithFeatureName:(id)arg0 businessName:(id)arg1 extraParams:(id)arg2;
+ (id)getSingleStringFeatureSyncWithFeatureName:(id)arg0 businessName:(id)arg1 extraParams:(id)arg2;
+ (id)getSingleDictFeatureSyncWithFeatureName:(id)arg0 businessName:(id)arg1 extraParams:(id)arg2;
+ (id)getSingleSeqFeatureSyncWithFeatureName:(id)arg0 businessName:(id)arg1 extraParams:(id)arg2;
+ (id)batchGetSimpleFeatureSyncWithRequestArray:(id)arg0;
+ (void)getSingleNumericFeatureAsyncWithFeatureName:(id)arg0 businessName:(id)arg1 extraParams:(id)arg2 completionBlock:(id /* block */)arg3;
+ (void)getSingleStringFeatureAsyncWithFeatureName:(id)arg0 businessName:(id)arg1 extraParams:(id)arg2 completionBlock:(id /* block */)arg3;
+ (void)getSingleSeqFeatureAsyncWithFeatureName:(id)arg0 businessName:(id)arg1 extraParams:(id)arg2 completionBlock:(id /* block */)arg3;
+ (void)batchGetSimpleFeatureAsyncWithRequestArray:(id)arg0 completionBlock:(id /* block */)arg1;
+ (void)updateCustomFeatureWithFeatureName:(id)arg0 groupName:(id)arg1 floatValue:(float)arg2;
+ (void)updateCustomFeatureWithFeatureName:(id)arg0 groupName:(id)arg1 stringValue:(id)arg2;
+ (void)updateCustomFeatureWithFeatureName:(id)arg0 groupName:(id)arg1 dictValue:(id)arg2;
+ (BOOL)updateCustomSimpleFeatureWithFeatureName:(id)arg0 businessName:(id)arg1 floatValue:(float)arg2 dump:(BOOL)arg3;
+ (BOOL)updateCustomSimpleFeatureWithFeatureName:(id)arg0 businessName:(id)arg1 stringValue:(id)arg2 dump:(BOOL)arg3;
+ (BOOL)updateCustomSimpleFeatureWithFeatureName:(id)arg0 businessName:(id)arg1 seqValue:(id)arg2 dump:(BOOL)arg3;
+ (BOOL)updateCustomSimpleFeatureWithFeatureName:(id)arg0 businessName:(id)arg1 dictValue:(id)arg2 dump:(BOOL)arg3;
+ (void)mockAppLogEventWithEventName:(id)arg0 params:(id)arg1;
+ (id)sharedInstance;

- (void)initFeature;
- (id)batchGetFeatureInternalWithQueryArray:(id)arg0;
- (BOOL)storeValueInternalWithFeatureName:(id)arg0 businessName:(id)arg1 value:(id)arg2 dump:(BOOL)arg3;
- (void)initInternal;
- (void)dealloc;

@end
