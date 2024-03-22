//
//     Generated by private class-dump
//

@class NSString, TIMXSDKInstance;

@interface TIMXOClient : NSObject <TIMXTokenUpdater, TIMXStartUpTaskProtocol, TIMXInstanceScopeSingleton> {
    BOOL _isInited;
    NSString *_storeCipherKey;
    TIMXSDKInstance *_r;
}

@property (readonly, nonatomic) BOOL isInited;
@property (readonly, nonatomic) long long currentUserID;
@property (copy, nonatomic) NSString *storeCipherKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startWithConfig:(id)arg0;
+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)arg0;
+ (id)gitHash;
+ (id)buildNumber;
+ (id)version;

- (BOOL)isInited;
- (void)logoutWithCompletion:(id /* block */)arg0;
- (void)loginWithUserID:(long long)arg0 secUserID:(id)arg1 token:(id)arg2 completion:(id /* block */)arg3;
- (id)storeCipherKey;
- (void)p_handleTokenInvalidNotification:(id)arg0;
- (void)updateToken:(id)arg0 forUser:(long long)arg1 withCompletion:(id /* block */)arg2;
- (void)loginWithUserID:(long long)arg0 secUserID:(id)arg1 completion:(id /* block */)arg2;
- (void)setStoreCipherKey:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)arg0;
- (long long)currentUserID;

@end