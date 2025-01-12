//
//     Generated by private class-dump
//

@class HGUniqueID, HGGamePlatform, NSString, HGHeliumAppView, UIView, HGRuntimeGame;
@protocol HGScreenRecorderProtocol;

@interface HGGameView : UIView <HGScreenRecorderFactoryProtocol, HGPermissionChangeMessage, HGScreenSnapshotProtocol, HGEngineProtocol, HGMonitorableObjectProtocol, HGFrameInfoProtocol> {
    BOOL _isPause;
    BOOL _isStarted;
    BOOL _didStopped;
    BOOL _isMonitorStarted;
    BOOL _enableFPSDegrade;
    HGUniqueID *_uniqueID;
    HGRuntimeGame *_runtime;
    HGGamePlatform *_platform;
    HGHeliumAppView *_heliumView;
    id<HGScreenRecorderProtocol> _recorder;
}

@property BOOL isPause;
@property BOOL isStarted;
@property BOOL didStopped;
@property (nonatomic) BOOL isMonitorStarted;
@property (weak, nonatomic) HGRuntimeGame *runtime;
@property (retain, nonatomic) HGGamePlatform *platform;
@property (retain, nonatomic) HGHeliumAppView *heliumView;
@property (nonatomic) BOOL enableFPSDegrade;
@property (retain, nonatomic) id<HGScreenRecorderProtocol> recorder;
@property (retain, nonatomic) HGUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *engineView;

+ (void)preload:(id)arg0;

- (id)engineView;
- (void)takeCanvasSnapshotWithShift:(long long)arg0 completionHandler:(id /* block */)arg1;
- (void)fetchMonitorData:(id /* block */)arg0;
- (void)monitorDidStart;
- (void)monitorDidStop;
- (id)getEnterFrameTimeMs;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 runtime:(id)arg1 uniqueID:(id)arg2;
- (void)permissionStatusChanged:(id)arg0 on:(BOOL)arg1 uniqueID:(id)arg2;
- (id)getOrCreateScreenRecorder;
- (void)setHeliumView:(id)arg0;
- (id)heliumView;
- (void)initDegradeConfig;
- (void)setDidStopped:(BOOL)arg0;
- (void)registerLoggerForGame;
- (void)setupHelium:(id)arg0;
- (void)checkThermalState;
- (void)_innerStop;
- (void)setEnableFPSDegrade:(BOOL)arg0;
- (void)resizeHeliumView:(BOOL)arg0;
- (BOOL)enableFPSDegrade;
- (void)stopHelium:(id)arg0 runtime:(id)arg1;
- (BOOL)didStopped;
- (BOOL)isPause;
- (void)setIsPause:(BOOL)arg0;
- (void)setIsMonitorStarted:(BOOL)arg0;
- (BOOL)isMonitorStarted;
- (void)bdp_LogWithLevel:(unsigned long long)arg0 tag:(id)arg1 filename:(const char *)arg2 func_name:(const char *)arg3 line:(int)arg4 content:(id)arg5;
- (BOOL)gameViewIsPaused;
- (void)resume;
- (BOOL)isStarted;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (id)recorder;
- (void)stop;
- (void)setPlatform:(id)arg0;
- (id)platform;
- (void)setRecorder:(id)arg0;
- (void)setupExceptionHandler;
- (void)dealloc;
- (void)pause;
- (id)runtime;
- (void)setIsStarted:(BOOL)arg0;
- (id)engineName;
- (void)setRuntime:(id)arg0;

@end
