//
//     Generated by private class-dump
//

@class NSRecursiveLock, NSMutableDictionary, HGPermissionScopeAuthorizerAlertVCLogic, HGPermissionScopeRecorder, HGUniqueID;

@interface HGPermissionScopeAuthorizer : NSObject {
    BOOL _thisAppIDAtList;
    HGUniqueID *_uniqueID;
    HGPermissionScopeAuthorizerAlertVCLogic *_alertVCLogic;
    NSMutableDictionary *_scopeQueue;
    NSRecursiveLock *_lock;
    HGPermissionScopeRecorder *_recorder;
    NSMutableDictionary *_scopeFrequency;
}

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) HGUniqueID *uniqueID;
@property (nonatomic) BOOL thisAppIDAtList;
@property (retain, nonatomic) HGPermissionScopeRecorder *recorder;
@property (retain, nonatomic) HGPermissionScopeAuthorizerAlertVCLogic *alertVCLogic;
@property (retain, nonatomic) NSMutableDictionary *scopeQueue;
@property (retain, nonatomic) NSMutableDictionary *scopeFrequency;

- (void)acquirePermissionForScope:(id)arg0 completion:(id /* block */)arg1;
- (id)initWithUniqueID:(id)arg0 recorder:(id)arg1;
- (void)acquirePermissionForScopes:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)isAuthFreeScope:(id)arg0;
- (void)setAlertVCLogic:(id)arg0;
- (id)alertVCLogic;
- (void)setScopeQueue:(id)arg0;
- (void)setScopeFrequency:(id)arg0;
- (void)setThisAppIDAtList:(BOOL)arg0;
- (id)fixCompatibleScope:(id)arg0;
- (id)scopeFrequency;
- (BOOL)thisAppIDAtList;
- (BOOL)scopeQueueIsWaiting:(id)arg0;
- (void)scopeQueueAddCompletion:(id /* block */)arg0 scope:(id)arg1;
- (void)scopeQueueStartWaiting:(id)arg0;
- (void)scopeQueueExcuteAllCompletion:(id)arg0 scope:(id)arg1;
- (void)eventAuthResultForScope:(id)arg0 error:(id)arg1 uniqueID:(id)arg2;
- (id)scopeQueue;
- (void)scopeQueueCreateIfNeeded:(id)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (id)recorder;
- (id)lock;
- (void)setRecorder:(id)arg0;
- (void)setLock:(id)arg0;

@end
