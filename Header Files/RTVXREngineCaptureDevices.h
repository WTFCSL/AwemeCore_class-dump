//
//     Generated by private class-dump
//

@class RxDeferred, NSString, RTVXREngineCaptureDevice;
@protocol RxInjector, RTVXREngineCaptureDevicesDelegate;

@interface RTVXREngineCaptureDevices : NSObject <RTVXREngineCaptureDeviceDelegate> {
    id<RTVXREngineCaptureDevicesDelegate> _delegate;
    id<RxInjector> _injector;
    RTVXREngineCaptureDevice *_videoCapture;
    RTVXREngineCaptureDevice *_audioCapture;
    RxDeferred *_blockReleaseEngineDeferred;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RTVXREngineCaptureDevice *videoCapture;
@property (readonly, nonatomic) RTVXREngineCaptureDevice *audioCapture;
@property (retain) RxDeferred *blockReleaseEngineDeferred;
@property (weak, nonatomic) id<RTVXREngineCaptureDevicesDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)audioCapture;
- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)arg0 context:(id)arg1;
- (id)videoCapture;
- (void)xrEngine:(id)arg0 captureVideoFrameProcessed:(struct __CVBuffer { } *)arg1 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg2;
- (void)requireDelayReleaseEngineByDevice:(id)arg0 operationPromise:(id)arg1;
- (id)blockReleaseEngineDeferred;
- (void)setBlockReleaseEngineDeferred:(id)arg0;
- (void)__updateBlockReleaseEngineDeferred:(id)arg0;
- (id)businessMonitorDataForEngineCaptureDevice:(id)arg0;
- (id)captureDeviceWithType:(long long)arg0;
- (void).cxx_destruct;
- (id)injector;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end