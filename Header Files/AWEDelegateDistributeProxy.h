//
//     Generated by private class-dump
//

@class NSPointerArray;

@interface AWEDelegateDistributeProxy : NSProxy {
    NSPointerArray *_targets;
}

- (BOOL)conformsToProtocol:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg0;
- (BOOL)respondsToSelector:(SEL)arg0;
- (void)addTarget:(id)arg0;
- (id)methodSignatureForSelector:(SEL)arg0;
- (void)dealloc;
- (void)removeTarget:(id)arg0;

@end
