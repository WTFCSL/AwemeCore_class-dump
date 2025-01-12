//
//     Generated by private class-dump
//

@class IESLiveGamePlatformTracker, HTSEventContext, NSString, IESLiveGameOpenPlatformAppInstanceContext, IESLiveComponentContext;
@protocol IESLiveGameOpenPlatformLauncher, IESLiveGameOpenPlatformAppInstanceStateStore;

@interface IESLiveGameOpenPlatformAppInstance : NSObject <IESLiveGameOpenPlatformNotificationAction, IESLiveGameOpenPlatformAppInstance> {
    BOOL shouldPause;
    BOOL _isInShareScreen;
    BOOL _enterBackgroundWhenAppIsInActiveState;
    IESLiveGameOpenPlatformAppInstanceContext *context;
    id<IESLiveGameOpenPlatformLauncher> launcher;
    unsigned long long appLaunchState;
    id<IESLiveGameOpenPlatformAppInstanceStateStore> _stateStore;
    IESLiveComponentContext *_componentContext;
    HTSEventContext *_eventContext;
    IESLiveGamePlatformTracker *_gamePlatformTracker;
}

@property (nonatomic) BOOL enterBackgroundWhenAppIsInActiveState;
@property (retain, nonatomic) id<IESLiveGameOpenPlatformAppInstanceStateStore> stateStore;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) IESLiveGamePlatformTracker *gamePlatformTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESLiveGameOpenPlatformAppInstanceContext *context;
@property (retain, nonatomic) id<IESLiveGameOpenPlatformLauncher> launcher;
@property (readonly, nonatomic) unsigned long long currentState;
@property (readonly, nonatomic) BOOL isInRunning;
@property (readonly, nonatomic) BOOL isInActive;
@property (readonly, nonatomic) BOOL isInShareScreen;
@property (nonatomic) long long totalShowTime;
@property (nonatomic) BOOL shouldPause;
@property (nonatomic) unsigned long long appLaunchState;

- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (void)setEventContext:(id)arg0;
- (void)setStateStore:(id)arg0;
- (void)setShareScreenStatus:(BOOL)arg0;
- (void)setLauncher:(id)arg0;
- (id)launcher;
- (void)setupOpenPlatformContextParamsWithInstanceContext:(id)arg0;
- (long long)totalShowTime;
- (id)gamePlatformTracker;
- (void)continueLaunch;
- (BOOL)isInRunning;
- (BOOL)isInActive;
- (BOOL)isInShareScreen;
- (void)setAppLaunchState:(unsigned long long)arg0;
- (void)appOnShow;
- (id)initWithAppID:(id)arg0 componentContext:(id)arg1 eventContext:(id)arg2;
- (BOOL)enterBackgroundWhenAppIsInActiveState;
- (void)setEnterBackgroundWhenAppIsInActiveState:(BOOL)arg0;
- (void)setGamePlatformTracker:(id)arg0;
- (BOOL)shouldPause;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (unsigned long long)currentState;
- (void)show;
- (id)context;
- (void)hide;
- (id)eventContext;
- (void)shutdownWithReason:(id)arg0;
- (void)free;
- (void)applicationDidEnterBackgroundNotification:(id)arg0;
- (void)applicationWillEnterForegroundNotification:(id)arg0;
- (void)setShouldPause:(BOOL)arg0;
- (unsigned long long)appLaunchState;
- (id)stateStore;
- (void)trackStart;
- (void)receiveMessage:(id)arg0;

@end
