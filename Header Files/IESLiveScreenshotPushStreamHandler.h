//
//     Generated by private class-dump
//

@class NSDictionary, NSString, IESLivePushStreamLogger;
@protocol IESLiveRoomService;

@interface IESLiveScreenshotPushStreamHandler : NSObject <HTSLiveAnchorActions, IESLiveAnchorRoomStatusChangeEvents> {
    BOOL _isReduceBitrate;
    BOOL _exceptionTipsEnable;
    id /* block */ _closeRoomHandler;
    id<IESLiveRoomService> _room;
    IESLivePushStreamLogger *_pushStreamLogger;
    NSDictionary *_extensionPerformanceInfo;
    long long _bitrateZeroCount;
    long long _currentEncodeBitrate;
    long long _streamLogTotalCount;
    long long _networkFrameDownCount;
    long long _abnormalFrameDownCount;
    id _streamExceptionTips;
    long long _warningCnt;
    long long _maxWarningCount;
    long long _hasWarningCount;
    long long _errorCnt;
    long long _maxAlertCount;
    long long _hasAlertCount;
    long long _enterBackgroundCount;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLivePushStreamLogger *pushStreamLogger;
@property (copy, nonatomic) NSDictionary *extensionPerformanceInfo;
@property (nonatomic) long long bitrateZeroCount;
@property (nonatomic) long long currentEncodeBitrate;
@property (nonatomic) BOOL isReduceBitrate;
@property (nonatomic) long long streamLogTotalCount;
@property (nonatomic) long long networkFrameDownCount;
@property (nonatomic) long long abnormalFrameDownCount;
@property (retain, nonatomic) id streamExceptionTips;
@property (nonatomic) BOOL exceptionTipsEnable;
@property (nonatomic) long long warningCnt;
@property (nonatomic) long long maxWarningCount;
@property (nonatomic) long long hasWarningCount;
@property (nonatomic) long long errorCnt;
@property (nonatomic) long long maxAlertCount;
@property (nonatomic) long long hasAlertCount;
@property (nonatomic) long long enterBackgroundCount;
@property (copy, nonatomic) id /* block */ closeRoomHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willStopLive;
- (void)willStopAnchorLive;
- (void)showPushViewWithIcon:(id)arg0 title:(id)arg1;
- (id)pushStreamLogger;
- (void)setPushStreamLogger:(id)arg0;
- (void)setErrorCnt:(long long)arg0;
- (long long)errorCnt;
- (void)startListenStreamStatus;
- (void)setCloseRoomHandler:(id /* block */)arg0;
- (void)dismissStreamExceptionTips;
- (void)setHasWarningCount:(long long)arg0;
- (void)setHasAlertCount:(long long)arg0;
- (void)setExceptionTipsEnable:(BOOL)arg0;
- (void)setWarningCnt:(long long)arg0;
- (void)setMaxWarningCount:(long long)arg0;
- (void)setMaxAlertCount:(long long)arg0;
- (void)receiveStreamErrorWithCode:(long long)arg0;
- (void)receiveStreamLogWithLog:(id)arg0 bitrate:(long long)arg1 captureInfo:(id)arg2;
- (void)receiveStreamUpdateEncodeBitrate:(long long)arg0;
- (void)setExtensionPerformanceInfo:(id)arg0;
- (void)reportStreamVideoFramerateInfo;
- (BOOL)exceptionTipsEnable;
- (long long)hasAlertCount;
- (long long)maxAlertCount;
- (void)showStreamExceptionTips:(unsigned long long)arg0 forceClose:(BOOL)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 reportParams:(id)arg4;
- (void)handlerSessionErrorWithErrorCode:(long long)arg0 errorMessage:(id)arg1;
- (void)reportStreamLog:(id)arg0;
- (id)extensionPerformanceInfo;
- (BOOL)isReduceBitrate;
- (void)collectVideoFramerateWithFramerate:(long long)arg0 isReduceBitrate:(BOOL)arg1;
- (long long)bitrateZeroCount;
- (void)setBitrateZeroCount:(long long)arg0;
- (long long)hasWarningCount;
- (long long)maxWarningCount;
- (long long)warningCnt;
- (id)streamExceptionTips;
- (void)reportStreamReminderShowWithScene:(id)arg0 messageType:(id)arg1 reason:(id)arg2;
- (void)reportStreamWindowShowMessageType:(id)arg0 reason:(id)arg1;
- (void)setStreamExceptionTips:(id)arg0;
- (void)reportStreamWindowClickWithType:(id)arg0 messageType:(id)arg1 reason:(id)arg2;
- (long long)currentEncodeBitrate;
- (void)setIsReduceBitrate:(BOOL)arg0;
- (void)setCurrentEncodeBitrate:(long long)arg0;
- (id /* block */)closeRoomHandler;
- (long long)streamLogTotalCount;
- (void)setStreamLogTotalCount:(long long)arg0;
- (long long)networkFrameDownCount;
- (void)setNetworkFrameDownCount:(long long)arg0;
- (long long)abnormalFrameDownCount;
- (void)setAbnormalFrameDownCount:(long long)arg0;
- (void)reportStreamRecoverIfNeed:(BOOL)arg0;
- (long long)enterBackgroundCount;
- (void)setEnterBackgroundCount:(long long)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)initWithRoom:(id)arg0;

@end