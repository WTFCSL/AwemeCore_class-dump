//
//     Generated by private class-dump
//

@class NSString;

@interface AWESECHybridDataMapBridgeSubscriber : NSObject <SECHybridEventSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)__shouldHandlePiperEvent:(id)arg0;
- (void)handleEvent:(id)arg0;
- (void)_handleEvent:(id)arg0;
- (id)subscriberId;

@end
