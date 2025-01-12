//
//     Generated by private class-dump
//

@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWESECRouteLogSubscriber : NSObject <SECRouteEventSubscriber> {
    NSObject<OS_dispatch_queue> *_logQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleTrafficEvent:(id)arg0;
- (void)_handleWebSafetyEvent:(id)arg0;
- (void)_handleInternalFinishTrafficEvent:(id)arg0;
- (id)trafficContentWithTrace:(id)arg0;
- (id)resultContentWithEvent:(id)arg0;
- (id)metricsContentWithResult:(id)arg0;
- (id)interruptDescription:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)handleEvent:(id)arg0;
- (id)subscriberId;

@end
