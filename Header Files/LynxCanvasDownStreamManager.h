//
//     Generated by private class-dump
//

@interface LynxCanvasDownStreamManager : NSObject

+ (id)sharedInstance;

- (struct shared_ptr<lynx::canvas::CanvasApp> { struct CanvasApp *x0; struct __shared_weak_count *x1; })getCanvasApp:(id)arg0;
- (long long)addDownStreamListenerForView:(id)arg0 withId:(id)arg1 width:(long long)arg2 height:(long long)arg3 AndListener:(id)arg4;
- (void)removeDownStreamListenerForView:(id)arg0 withId:(id)arg1 AndListenerId:(long long)arg2;

@end