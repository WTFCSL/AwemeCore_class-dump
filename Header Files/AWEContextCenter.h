//
//     Generated by private class-dump
//

@interface AWEContextCenter : AWEContextStore

@property (class, readonly) AWEContextCenter *defaultCenter;

+ (id)defaultCenter;

- (void)postForKey:(id)arg0;
- (void)removeKey:(id)arg0 handler:(id /* block */)arg1;
- (void)addKey:(id)arg0 withDealloc:(id)arg1 handler:(id /* block */)arg2;
- (void)removeHandlersForKey:(id)arg0 withDealloc:(id)arg1;
- (void)removeHandlersWithDealloc:(id)arg0;

@end
