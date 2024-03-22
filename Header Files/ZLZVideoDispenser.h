//
//     Generated by private class-dump
//

@class NSString, NSMutableSet;

@interface ZLZVideoDispenser : NSObject <DTFCameraServiceDelegate> {
    NSMutableSet *_receivers;
}

@property (retain) NSMutableSet *receivers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addVideoReceiver:(id)arg0;
- (void)removeVideoReceiver:(id)arg0;
- (void)cameraControllerCaptureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)arg1 fromConnection:(id)arg2;
- (id)init;
- (id)receivers;
- (void).cxx_destruct;
- (void)setReceivers:(id)arg0;

@end
