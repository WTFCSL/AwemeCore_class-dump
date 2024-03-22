//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_dispatch_queue, ECOMTIMMessageStoreProtocol, ECOMTIMOIMClientObserverDelegate;

@interface ECOMTIMOIMClient : NSObject {
    BOOL _appWillTerminate;
    id<ECOMTIMOIMClientObserverDelegate> _delegate;
    id<ECOMTIMMessageStoreProtocol> _db;
    NSObject<OS_dispatch_queue> *_queryExecQueue;
}

@property (retain, nonatomic) id<ECOMTIMMessageStoreProtocol> db;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queryExecQueue;
@property BOOL appWillTerminate;
@property (weak, nonatomic) id<ECOMTIMOIMClientObserverDelegate> delegate;
@property (readonly, nonatomic) long long currentUserID;

+ (id)queryExecQueue;
+ (void)setUpWithOptions:(id)arg0;
+ (id)sharedInstance;
+ (id)version;

- (BOOL)appWillTerminate;
- (void)renewIdentityToken:(id)arg0 completion:(id /* block */)arg1;
- (void)handleAppWillTerminateNotification:(id)arg0;
- (void)setAppWillTerminate:(BOOL)arg0;
- (void)setQueryExecQueue:(id)arg0;
- (void)tokenInvalidNotification:(id)arg0;
- (void)onAuthErrorNotification:(id)arg0;
- (void)authenticateWithUserID:(long long)arg0 secUserID:(id)arg1 identityToken:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (id)queryExecQueue;
- (void)authenticateWithUserID:(long long)arg0 identityToken:(id)arg1 completion:(id /* block */)arg2;
- (void)authenticateWithUserID:(long long)arg0 identityToken:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)authenticateWithUserID:(long long)arg0 secUserID:(id)arg1 identityToken:(id)arg2 completion:(id /* block */)arg3;
- (void)deauthenticateWithCompletion:(id /* block */)arg0;
- (void)removeAllDataForUser:(long long)arg0 completion:(id /* block */)arg1;
- (void)setDb:(id)arg0;
- (id)init;
- (id)db;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (long long)currentUserID;

@end