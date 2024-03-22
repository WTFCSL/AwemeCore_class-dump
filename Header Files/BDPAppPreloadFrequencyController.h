//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSRecursiveLock;

@interface BDPAppPreloadFrequencyController : NSObject {
    NSMutableDictionary *_controlDic;
    NSRecursiveLock *_lock;
}

@property (retain, nonatomic) NSMutableDictionary *controlDic;
@property (retain, nonatomic) NSRecursiveLock *lock;

+ (id)sharedContrller;

- (BOOL)canPreloadWithPreloadInfo:(id)arg0;
- (long long)getShortTimeLimitWithPreloadInfo:(id)arg0;
- (id)controlDic;
- (long long)getLongTimeLimitWithPreloadInfo:(id)arg0;
- (BOOL)haveOpenedWithAppid:(id)arg0;
- (BOOL)havePkgCacheWithAppid:(id)arg0 pagePath:(id)arg1;
- (BOOL)enablePreloadForWeakNetABTest:(id)arg0 preloadTime:(id)arg1;
- (BOOL)haveValidPkgCacheWithAppid:(id)arg0 schema:(id)arg1;
- (void)startPreloadFrequencyControlWithAppids:(id)arg0;
- (void)setControlDic:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)lock;
- (void)setLock:(id)arg0;

@end
