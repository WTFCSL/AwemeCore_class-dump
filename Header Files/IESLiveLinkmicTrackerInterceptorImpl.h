//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface IESLiveLinkmicTrackerInterceptorImpl : NSObject <IESLiveLinkmicTrackerInterceptor, IESLiveTrackerDelegate> {
    NSMutableDictionary *_eventsMapper;
}

@property (retain, nonatomic) NSMutableDictionary *eventsMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)willCommitTrackEvent:(id)arg0 params:(id)arg1;
- (void)injectEvent:(id)arg0 params:(id)arg1;
- (void)injectEventParams:(id)arg0;
- (void)removeInjectEvent:(id)arg0;
- (void)removeInjectEvents:(id)arg0;
- (void)setEventsMapper:(id)arg0;
- (id)eventsMapper;
- (void).cxx_destruct;

@end
