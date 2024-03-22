//
//     Generated by private class-dump
//

@class DHThreadSafeMutableDictionary, NSString, StarkPbObjAddress, NSObject, DigitalHuman;
@protocol OS_dispatch_queue, WsEventCallBack, OS_dispatch_semaphore;

@interface DHWSInstance : NSObject {
    BOOL _isLoginSucc;
    BOOL _stopFlag;
    BOOL _shouldReLogin;
    BOOL _hasCallWsDisconnectedError;
    BOOL _isDisconnected;
    BOOL _isCloseRetry;
    int _retryCount;
    int _disconnectCount;
    int _loginErrorCode;
    int _exceptionCount;
    id<WsEventCallBack> _wsEventCallBack;
    DigitalHuman *_mDigitalHuman;
    StarkPbObjAddress *_cacheRoomAddr;
    unsigned long long _wsHandler;
    DHThreadSafeMutableDictionary *_msgCallBackMap;
    DHThreadSafeMutableDictionary *_msgSendTimeMap;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSObject<OS_dispatch_queue> *_handleOnMessageQueue;
    long long _disconnectFirstTime;
    long long _beginConnectTime;
    NSString *_loginErrorMsg;
    long long _recvHeartBeatTime;
}

@property (nonatomic) BOOL isLoginSucc;
@property (nonatomic) BOOL stopFlag;
@property (nonatomic) unsigned long long wsHandler;
@property (retain, nonatomic) DHThreadSafeMutableDictionary *msgCallBackMap;
@property (retain, nonatomic) DHThreadSafeMutableDictionary *msgSendTimeMap;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handleOnMessageQueue;
@property (nonatomic) BOOL shouldReLogin;
@property (nonatomic) int retryCount;
@property (nonatomic) int disconnectCount;
@property (nonatomic) long long disconnectFirstTime;
@property (nonatomic) BOOL hasCallWsDisconnectedError;
@property (nonatomic) BOOL isDisconnected;
@property (nonatomic) BOOL isCloseRetry;
@property (nonatomic) long long beginConnectTime;
@property (nonatomic) int loginErrorCode;
@property (copy, nonatomic) NSString *loginErrorMsg;
@property long long recvHeartBeatTime;
@property (nonatomic) int exceptionCount;
@property (weak, nonatomic) id<WsEventCallBack> wsEventCallBack;
@property (weak, nonatomic) DigitalHuman *mDigitalHuman;
@property (retain, nonatomic) StarkPbObjAddress *cacheRoomAddr;

+ (id)sharedInstance;

- (void)onMessage:(id)arg0;
- (void)setWsEventCallBack:(id)arg0;
- (void)startWS;
- (void)setMDigitalHuman:(id)arg0;
- (void)stopWS;
- (void)sendBlockMsg:(id)arg0 withHandler:(id /* block */)arg1;
- (void)sendMsg:(id)arg0 withHandler:(id /* block */)arg1;
- (void)setIsLoginSucc:(BOOL)arg0;
- (void)setStopFlag:(BOOL)arg0;
- (void)setShouldReLogin:(BOOL)arg0;
- (void)setWsHandler:(unsigned long long)arg0;
- (void)setLoginErrorCode:(int)arg0;
- (void)setLoginErrorMsg:(id)arg0;
- (void)setDisconnectCount:(int)arg0;
- (void)setExceptionCount:(int)arg0;
- (void)setIsCloseRetry:(BOOL)arg0;
- (void)setRecvHeartBeatTime:(long long)arg0;
- (void)setDisconnectFirstTime:(long long)arg0;
- (void)setHasCallWsDisconnectedError:(BOOL)arg0;
- (void)setMsgCallBackMap:(id)arg0;
- (void)setMsgSendTimeMap:(id)arg0;
- (void)setHandleOnMessageQueue:(id)arg0;
- (BOOL)stopFlag;
- (int)loginErrorCode;
- (id)loginErrorMsg;
- (BOOL)isLoginSucc;
- (id)getCommonParamsForEvent;
- (id)msgCallBackMap;
- (id)msgSendTimeMap;
- (void)sendMsgReal:(id)arg0;
- (void)sendMsgWithRetry:(id)arg0 withRetryTime:(int)arg1;
- (void)getRoomAddressDelay:(id)arg0;
- (unsigned long long)wsHandler;
- (id)cacheRoomAddr;
- (id)wsEventCallBack;
- (void)cacheCallbackHandle;
- (void)resetEnv;
- (void)startWsAndLoop;
- (void)initWs;
- (BOOL)shouldReLogin;
- (void)onRecvEventException;
- (void)setBeginConnectTime:(long long)arg0;
- (id)getWsLoginAddr;
- (long long)beginConnectTime;
- (BOOL)isCloseRetry;
- (int)disconnectCount;
- (long long)disconnectFirstTime;
- (BOOL)hasCallWsDisconnectedError;
- (int)exceptionCount;
- (void)onCloseEvent:(id)arg0;
- (id)handleOnMessageQueue;
- (void)setCacheRoomAddr:(id)arg0;
- (id)mDigitalHuman;
- (void)onMessageSerialSafely:(id)arg0;
- (void)onLoginSuccessWithUid:(long long)arg0 withMode:(int)arg1;
- (void)onLoginFailed:(int)arg0 withMsg:(id)arg1 withMode:(int)arg2;
- (long long)recvHeartBeatTime;
- (id)init;
- (id)semaphore;
- (void).cxx_destruct;
- (void)setRetryCount:(int)arg0;
- (int)retryCount;
- (void)setSemaphore:(id)arg0;
- (BOOL)isLooping;
- (BOOL)isDisconnected;
- (void)onDisconnect;
- (void)setIsDisconnected:(BOOL)arg0;

@end
