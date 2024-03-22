//
//     Generated by private class-dump
//

@class BSTSetupConfig, BSTChecker, NSHashTable, BSTABRulesConfig, BSTABRulesConfigV2;

@interface BSTInnerManager : NSObject {
    BSTSetupConfig *_setupConfig;
    BSTChecker *_checker;
    NSHashTable *_pages;
    BSTABRulesConfig *_abConfig;
    BSTABRulesConfigV2 *_abConfigV2;
    struct __CFRunLoopObserver { } *_runLoopObserver;
    double _lastRunloopEnterTimeStamp;
    double _samplingFrequency;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _managerLock;
}

@property (class, readonly, nonatomic) BSTInnerManager *shared;

@property (retain) NSHashTable *pages;
@property (retain, nonatomic) BSTABRulesConfig *abConfig;
@property (retain, nonatomic) BSTABRulesConfigV2 *abConfigV2;
@property (nonatomic) struct __CFRunLoopObserver { } *runLoopObserver;
@property (nonatomic) double lastRunloopEnterTimeStamp;
@property (nonatomic) double samplingFrequency;
@property (retain, nonatomic) BSTSetupConfig *setupConfig;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } managerLock;
@property (retain, nonatomic) BSTChecker *checker;

+ (void)setupWithConfig:(id)arg0;
+ (void)asyncPerformOnSerialThreadAction:(id /* block */)arg0;
+ (void)asyncPerformOnConcurrentThreadAction:(id /* block */)arg0;
+ (id)shared;

- (void)trackEvent:(id)arg0 params:(id)arg1;
- (void)bindView:(id)arg0 withContext:(id)arg1;
- (void)sendEventType:(id)arg0 withView:(id)arg1 context:(id)arg2;
- (void)forbiddenBubbleForView:(id)arg0;
- (void)registerExposureHandler:(id /* block */)arg0 forView:(id)arg1;
- (void)registerClickHandler:(id /* block */)arg0 forView:(id)arg1;
- (id)bstInjectLynxWithUniqueKey:(id)arg0;
- (void)clearViewStatusCacheOfResponder:(id)arg0;
- (void)addBstABConfig:(id)arg0;
- (void)autoShowTrackWithContext:(id)arg0;
- (void)clickTrackWithContext:(id)arg0;
- (double)lastRunloopEnterTimeStamp;
- (void)sendShowEventOfView:(id)arg0 trackModel:(id)arg1 rule:(id)arg2;
- (void)reportShowWithViewModel:(id)arg0 rule:(id)arg1 reporter:(id /* block */)arg2;
- (void)setLastRunloopEnterTimeStamp:(double)arg0;
- (id)trackRuleWithBiz:(id)arg0 modelName:(id)arg1;
- (id)uniqueKeyOfUniqueObject:(id)arg0;
- (id)trackRuleWithRuleKey:(id)arg0;
- (id)abConfig;
- (id)abConfigV2;
- (void)setSetupConfig:(id)arg0;
- (void)registerMainRunloopObserver;
- (void)setAbConfig:(id)arg0;
- (void)setAbConfigV2:(id)arg0;
- (void)initManagerLock;
- (void)setChecker:(id)arg0;
- (void)stopRunLoopObserver;
- (BOOL)isFirstSendingExposureOfUniqueKey:(id)arg0 responder:(id)arg1;
- (struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })managerLock;
- (void)setManagerLock:(struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })arg0;
- (void)setSamplingFrequency:(double)arg0;
- (void)creatinitialBSTModelOfView:(id)arg0;
- (void)initialBSTModelOfView:(id)arg0;
- (void)sendClickEventOfView:(id)arg0;
- (void).cxx_destruct;
- (struct __CFRunLoopObserver { } *)runLoopObserver;
- (void)setPages:(id)arg0;
- (id)pages;
- (double)samplingFrequency;
- (void)setRunLoopObserver:(struct __CFRunLoopObserver { } *)arg0;
- (id)setupConfig;
- (id)checker;

@end
