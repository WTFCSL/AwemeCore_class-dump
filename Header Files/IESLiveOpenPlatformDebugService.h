//
//     Generated by private class-dump
//

@class IESLiveOpenPlatformDebugController, IESLiveGameOpenPlatformDebugPerfManager, NSString;
@protocol IESLiveOpenPlatformDebugLauncher;

@interface IESLiveOpenPlatformDebugService : NSObject <IESLiveGameOpenPlatformDebugService> {
    BOOL _isDebugRoom;
    BOOL _isMockDebugRoom;
    IESLiveOpenPlatformDebugController *_controller;
    id<IESLiveOpenPlatformDebugLauncher> _gameOpenPlatformDebug;
    IESLiveGameOpenPlatformDebugPerfManager *_performanceManager;
}

@property (retain, nonatomic) IESLiveOpenPlatformDebugController *controller;
@property (retain, nonatomic) id<IESLiveOpenPlatformDebugLauncher> gameOpenPlatformDebug;
@property (retain, nonatomic) IESLiveGameOpenPlatformDebugPerfManager *performanceManager;
@property (nonatomic) BOOL isDebugRoom;
@property (nonatomic) BOOL isMockDebugRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)exitLiveRoom;
- (BOOL)isInDebugRoom;
- (void)mockDebugRoom;
- (BOOL)isInMockDebugRoom;
- (id)debugFloatingBallViewWithInfo:(id)arg0;
- (void)debugLogEventWithLevel:(id)arg0 log:(id)arg1;
- (void)exitCurrentDebugGame;
- (void)hideScanEntrence:(BOOL)arg0;
- (void)debugWithSchema:(id)arg0;
- (BOOL)isPerformanceTesting;
- (BOOL)isPerformancePanelShowing;
- (void)setPerformancePanelShowing:(BOOL)arg0;
- (void)stopPerformanceTestWithAppId:(id)arg0 taskId:(id)arg1;
- (void)tryStopPerformanceTest;
- (void)setPerformanceManager:(id)arg0;
- (BOOL)isDebugRoom;
- (BOOL)isMockDebugRoom;
- (void)setIsMockDebugRoom:(BOOL)arg0;
- (void)setIsDebugRoom:(BOOL)arg0;
- (id)gameOpenPlatformDebug;
- (void)setGameOpenPlatformDebug:(id)arg0;
- (void)pr_clearForPerformance;
- (void)_debugInteractGameWithSchema:(id)arg0;
- (void)_debugNativeAppWithSchema:(id)arg0;
- (id)performanceManager;
- (void)pr_launchPerformanceTestIfNeeded:(id)arg0;
- (id)pr_trueLaunchSchemaWithSchema:(id)arg0;
- (void)pr_launchServiceIfNeeded:(id)arg0;
- (void)setController:(id)arg0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg0;
- (id)controller;

@end