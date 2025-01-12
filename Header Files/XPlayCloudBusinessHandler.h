//
//     Generated by private class-dump
//

@class NSString, NSTimer, XPlayItem, NSDate;

@interface XPlayCloudBusinessHandler : NSObject <XPlayCloudBusinessHandlerProtocol> {
    BOOL _isHeartBeatStarted;
    XPlayItem *_item;
    NSString *_cloudDeviceId;
    NSString *_token;
    NSTimer *_heartbeatTimer;
    double _heartbeatInterval;
    NSDate *_heartbeatSentTime;
    unsigned long long _heartbeatUnreceivedTimes;
}

@property (weak, nonatomic) XPlayItem *item;
@property (copy, nonatomic) NSString *cloudDeviceId;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) BOOL isHeartBeatStarted;
@property (retain, nonatomic) NSTimer *heartbeatTimer;
@property (nonatomic) double heartbeatInterval;
@property (retain, nonatomic) NSDate *heartbeatSentTime;
@property (nonatomic) unsigned long long heartbeatUnreceivedTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sendCustomMessage:(id)arg0;
- (void)requestTasksInfoWithCategory:(long long)arg0 callback:(id /* block */)arg1;
- (void)requestPayResultWithOrder:(id)arg0 completion:(id /* block */)arg1;
- (void)requestUserAuthorizedWithAuthCheck:(BOOL)arg0 callback:(id /* block */)arg1;
- (void)completeUserRealNameAuthWithIdentityName:(id)arg0 identityNumber:(id)arg1 callback:(id /* block */)arg2;
- (void)requestUserInfo:(long long)arg0;
- (void)sendLastHeartBeat;
- (void)startTaskWithType:(unsigned long long)arg0 andCategory:(long long)arg1;
- (void)requestConfig;
- (void)completeAuthWithUserEdit:(id)arg0 businessResult:(long long)arg1 authCode:(id)arg2 authMessage:(id)arg3 needCheckAuth:(BOOL)arg4 callback:(id /* block */)arg5;
- (void)completeGameOrder:(id)arg0 result:(long long)arg1 message:(id)arg2;
- (void)startSendHeartBeatFrom:(id)arg0;
- (void)pauseSendHeartBeat;
- (void)sendHeartBeatImmediately;
- (void)didReceiveMessage:(id)arg0 ackCallback:(id /* block */)arg1;
- (void)didReceiveAckMessage:(id)arg0 forMessage:(id)arg1;
- (void)setCloudDeviceId:(id)arg0;
- (void)setHeartbeatInterval:(double)arg0;
- (id)newInst;
- (double)heartbeatInterval;
- (unsigned long long)heartbeatUnreceivedTimes;
- (void)setIsHeartBeatStarted:(BOOL)arg0;
- (void)sendHeartBeat;
- (void)setHeartbeatUnreceivedTimes:(unsigned long long)arg0;
- (void)setHeartbeatSentTime:(id)arg0;
- (void)updateTaskStatusWithType:(unsigned long long)arg0 andCategory:(long long)arg1 action:(unsigned long long)arg2;
- (void)sendAuthResultWithResult:(long long)arg0 message:(id)arg1 clientKey:(id)arg2;
- (void)completePostHighlight:(id)arg0 result:(long long)arg1;
- (void)completeAd:(id)arg0 displayResult:(id)arg1;
- (void)completeJoinGroup:(id)arg0 joinResult:(id)arg1;
- (void)completeFollow:(id)arg0 result:(long long)arg1 message:(id)arg2;
- (void)completeGameRoomInvite:(id)arg0 result:(long long)arg1 message:(id)arg2;
- (void)completeGameExit:(id)arg0 result:(long long)arg1 message:(id)arg2;
- (id)heartbeatSentTime;
- (void)completeGameShare:(id)arg0 result:(long long)arg1 message:(id)arg2;
- (void)completeCustomEvent:(id)arg0 result:(long long)arg1 message:(id)arg2;
- (void)dealOrderEvent:(id)arg0;
- (void)dealAuthEvent:(id)arg0;
- (void)dealHighlightEvent:(id)arg0;
- (void)dealAdEvent:(id)arg0;
- (void)dealFollowEvent:(id)arg0;
- (void)dealGameRoomInviteEvent:(id)arg0;
- (void)didReceiveCommonMessage:(id)arg0;
- (void)dealJoinGroupEvent:(id)arg0;
- (void)dealRecordResult:(id)arg0;
- (void)dealTaskFinishedWithMessage:(id)arg0;
- (void)dealGameExitEvent:(id)arg0;
- (void)dealGameShareEvent:(id)arg0;
- (void)dealGameCustomWithMessage:(id)arg0;
- (void)didReceiveUserInfo:(id)arg0 forMessage:(id)arg1;
- (void)dealUpdateTaskStatusWithAckMessage:(id)arg0 forMessage:(id)arg1;
- (void)dealHeartBeatWithAckMessage:(id)arg0;
- (void)dealRequestConfigWithAckMessage:(id)arg0;
- (void)dealCustomAckMessage:(id)arg0;
- (id)cloudDeviceId;
- (void)didReceiveCommonResultMessage:(id)arg0;
- (BOOL)isHeartBeatStarted;
- (id)item;
- (void).cxx_destruct;
- (void)setToken:(id)arg0;
- (id)token;
- (void)setHeartbeatTimer:(id)arg0;
- (id)heartbeatTimer;
- (void)setItem:(id)arg0;
- (id)initWithItem:(id)arg0;

@end
