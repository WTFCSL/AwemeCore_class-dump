//
//     Generated by private class-dump
//

@class NSNumber, HTSLiveLinkmicGameInfo, NSString;
@protocol IESLiveGenericAlertPtotocol;

@interface IESLiveInteractBarrageGameComponent : IESLiveInteractComponentBase <HTSLiveMessageSubscriber, IESLiveInteractBarrageGameRouter> {
    BOOL _isProcessOpenCamera;
    BOOL _isManualStopAvatar;
    HTSLiveLinkmicGameInfo *_gameInfo;
    NSNumber *_startLinkTimestamp;
    id<IESLiveGenericAlertPtotocol> _alert;
}

@property (retain, nonatomic) HTSLiveLinkmicGameInfo *gameInfo;
@property (retain, nonatomic) NSNumber *startLinkTimestamp;
@property (weak, nonatomic) id<IESLiveGenericAlertPtotocol> alert;
@property (nonatomic) BOOL isProcessOpenCamera;
@property (nonatomic) BOOL isManualStopAvatar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)arg0 params:(id)arg1;
- (void)componentUnmount;
- (void)setGameInfo:(id)arg0;
- (id)trackEventParams;
- (BOOL)isProcessingGame;
- (BOOL)isProcessOpenCamera;
- (BOOL)isProcessOpenCameraFromAvatar;
- (void)componentEnterRoom;
- (void)trackPlayModeLinkDuration;
- (void)trackPlayModeLink;
- (void)setStartLinkTimestamp:(id)arg0;
- (id)startLinkTimestamp;
- (void)componentBindContext;
- (void)componentDidJoinChannel;
- (void)componentDidLeaveChannel;
- (void)componentLeaveRoom;
- (void)startBarrageGame:(id)arg0 startContent:(id)arg1;
- (void)stopBarrageGame;
- (void)dismissOpenCameraAlert;
- (BOOL)isManualStopAvatar;
- (void)showOpenCameraAlert;
- (void)setIsProcessOpenCamera:(BOOL)arg0;
- (void)setIsManualStopAvatar:(BOOL)arg0;
- (void)trackCameraPopupClick:(id)arg0;
- (void)showOpenCameraPreview:(id /* block */)arg0;
- (id)alert;
- (void).cxx_destruct;
- (void)setAlert:(id)arg0;
- (void)messageReceived:(id)arg0;
- (id)gameInfo;

@end