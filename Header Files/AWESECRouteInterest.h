//
//     Generated by private class-dump
//

@class NSString;

@interface AWESECRouteInterest : NSObject <SECRouteEventSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleNativeRoute:(id)arg0;
- (void)handleWebTraceEvent:(id)arg0;
- (void)setup;
- (void)handleEvent:(id)arg0;
- (id)subscriberId;

@end
