//
//     Generated by private class-dump
//

@class NSString, NSHashTable;

@interface IESECShopEventService : IESECShopService <IESECShopEventService, IESECShopEventSubscriber> {
    NSHashTable *_subscribers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addEventSubscriber:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg0;

@end
