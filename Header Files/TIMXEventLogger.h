//
//     Generated by private class-dump
//

@class TIMXThreadSafeMutableDictionary, NSString, TIMXSDKInstance;
@protocol TIMXAppIMLogProtocol, TIMXNewAppLogManagerProtocol, TIMXMonitorService;

@interface TIMXEventLogger : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
    TIMXThreadSafeMutableDictionary *_timedEvents;
    id<TIMXMonitorService> _monitor;
    id<TIMXAppIMLogProtocol> _logger;
    id<TIMXNewAppLogManagerProtocol> _applogManager;
}

@property (retain, nonatomic) TIMXThreadSafeMutableDictionary *timedEvents;
@property (readonly, nonatomic) id<TIMXMonitorService> monitor;
@property (readonly, nonatomic) id<TIMXAppIMLogProtocol> logger;
@property (readonly, nonatomic) id<TIMXNewAppLogManagerProtocol> applogManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logService:(id)arg0 name:(id)arg1 data:(id)arg2;
- (id)startTimedEventWithStartInfo:(id)arg0;
- (void)endTimedEventForStartMarker:(id)arg0 withService:(id)arg1 name:(id)arg2 dataConfigBlock:(id /* block */)arg3;
- (void)endTimedEventForStartMarker:(id)arg0 withService:(id)arg1 name:(id)arg2 data:(id)arg3;
- (void)startTimedEventWithMarker:(id)arg0 startInfo:(id)arg1;
- (void)setTimedEvents:(id)arg0;
- (id)timedEvents;
- (id)applogManager;
- (id)logger;
- (void).cxx_destruct;
- (id)monitor;
- (id)initWithRootObject:(id)arg0;

@end