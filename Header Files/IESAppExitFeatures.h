//
//     Generated by private class-dump
//

@class IESAppExitFeatureInfo;

@interface IESAppExitFeatures : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    BOOL _hasEnterBackground;
    IESAppExitFeatureInfo *_currentExitInfo;
    long long _appLaunchTime;
    long long _lastRestartTime;
    long long _lastEnterBackgroundTime;
}

@property (retain, nonatomic) IESAppExitFeatureInfo *currentExitInfo;
@property (nonatomic) long long appLaunchTime;
@property (nonatomic) long long lastRestartTime;
@property (nonatomic) long long lastEnterBackgroundTime;
@property (nonatomic) BOOL hasEnterBackground;

- (BOOL)hasEnterBackground;
- (void)trackEvent:(unsigned long long)arg0 withParams:(id)arg1;
- (void)setHasEnterBackground:(BOOL)arg0;
- (void)doLock;
- (void)doUnlock;
- (void)setAppLaunchTime:(long long)arg0;
- (BOOL)fillFeatures:(id)arg0 withConfig:(id)arg1 inputData:(id)arg2;
- (id)currentExitInfo;
- (BOOL)config:(id)arg0 containSubType:(id)arg1;
- (void)setCurrentExitInfo:(id)arg0;
- (long long)lastRestartTime;
- (void)setLastRestartTime:(long long)arg0;
- (long long)lastEnterBackgroundTime;
- (void)setLastEnterBackgroundTime:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)appLaunchTime;

@end