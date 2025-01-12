//
//     Generated by private class-dump
//

@class NSString, IESLiveXPlayAudioStreamHandler, IESLiveXPlayAnchorEntranceHandler, HTSEventContext, IESLiveComponentContext, IESLiveXPlayGameModel, IESLiveXPlayGameViewController;
@protocol IESLiveGameXPlayGameOuterService, IESLiveRoomService, IESLiveXPlayCommonBusinessStrategy;

@interface IESLiveXPlayAppManager : NSObject <IESLiveGameXPlayService, IESLiveXPlayGameRouter, IESLiveAnchorRoomStatusChangeEvents, IESLiveXPlayAppManager> {
    id<IESLiveRoomService> _room;
    IESLiveComponentContext *_componentContext;
    HTSEventContext *_eventContext;
    IESLiveXPlayGameViewController *_xplayGameContainerVC;
    IESLiveXPlayGameModel *_xplayGameModel;
    id _currentAlertView;
    id /* block */ _launchResultBlock;
    IESLiveXPlayAnchorEntranceHandler *_entranceHandler;
    IESLiveXPlayAudioStreamHandler *_audioStreamHandler;
    id<IESLiveXPlayCommonBusinessStrategy> _businessHandler;
    id<IESLiveGameXPlayGameOuterService> _xplayOuterService;
    long long _currentSceneType;
}

@property (retain, nonatomic) IESLiveXPlayGameViewController *xplayGameContainerVC;
@property (retain, nonatomic) IESLiveXPlayGameModel *xplayGameModel;
@property (retain, nonatomic) id currentAlertView;
@property (copy, nonatomic) id /* block */ launchResultBlock;
@property (retain, nonatomic) IESLiveXPlayAnchorEntranceHandler *entranceHandler;
@property (retain, nonatomic) IESLiveXPlayAudioStreamHandler *audioStreamHandler;
@property (retain, nonatomic) id<IESLiveXPlayCommonBusinessStrategy> businessHandler;
@property (retain, nonatomic) id<IESLiveGameXPlayGameOuterService> xplayOuterService;
@property (nonatomic) long long currentSceneType;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (void)setEventContext:(id)arg0;
- (void)showMorePanel;
- (BOOL)isInClearScreen;
- (long long)currentSceneType;
- (void)stopAnchorLive;
- (void)xPlayGameDidUpdateStatus:(long long)arg0 extraInfo:(id)arg1;
- (void)xPlayGameDidUpdateNetworkStatus:(long long)arg0 rtt:(long long)arg1;
- (void)showAlertWithTitle:(id)arg0 description:(id)arg1 actionTitle:(id)arg2 cancelTitle:(id)arg3 actionBlock:(id /* block */)arg4 cancelBlock:(id /* block */)arg5;
- (void)sendFrameBufferToAppId:(id)arg0 pixelBuffer:(struct __CVBuffer { } *)arg1 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg2;
- (void)sendAudioFrameToAppId:(id)arg0 frame:(id)arg1 timestamp:(long long)arg2;
- (void)requestAppStart:(id)arg0 callback:(id /* block */)arg1;
- (void)setCurrentAlertView:(id)arg0;
- (void)setCurrentSceneType:(long long)arg0;
- (id)businessHandler;
- (id)xplayGameContainerVC;
- (void)setXplayGameContainerVC:(id)arg0;
- (void)updateCameraOpen:(BOOL)arg0;
- (void)updateClearScreenState:(BOOL)arg0;
- (BOOL)isXplayRunning;
- (void)loadXplayWithGameModel:(id)arg0 xplayExtra:(id)arg1 launchResultBlock:(id /* block */)arg2;
- (void)closeXplayGame;
- (id)entranceHandler;
- (void)setEntranceHandler:(id)arg0;
- (id)initWithRoom:(id)arg0 componentContext:(id)arg1 eventContext:(id)arg2 attachingDIContext:(id)arg3;
- (void)startPerfSampler;
- (void)stopPerfSampler;
- (long long)getSceneType;
- (id)readXPlayPerformanceSettingWithSceneType:(long long)arg0;
- (void)setXplayGameModel:(id)arg0;
- (void)setLaunchResultBlock:(id /* block */)arg0;
- (id)getBusinessStrategyWithSceneType:(long long)arg0;
- (void)setBusinessHandler:(id)arg0;
- (id /* block */)launchResultBlock;
- (id)xplayGameModel;
- (id)xplayOuterService;
- (void)hideToolBarEntrance;
- (void)showToolBarEntrance;
- (void)handleLaunchResultWithStatus:(long long)arg0 extraInfo:(id)arg1;
- (id)getMonitorParamsWithGameModel:(id)arg0;
- (id)audioStreamHandler;
- (void)setAudioStreamHandler:(id)arg0;
- (void)setXplayOuterService:(id)arg0;
- (void)_setupObserver;
- (void).cxx_destruct;
- (id)eventContext;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)dismissAlert;
- (id)currentAlertView;

@end
