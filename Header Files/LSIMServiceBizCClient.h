//
//     Generated by private class-dump
//

@class LSIMObserverHash, NSString, BDECPigeonClientConfig, BDECPigeonClient, LSIMCurrentUser, NSPointerArray;
@protocol LSIMFunctionUser;

@interface LSIMServiceBizCClient : NSObject <LSIMUserMessageNotify, LSIMServiceBizCClient> {
    BOOL _isWaitingForCloseConnect;
    BOOL _isBackgroundCloseConnect;
    NSString *_bizTypeStr;
    long long _bizType;
    NSString *_hostURL;
    BDECPigeonClient *_pigeonClient;
    BDECPigeonClientConfig *_clientConfig;
    LSIMCurrentUser *_pigeonUser;
    id<LSIMFunctionUser> _userService;
    LSIMObserverHash *_observerHash;
    unsigned long long _observersCount;
    NSPointerArray *_detailVMStack;
}

@property (copy, nonatomic) NSString *bizTypeStr;
@property (nonatomic) long long bizType;
@property (copy, nonatomic) NSString *hostURL;
@property (retain, nonatomic) BDECPigeonClient *pigeonClient;
@property (retain, nonatomic) BDECPigeonClientConfig *clientConfig;
@property (retain, nonatomic) LSIMCurrentUser *pigeonUser;
@property (retain, nonatomic) id<LSIMFunctionUser> userService;
@property (retain, nonatomic) LSIMObserverHash *observerHash;
@property (nonatomic) unsigned long long observersCount;
@property (nonatomic) BOOL isWaitingForCloseConnect;
@property (nonatomic) BOOL isBackgroundCloseConnect;
@property (retain, nonatomic) NSPointerArray *detailVMStack;
@property (readonly, nonatomic) LSIMCurrentUser *currentUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)appVersionCode;
+ (id)CSClient;
+ (id)KOLClient;
+ (id)clientInjectBizType:(id)arg0;
+ (id)sharedInstance;

- (void)setupWithConfig:(id)arg0;
- (void)handleDidEnterBackgroundNotification:(id)arg0;
- (long long)bizType;
- (void)setBizType:(long long)arg0;
- (void)registerNotification;
- (void)handleWillEnterForegroundNotification:(id)arg0;
- (void)logoutWithCompletion:(id /* block */)arg0;
- (void)resendMessage:(id)arg0;
- (BOOL)webSocketBreak;
- (id)sendTextMessageInConversation:(id)arg0 text:(id)arg1 bizRole:(id)arg2 bizExt:(id)arg3 error:(id *)arg4;
- (id)sendImageMessageInConversation:(id)arg0 imageWidth:(id)arg1 imageHeight:(id)arg2 imageURI:(id)arg3 bizRole:(id)arg4 bizExt:(id)arg5 error:(id *)arg6;
- (void)closeWebSocket;
- (void)openWebSocket;
- (id)wsCustomHeaders;
- (void)deleteConversation:(id)arg0 competion:(id /* block */)arg1;
- (id)pigeonClient;
- (void)setPigeonClient:(id)arg0;
- (id)userService;
- (void)setUserService:(id)arg0;
- (void)userDidLogout;
- (void)fetchGroupConversationInfoWithID:(id)arg0 inbox:(long long)arg1 completion:(id /* block */)arg2;
- (void)sendUserEnterMessageWithBizShopId:(id)arg0 conGroupId:(id)arg1 extParams:(id)arg2 completion:(id /* block */)arg3;
- (void)sendReadMesssageWithConversation:(id)arg0 message:(id)arg1;
- (void)clearAllConversationsUnreadCountWithInboxes:(id)arg0 completion:(id /* block */)arg1;
- (void)allBizConversationsWithInboxes:(id)arg0 completion:(id /* block */)arg1;
- (id)pigeonUser;
- (void)p_checkObservers;
- (void)setIsWaitingForCloseConnect:(BOOL)arg0;
- (BOOL)isWaitingForCloseConnect;
- (void)conversationDidUpdate:(id)arg0;
- (void)conversationsDidChange:(id)arg0;
- (void)messageDidInsert:(id)arg0;
- (void)messageDidUpdate:(id)arg0;
- (void)didReceiveWsMessageNotification:(id)arg0;
- (void)setIsBackgroundCloseConnect:(BOOL)arg0;
- (BOOL)isBackgroundCloseConnect;
- (void)fetchCurrentUserInfoWithCompletion:(id /* block */)arg0;
- (void)p_checkUserIsValidWithCompletion:(id /* block */)arg0;
- (void)setObserversCount:(unsigned long long)arg0;
- (void)sendEvaluationWithRequest:(id)arg0 isInvite:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)setPigeonUser:(id)arg0;
- (void)setupWithConfigDict:(id)arg0;
- (id)bizTypeStr;
- (void)fetchImageURLWithURI:(id)arg0 completion:(id /* block */)arg1;
- (void)setObserverHash:(id)arg0;
- (void)pushDetailVMStack:(id)arg0;
- (void)popDetailVMStack:(id)arg0;
- (void)createCSConversationWithBizShopId:(id)arg0 conGroupId:(id)arg1 inbox:(long long)arg2 completion:(id /* block */)arg3;
- (BOOL)isDYHost;
- (BOOL)messageReadInConversation:(id)arg0 messageIndex:(long long)arg1;
- (BOOL)messageReadInGroupConversation:(id)arg0 messageIndex:(long long)arg1 byPigeonUid:(id)arg2;
- (void)markAllMessagesAsReadWithConversation:(id)arg0 completion:(id /* block */)arg1;
- (void)canEvaluateWithConversation:(id)arg0 completion:(id /* block */)arg1;
- (void)sendSwitchToHumanMessageWithConversationID:(id)arg0 completion:(id /* block */)arg1;
- (id)topDetailVM;
- (void)fetchImageUploadInfoWithCompletion:(id /* block */)arg0;
- (void)batchFetchShopInfosWithShopDict:(id)arg0 bizExt:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchParticipantsWithUids:(id)arg0 conversation:(id)arg1 extend:(id)arg2 completion:(id /* block */)arg3;
- (void)p_addWebSocketObserver;
- (void)setBizTypeStr:(id)arg0;
- (void)fetchCSCurrentUserInfoWithCompletion:(id /* block */)arg0;
- (void)fetchKOLCurrentUserInfoWithCompletion:(id /* block */)arg0;
- (void)p_getConversationWithConstructor:(id /* block */)arg0 completion:(id /* block */)arg1;
- (BOOL)pigeonUserValid;
- (id)detailVMStack;
- (void)loginWithCurrentUser:(id)arg0 completion:(id /* block */)arg1;
- (void)clearServiceClient;
- (void)setDetailVMStack:(id)arg0;
- (void)unregisterObserver:(id)arg0;
- (id)clientConfig;
- (void).cxx_destruct;
- (void)registerObserver:(id)arg0;
- (id)currentUser;
- (void)setClientConfig:(id)arg0;
- (unsigned long long)observersCount;
- (id)hostURL;
- (void)setHostURL:(id)arg0;
- (id)observerHash;

@end