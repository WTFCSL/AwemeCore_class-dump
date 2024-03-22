//
//     Generated by private class-dump
//

@class NSMutableSet;

@interface HMDURLCacheManager : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _managedPathRWLock;
    BOOL _isRunning;
    NSMutableSet *_customCachePath;
}

@property (retain, nonatomic) NSMutableSet *customCachePath;
@property (nonatomic) BOOL isRunning;

+ (id)sharedInstance;

- (id)customCachePath;
- (void)registerCustomCachePath:(id)arg0;
- (void)unregisterCustomCachePath:(id)arg0;
- (BOOL)checkAvailabaleCustomCachePath:(id)arg0 urlCacheInstance:(id)arg1;
- (BOOL)managerIsRunning;
- (void)setCustomCachePath:(id)arg0;
- (void)setIsRunning:(BOOL)arg0;
- (BOOL)isRunning;
- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (void)start;

@end