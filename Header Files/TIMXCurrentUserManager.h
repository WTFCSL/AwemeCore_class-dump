//
//     Generated by private class-dump
//

@class NSString, NSTimer, TIMXSDKInstance;

@interface TIMXCurrentUserManager : NSObject <TIMXCurrentUserCredentialProtocol, TIMXInstanceScopeSingleton> {
    BOOL _tokenInvalidNotified;
    int _configID;
    TIMXSDKInstance *_r;
    long long _currentAccountID;
    NSString *_currentAccountSecID;
    NSString *_token;
    double _currentAccountLoginTimestamp;
    NSTimer *_tokenRefreshTimer;
}

@property (nonatomic) long long currentAccountID;
@property (copy, nonatomic) NSString *currentAccountSecID;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) int configID;
@property double currentAccountLoginTimestamp;
@property BOOL tokenInvalidNotified;
@property (retain, nonatomic) NSTimer *tokenRefreshTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)currentAccountID;
- (void)loginWithToken:(id)arg0 accountID:(long long)arg1 accountSecID:(id)arg2;
- (void)loginWithToken:(id)arg0 accountID:(long long)arg1 accountSecID:(id)arg2 configID:(int)arg3;
- (double)currentAccountLoginTimestamp;
- (id)currentAccountSecID;
- (void)invalidateCurrentToken;
- (long long)getConversationCountAtUserLastLogout;
- (void)recordConversationCountAtUserLogout:(long long)arg0 forUser:(long long)arg1;
- (int)configID;
- (void)setConfigID:(int)arg0;
- (void)appEnterForeground:(id)arg0;
- (void)setCurrentAccountID:(long long)arg0;
- (void)setCurrentAccountSecID:(id)arg0;
- (void)setTokenInvalidNotified:(BOOL)arg0;
- (void)refreshTimerFired:(id)arg0;
- (void)setTokenRefreshTimer:(id)arg0;
- (id)tokenRefreshTimer;
- (BOOL)tokenInvalidNotified;
- (void)generateNewIdentityTokenCompletion:(id /* block */)arg0;
- (void)regenerateToken;
- (void)setCurrentAccountLoginTimestamp:(double)arg0;
- (void)__tryToStartDBBatchUpdateTaskWithUid:(id)arg0;
- (void).cxx_destruct;
- (void)setToken:(id)arg0;
- (void)logout;
- (id)token;
- (void)updateToken:(id)arg0;
- (void)dealloc;
- (id)initWithRootObject:(id)arg0;

@end
