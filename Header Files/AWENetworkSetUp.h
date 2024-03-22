//
//     Generated by private class-dump
//

@class NSString;

@interface AWENetworkSetUp : HTSService <AWENetworkSetupService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)current_x_tt_token;
+ (void)setupNetWork;
+ (void)syncPassportUID:(id)arg0;
+ (void)resetTTNetworkThreadPriorityIfNeeded;
+ (Class)aAWENetworkSetupDOUYINHMAdapterClass;
+ (void)setupNetworkRequestFilter;
+ (void)setupNetworkResponseFilter;
+ (id)opaqueDataArray;
+ (void)setupCommonPushManager;
+ (void)setupTTNetworkDownloader;
+ (void)setupTTNetPrivacyLevel;
+ (void)beforeNetworkStart;
+ (Class)aAWENetworkFilterDOUYINLiteAdapterClass;
+ (void)trafficConsumeWithRequest:(id)arg0 response:(id)arg1 body:(id)arg2;

- (id)aAWENetworkFilterDOUYINLiteAdapter;
- (id)aAWENetworkSetupDOUYINHMAdapter;

@end