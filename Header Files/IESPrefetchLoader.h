//
//     Generated by private class-dump
//

@class NSString, IESPrefetchCacheProvider, NSMutableDictionary, NSHashTable, NSMutableArray;
@protocol IESPrefetchCapability, IESPrefetchCacheStorageProtocol;

@interface IESPrefetchLoader : NSObject <IESPrefetchLoaderPrivateProtocol> {
    BOOL _enabled;
    BOOL _prefetchIgnoreCache;
    NSString *_business;
    id<IESPrefetchCapability> _capability;
    IESPrefetchCacheProvider *_cacheManager;
    id<IESPrefetchCacheStorageProtocol> _defaultStorage;
    NSMutableArray *_schemaResolvers;
    NSMutableDictionary *_runningRequests;
    NSMutableDictionary *_templates;
    NSHashTable *_delegates;
}

@property (nonatomic) BOOL prefetchIgnoreCache;
@property (copy, nonatomic) NSString *business;
@property (retain, nonatomic) id<IESPrefetchCapability> capability;
@property (retain, nonatomic) IESPrefetchCacheProvider *cacheManager;
@property (retain, nonatomic) id<IESPrefetchCacheStorageProtocol> defaultStorage;
@property (retain, nonatomic) NSMutableArray *schemaResolvers;
@property (retain, nonatomic) NSMutableDictionary *runningRequests;
@property (retain, nonatomic) NSMutableDictionary *templates;
@property (retain, nonatomic) NSHashTable *delegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPrefetchIgnoreCache:(BOOL)arg0;
- (void)addEventDelegate:(id)arg0;
- (void)requestDataWithModel:(id)arg0 completion:(id /* block */)arg1;
- (id)resolveSchema:(id)arg0;
- (id)p_convertConfigFromJSON:(id)arg0 withEvent:(id)arg1;
- (void)eventDidFinishLoadConfig:(id)arg0;
- (void)removeAllConfigurations;
- (id)loadConfigurationDict:(id)arg0 withEvent:(id)arg1;
- (void)p_monitorService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
- (void)eventDidFinishFetchData:(id)arg0;
- (id)initWithCapability:(id)arg0 business:(id)arg1;
- (id)schemaResolvers;
- (void)registerSchemaResolver:(id)arg0;
- (void)setSchemaResolvers:(id)arg0;
- (void)prefetchForSchema:(id)arg0 withVariable:(id)arg1;
- (void)eventDidFinishPrefetch:(id)arg0;
- (void)prefetchAPI:(id)arg0;
- (void)loaderWithLogInfoMessage:(id)arg0;
- (id)runningRequests;
- (void)eventDidFinishPrefetchAPI:(id)arg0;
- (void)startNetworkRequest:(id)arg0 completion:(id /* block */)arg1;
- (void)loadConfigurationJSON:(id)arg0;
- (void)loadConfigurationJSON:(id)arg0 cleanExpiredDataAsync:(BOOL)arg1;
- (void)loadAllConfigurations:(id)arg0;
- (void)setRunningRequests:(id)arg0;
- (void)setDefaultStorage:(id)arg0;
- (id)currentCachedDatasByUrl:(id)arg0;
- (void)cleanExpiredDataIfNeed;
- (id)allProjects;
- (id)templateForProject:(id)arg0;
- (id)prefetchForSchema:(id)arg0 occasion:(id)arg1 withVariables:(id)arg2 event:(id)arg3;
- (id)currentCachedDatasBySchema:(id)arg0 occasion:(id)arg1;
- (BOOL)prefetchIgnoreCache;
- (id)fetchCacheForKey:(id)arg0;
- (void)saveCacheData:(id)arg0 expires:(long long)arg1 for:(id)arg2;
- (void)prefetchForOccasion:(id)arg0 withVariable:(id)arg1;
- (id)currentCachedDatasByOccasion:(id)arg0;
- (id)currentCachedDataAndRequestsByUrl:(id)arg0;
- (id)currentCachedDataAndRequestsByOccasion:(id)arg0;
- (id)delegates;
- (void)setDelegates:(id)arg0;
- (BOOL)enabled;
- (void).cxx_destruct;
- (id)templates;
- (void)setEnabled:(BOOL)arg0;
- (void)setTemplates:(id)arg0;
- (id)cacheProvider;
- (void)removeConfiguration:(id)arg0;
- (id)business;
- (void)setBusiness:(id)arg0;
- (id)capability;
- (void)setCapability:(id)arg0;
- (id)cacheManager;
- (void)setCacheManager:(id)arg0;
- (id)defaultStorage;

@end