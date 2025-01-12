//
//     Generated by private class-dump
//

@class NSRecursiveLock, NSString, BDPSonicCanvasInstance, NSMutableArray;

@interface BDPPluginCanvas : BDPBridgeInstancePlugin <UIGestureRecognizerDelegate> {
    BOOL _isDestroy;
    BOOL _webviewNewCanvas;
    long long _frameID;
    NSRecursiveLock *_lock;
    NSMutableArray *_drawableViews;
    BDPSonicCanvasInstance *_sonicCanvasInstance;
}

@property (nonatomic) long long frameID;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) BOOL webviewNewCanvas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)errMsgForErrCode:(long long)arg0;

- (id)errorTypeForErrorCode:(long long)arg0;
- (void)setWebviewNewCanvas:(BOOL)arg0;
- (BOOL)webviewNewCanvas;
- (void)createCanvasEnvSyncWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)insertCanvasWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)updateCanvasWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)removeCanvasWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (id)init;
- (void).cxx_destruct;
- (id)lock;
- (void)dealloc;
- (void)setLock:(id)arg0;
- (long long)frameID;
- (void)setFrameID:(long long)arg0;

@end
