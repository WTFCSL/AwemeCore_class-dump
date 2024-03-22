//
//     Generated by private class-dump
//

@class AWEUserAppealManager, NSString, NSMutableArray, AWEUserContext;

@interface AWEUserContextManager : NSObject <AWEDigitalWellbeingMessage, TTTAttributedLabelDelegate, AWEUserContextManagerProtocol> {
    BOOL _inLoginProcedure;
    BOOL _inLogoutProcedure;
    BOOL _hasBindProcedure;
    unsigned long long _loginPlatform;
    NSString *_showError;
    NSString *_currentUserId;
    AWEUserContext *_context;
    id /* block */ _completion;
    unsigned long long _platform;
    AWEUserAppealManager *_userAppealManager;
    NSMutableArray *_completionBlocks;
    NSMutableArray *_resultCompletionBlocks;
}

@property (copy, nonatomic) NSString *showError;
@property (copy, nonatomic) NSString *currentUserId;
@property (retain, nonatomic) AWEUserContext *context;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) unsigned long long platform;
@property (retain, nonatomic) AWEUserAppealManager *userAppealManager;
@property (retain, nonatomic) NSMutableArray *completionBlocks;
@property (retain, nonatomic) NSMutableArray *resultCompletionBlocks;
@property (nonatomic) BOOL inLoginProcedure;
@property (nonatomic) BOOL inLogoutProcedure;
@property (nonatomic) unsigned long long loginPlatform;
@property (nonatomic) BOOL hasBindProcedure;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPassportServiceHTSAdapterClass;
+ (id)sharedInstance;

- (void)attributedLabel:(id)arg0 didSelectLinkWithURL:(id)arg1;
- (BOOL)inLoginProcedure;
- (BOOL)inLogoutProcedure;
- (id)currentUserId;
- (unsigned long long)loginPlatform;
- (void)setLoginPlatform:(unsigned long long)arg0;
- (void)teenModeDidChange:(BOOL)arg0 isLogout:(BOOL)arg1;
- (void)finishUserContextWithDefaultErrorIfNeeded;
- (void)setCurrentUserId:(id)arg0;
- (void)logoutSuccess;
- (id)aAWEPassportServiceHTSAdapter;
- (void)finishUserContext:(id)arg0 platform:(unsigned long long)arg1;
- (BOOL)processError:(id)arg0 routerContext:(id)arg1 ticketModel:(id)arg2;
- (void)loginShowMonitorWith:(id)arg0 finished:(BOOL)arg1;
- (void)startCallLoginInterfaceWith:(id)arg0;
- (void)loginSuccessMonitorWith:(id)arg0 startDate:(id)arg1 platform:(unsigned long long)arg2;
- (void)startUserContext:(id)arg0 completion:(id /* block */)arg1;
- (void)finishAuthLoginUserContext;
- (void)startAuthLoginUserContext:(id)arg0;
- (void)finishUserContextWithError:(id)arg0;
- (void)setHasBindProcedure:(BOOL)arg0;
- (void)setShowMonitor:(id)arg0;
- (id)loginMonitor;
- (void)loginMonitorTrackerWith:(id)arg0 params:(id)arg1;
- (void)setLoginMonitor:(id)arg0;
- (void)loginShowMonitorWith:(id)arg0 finished:(BOOL)arg1 extDict:(id)arg2;
- (id)showMonitor;
- (id)loginInterfaceMonitor;
- (void)setLoginInterfaceMonitor:(id)arg0;
- (void)loginProcedureChangedWith:(BOOL)arg0;
- (void)setLogoutMonitor:(id)arg0;
- (id)logoutMonitor;
- (void)setLogoutInterfaceMonitor:(id)arg0;
- (id)logoutInterfaceMonitor;
- (void)logoutProcedureChangedWith:(BOOL)arg0;
- (void)switchAccount:(BOOL)arg0;
- (void)startCallLogoutInterfaceWith:(id)arg0;
- (void)setInLoginProcedure:(BOOL)arg0;
- (void)trackInfoWithPlatform:(unsigned long long)arg0 addtionalTrackerInformation:(id)arg1 error:(id)arg2;
- (void)saveLastInfo:(unsigned long long)arg0;
- (void)sendMessageWithError:(id)arg0;
- (void)p_finishUserContext:(id)arg0 platform:(unsigned long long)arg1;
- (BOOL)hasBindProcedure;
- (void)showPhoneLoginTipDialog;
- (id)trackParamsForLoginResult:(unsigned long long)arg0;
- (id)resultCompletionBlocks;
- (void)setResultCompletionBlocks:(id)arg0;
- (BOOL)processError:(id)arg0 routerContext:(id)arg1 isFromH5:(BOOL)arg2 ticketModel:(id)arg3;
- (id)userAppealManager;
- (void)showAlertForRevertDelete:(id)arg0 platform:(unsigned long long)arg1;
- (BOOL)showSMSLoginMessage:(id)arg0 ticket:(id)arg1 platform:(unsigned long long)arg2;
- (BOOL)showUpgradeAPPMessage:(id)arg0;
- (unsigned long long)__errorType:(id)arg0;
- (void)__showErrorDialog:(id)arg0;
- (void)handleAccontPhoneLoginLocked:(id)arg0;
- (void)handleAccontPhoneSystemLocked:(id)arg0;
- (void)showUnbindDialog;
- (id)__dictionaryFromJsonString:(id)arg0;
- (id)__stringFromExtraDic:(id)arg0 keyString:(id)arg1;
- (void)addResultCompletionBlock:(id /* block */)arg0;
- (BOOL)processError:(id)arg0;
- (void)setContextPlatform:(unsigned long long)arg0;
- (void)setInLogoutProcedure:(BOOL)arg0;
- (void)setUserAppealManager:(id)arg0;
- (id)userContext;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (void)setCompletionBlocks:(id)arg0;
- (void)setContext:(id)arg0;
- (id)completionBlocks;
- (void)setPlatform:(unsigned long long)arg0;
- (unsigned long long)platform;
- (void)addCompletionBlock:(id /* block */)arg0;
- (id)context;
- (id)showError;
- (void)setShowError:(id)arg0;

@end