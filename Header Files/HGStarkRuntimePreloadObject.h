//
//     Generated by private class-dump
//

@class HGStarkRuntime, NSString, NSRecursiveLock;

@interface HGStarkRuntimePreloadObject : NSObject <HGRuntimePreloadObjectProtocol> {
    BOOL _isPreloading;
    NSRecursiveLock *_lock;
    HGStarkRuntime *_runtime;
}

@property BOOL isPreloading;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) HGStarkRuntime *runtime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (id)getRuntime:(id)arg0;
+ (void)releaseRuntime;
+ (void)preloadRuntime:(id)arg0 completion:(id /* block */)arg1;
+ (id)sharedObject;

- (void)setIsPreloading:(BOOL)arg0;
- (id)getRuntime:(id)arg0;
- (void)releaseRuntime;
- (void)preloadRuntime:(id)arg0 completion:(id /* block */)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)lock;
- (void)setLock:(id)arg0;
- (id)runtime;
- (BOOL)isPreloading;
- (void)setRuntime:(id)arg0;

@end