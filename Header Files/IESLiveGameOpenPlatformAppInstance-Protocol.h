//
//     Generated by private class-dump
//

@class IESLiveGameOpenPlatformAppInstanceContext;
@protocol IESLiveGameOpenPlatformLauncher;

@protocol IESLiveGameOpenPlatformAppInstance <IESLiveGameOpenPlatformAppInstanceMessageImport>

@property (retain, nonatomic) IESLiveGameOpenPlatformAppInstanceContext *context;
@property (retain, nonatomic) id<IESLiveGameOpenPlatformLauncher> launcher;
@property (readonly, nonatomic) unsigned long long currentState;
@property (readonly, nonatomic) BOOL isInRunning;
@property (readonly, nonatomic) BOOL isInActive;
@property (readonly, nonatomic) BOOL isInShareScreen;
@property (nonatomic) long long totalShowTime;
@property (nonatomic) BOOL shouldPause;
@property (nonatomic) unsigned long long appLaunchState;

- (void)setLauncher:(id)arg0;
- (id)launcher;
- (long long)totalShowTime;
- (void)continueLaunch;
- (BOOL)isInRunning;
- (BOOL)isInActive;
- (BOOL)isInShareScreen;
- (void)setAppLaunchState:(unsigned long long)arg0;
- (BOOL)shouldPause;
- (void)setContext:(id)arg0;
- (unsigned long long)currentState;
- (void)show;
- (id)context;
- (void)hide;
- (void)shutdownWithReason:(id)arg0;
- (void)free;
- (void)setShouldPause:(BOOL)arg0;
- (unsigned long long)appLaunchState;
- (void)trackStart;
- (void)setTotalShowTime:(long long)arg0;

@optional

- (void)setShareScreenStatus:(BOOL)arg0;
- (void)requestAppStartWithCallBack:(id /* block */)arg0;
- (void)updateCertStatus:(BOOL)arg0;
- (void)trackCertAlertWithClickType:(id)arg0;
- (void)trackAuthWithParams:(id)arg0;
- (void)appOnShow;
- (void)requestAudienceStartWithCompletion:(id /* block */)arg0;

@end
