//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface HMDProtector : NSObject {
    NSLock *_protectionControlLock;
    NSMutableDictionary *_callbackData;
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _isCustomCatchValid;
    BOOL _ignoreDuplicate;
    long long _currentProtectionCollection;
    NSArray *_ignoreKVOObserverPrefix;
}

@property (retain) NSArray *ignoreKVOObserverPrefix;
@property (readonly, nonatomic) long long currentProtectionCollection;
@property (nonatomic) BOOL ignoreDuplicate;
@property (nonatomic) BOOL ignoreTryCatch;
@property (readonly, nonatomic) BOOL ignoreCloudSettings;
@property unsigned long long currentProcessCaptureLimit;

+ (id)sharedProtector;

- (BOOL)ignoreDuplicate;
- (void)setIgnoreDuplicate:(BOOL)arg0;
- (void)respondToNSExceptionPrevent:(id)arg0 info:(id)arg1;
- (void)respondToMachExceptionWithInfo:(id)arg0;
- (void)catchMethodsWithNames:(id)arg0;
- (long long)currentProtectionCollection;
- (BOOL)ignoreTryCatch;
- (void)setIgnoreTryCatch:(BOOL)arg0;
- (void)switchProtection:(long long)arg0;
- (void)turnProtectionOff:(long long)arg0;
- (void)enableNanoCrashProtect;
- (void)enableAssertProtect;
- (void)disableAssertProtect;
- (void)enableWeakRetainDeallocating;
- (void)disableWeakRetainDeallocating;
- (void)registerIdentifier:(id)arg0 withBlock:(id /* block */)arg1;
- (void)respondToCustomCatchException:(id)arg0 info:(id)arg1;
- (void)switchProtectionTo:(long long)arg0;
- (void)respondToCapture:(id)arg0;
- (id)ignoreKVOObserverPrefix;
- (void)setIgnoreKVOObserverPrefix:(id)arg0;
- (void)checkAndSwitchProtectorForType:(long long)arg0 collection:(long long)arg1;
- (id)protectionTypeForOptions:(long long)arg0;
- (void)switchProtectorForType:(long long)arg0 captureBlock:(id /* block */)arg1;
- (BOOL)shouldClose:(long long)arg0;
- (unsigned long long)currentProcessCaptureLimit;
- (void)setCurrentProcessCaptureLimit:(unsigned long long)arg0;
- (BOOL)ignoreCloudSettings;
- (void)setIgnoreCloudSettings;
- (void)turnProtectionsOn:(long long)arg0;
- (void)enableQosOverCommitProtect;
- (void)addIgnoreKVOObserverPrefix:(id)arg0;
- (void)removeRegistedBlockWithIdentifier:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
