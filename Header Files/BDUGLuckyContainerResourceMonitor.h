//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface BDUGLuckyContainerResourceMonitor : NSObject <BDXResourceLoaderMonitorInterceptor, IESForestInterceptor> {
    BOOL _enableLastProxyTag;
    BOOL _enableLastResourceTag;
    long long _maxLastResourceTag;
    NSMutableArray *_lastResources;
    long long _lastResourcesTagIndexOffset;
}

@property (nonatomic) BOOL enableLastProxyTag;
@property (nonatomic) BOOL enableLastResourceTag;
@property (nonatomic) long long maxLastResourceTag;
@property (retain, nonatomic) NSMutableArray *lastResources;
@property (nonatomic) long long lastResourcesTagIndexOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preStartup;
+ (void)feedReady;
+ (id)sharedInstance;

- (void)updateWithSettings:(id)arg0;
- (void)setMaxLastResourceTag:(long long)arg0;
- (void)setEnableLastResourceTag:(BOOL)arg0;
- (void)setEnableLastProxyTag:(BOOL)arg0;
- (BOOL)enableLastResourceTag;
- (BOOL)enableLastProxyTag;
- (void)__setTagForInjectedInfo:(id)arg0 value:(id)arg1 key:(id)arg2;
- (void)__removeAllTagsFromInjectedInfo:(id)arg0;
- (void)__onStartFetchWithURLString:(id)arg0;
- (id)lastResources;
- (long long)maxLastResourceTag;
- (long long)lastResourcesTagIndexOffset;
- (id)__reportKeyWithIndex:(long long)arg0;
- (void)setLastResourcesTagIndexOffset:(long long)arg0;
- (void)__removeAllResourceTagsFromInjectedInfo:(id)arg0 count:(long long)arg1;
- (id)monitorInterceptorName;
- (void)startFetchWith:(id)arg0 taskConfig:(id)arg1;
- (id)interceptorName;
- (void)willFetchWithURL:(id)arg0 parameters:(id)arg1;
- (void)updateProxyTagsWithExtraParams:(id)arg0;
- (void)resetReportTags;
- (void)setLastResources:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end