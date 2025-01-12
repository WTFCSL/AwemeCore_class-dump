//
//     Generated by private class-dump
//

@class NSString, AWENetworkQuailityManager;

@interface AWENetworkCommonParamUtilites : NSObject <AWENetworkBusinessService> {
    AWENetworkQuailityManager *_manager;
}

@property (retain, nonatomic) AWENetworkQuailityManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchCurrentNetworkStatus;
+ (id)commonParameters;
+ (id)willBeginHTTPRequestNotificationName;
+ (id)didCompleteHTTPRequestNotificationName;
+ (id)HTTPRequestNotificationKey;
+ (id)commonParamsWithURLString:(id)arg0;
+ (id)commonParamsWithoutL0;
+ (id)buildCommonParams;
+ (id)_commonParametersUsingSemaphore;
+ (id)_commonParametersWithoutL0UsingSemaphore;
+ (id)p_commonParamsWithURLString:(id)arg0;
+ (id)commonParamsLock;
+ (id)buildCommonParamsWithoutL0;
+ (id)liteCommonParams;
+ (id)debugCommonParams;
+ (id)p_urlComponentDictWithString:(id)arg0;
+ (Class)aAWENetworkCommonParamUtilitesDOUYINLiteAdapterClass;

- (id)aAWENetworkCommonParamUtilitesDOUYINLiteAdapter;
- (void).cxx_destruct;
- (void)setManager:(id)arg0;
- (id)manager;

@end
