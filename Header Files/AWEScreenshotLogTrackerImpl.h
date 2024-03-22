//
//     Generated by private class-dump
//

@class NSRecursiveLock, NSArray, NSString, NSHashTable;

@interface AWEScreenshotLogTrackerImpl : NSObject <AWEScreenshotLogTracker> {
    BOOL _enable;
    NSHashTable *_providers;
    NSRecursiveLock *_lock;
    NSArray *_blackList;
}

@property (retain, nonatomic) NSHashTable *providers;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSArray *blackList;
@property (nonatomic) BOOL enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)screenshotTracker;

- (id)blackList;
- (void)setBlackList:(id)arg0;
- (void)_reigsterScreenshotObserver;
- (void)_writeAppInfo;
- (void)_writeProvidersInfo;
- (void)_userTakeScreenshotForFeedback;
- (void)addTrackerProvider:(id)arg0;
- (void)removeTrackerProvider:(id)arg0;
- (BOOL)enable;
- (void)setProviders:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)providers;
- (id)lock;
- (void)setEnable:(BOOL)arg0;
- (void)setLock:(id)arg0;

@end
