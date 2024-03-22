//
//     Generated by private class-dump
//

@class NSHashTable, Protocol;

@interface AWEProfileEventPublisher : NSProxy {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    Protocol *_event;
    NSHashTable *_subscribers;
}

@property (retain, nonatomic) Protocol *event;
@property (retain, nonatomic) NSHashTable *subscribers;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

- (void)handleUnknownSelector:(id)arg0;
- (void)setEvent:(id)arg0;
- (id)event;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg0;
- (id)initWithEvent:(id)arg0;
- (id)subscribers;
- (id)methodSignatureForSelector:(SEL)arg0;
- (struct os_unfair_lock_s { unsigned int x0; })lock;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x0; })arg0;
- (void)addSubscriber:(id)arg0;
- (void)removeSubscriber:(id)arg0;
- (void)setSubscribers:(id)arg0;

@end
