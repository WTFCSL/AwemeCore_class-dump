//
//     Generated by private class-dump
//

@class IESForestKit;

@interface PuzzleGeckoResourceLoader : NSObject

@property (class, readonly, nonatomic) IESForestKit *forestKit;

+ (id)forestSessonIdWithContext:(id)arg0;
+ (BOOL)isInList:(id)arg0 urlList:(id)arg1;
+ (void)openForestSessionWithUrl:(id)arg0 kernalType:(unsigned long long)arg1 context:(id)arg2 params:(id)arg3;
+ (void)preload:(id)arg0 kernalType:(unsigned long long)arg1 params:(id)arg2 context:(id)arg3;
+ (id)forestKit;
+ (BOOL)isCDNMultiVersionResource:(id)arg0;
+ (id)addCommonParamsForCDNMultiVersionURLString:(id)arg0;
+ (void)addDefaultCDNMultiVersionDomains:(id)arg0;
+ (BOOL)enableUseForestResourceLoaderForLatch:(id)arg0 kernalType:(unsigned long long)arg1 params:(id)arg2;
+ (id)geckoResourceForURLString:(id)arg0 context:(id)arg1;
+ (BOOL)enablePreloadBySettings;
+ (id)processedUrl:(id)arg0;
+ (id)geckoResourcePathForURLString:(id)arg0 context:(id)arg1;
+ (id)preloadErrorMsgWithCode:(long long)arg0;
+ (BOOL)enableUseForestResourceLoader:(id)arg0 kernalType:(unsigned long long)arg1 params:(id)arg2;
+ (id)prefetchResModeConfig:(id)arg0;
+ (void)updateForestPreloadMemCacheSize;
+ (long long)enableUseForestResourceLoaderAndPreload:(id)arg0 kernalType:(unsigned long long)arg1 params:(id)arg2;
+ (void)_preloadLynx:(id)arg0 kernalType:(unsigned long long)arg1 params:(id)arg2 context:(id)arg3 preloadSchemePara:(long long)arg4 anniePretchResModeConfig:(id)arg5 monitorBlock:(id /* block */)arg6;
+ (void)_preloadWeb:(id)arg0 kernalType:(unsigned long long)arg1 params:(id)arg2 context:(id)arg3 preloadSchemePara:(long long)arg4 monitorBlock:(id /* block */)arg5;
+ (id)getPreloadJsonUrl:(id)arg0 channel:(id)arg1;
+ (BOOL)enableForestSession:(id)arg0 kernalType:(unsigned long long)arg1 params:(id)arg2;
+ (id)generateSessionIdWithContext:(id)arg0 params:(id)arg1;
+ (void)closeSessionWithContext:(id)arg0;
+ (BOOL)_enableUseForestResourceLoader:(id)arg0 kernalType:(unsigned long long)arg1;
+ (long long)webForestMode:(id)arg0 params:(id)arg1;
+ (void)initialize;
+ (id)defaultConfig;

- (id)fetchResourceWithURL:(id)arg0 requestParam:(id)arg1 completion:(id /* block */)arg2;
- (id)fetchResourceWithURL:(id)arg0 completion:(id /* block */)arg1;

@end