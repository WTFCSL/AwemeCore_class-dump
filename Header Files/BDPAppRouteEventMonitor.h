//
//     Generated by private class-dump
//

@class NSString, BDPPromise, BDPUniqueID;

@interface BDPAppRouteEventMonitor : NSObject <BDPAppPageMonitorProtocol> {
    BOOL _didEventPluginResult;
    BOOL _didEventPluginStart;
    BDPUniqueID *_uniqueID;
    long long _state;
    NSString *_pagePath;
    double _pluginLoadStartTime;
    BDPPromise *_resultPromise;
    BDPPromise *_pageDomReadyPromise;
    BDPPromise *_serviceLoadPromise;
}

@property (nonatomic) long long state;
@property (nonatomic) BOOL didEventPluginResult;
@property (copy, nonatomic) NSString *pagePath;
@property (nonatomic) BOOL didEventPluginStart;
@property (nonatomic) double pluginLoadStartTime;
@property (retain, nonatomic) BDPPromise *resultPromise;
@property (retain, nonatomic) BDPPromise *pageDomReadyPromise;
@property (retain, nonatomic) BDPPromise *serviceLoadPromise;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPagePath:(id)arg0;
- (id)pagePath;
- (id)initWithUniqueID:(id)arg0 pagePath:(id)arg1;
- (void)appPageControllerDidDomReady:(id)arg0;
- (void)appPageControllerDidLoadStart:(id)arg0;
- (void)eventDynamicPluginLoadStart;
- (void)setupPromisesIfNeeded;
- (void)eventDynamicPluginPageVCDomReady:(id)arg0;
- (void)eventDynamicPluginServiceLoadException:(id)arg0;
- (BOOL)didEventPluginStart;
- (void)setDidEventPluginStart:(BOOL)arg0;
- (void)setPluginLoadStartTime:(double)arg0;
- (BOOL)didEventPluginResult;
- (void)realEventDynamicPluginLoadResultWithParams:(id)arg0;
- (void)setDidEventPluginResult:(BOOL)arg0;
- (long long)errorCodeFromError:(id)arg0;
- (double)pluginLoadStartTime;
- (id)pageDomReadyPromise;
- (id)serviceLoadPromise;
- (id)eventParamsFromPromiseValues:(id)arg0;
- (void)beginLoadPageVC:(id)arg0;
- (void)endLoadPageVC:(id)arg0;
- (void)beginRoute;
- (void)beginLoadService;
- (void)endLoadServiceWithException:(id)arg0;
- (void)endRouteWithError:(id)arg0;
- (void)eventDynamicPluginLoadResultWithParams:(id)arg0;
- (void)setPageDomReadyPromise:(id)arg0;
- (void)setServiceLoadPromise:(id)arg0;
- (BOOL)isRunning;
- (void).cxx_destruct;
- (id)uniqueID;
- (long long)state;
- (void)setUniqueID:(id)arg0;
- (void)setState:(long long)arg0;
- (id)resultPromise;
- (void)dealloc;
- (void)setResultPromise:(id)arg0;

@end
