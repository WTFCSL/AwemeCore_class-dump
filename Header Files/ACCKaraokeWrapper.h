//
//     Generated by private class-dump
//

@class NSString;
@protocol VERecorderPublicProtocol;

@interface ACCKaraokeWrapper : NSObject <ACCCameraBuildListener, ACCKaraokeProtocol> {
    void *_cameraContext;
    id<VERecorderPublicProtocol> _camera;
}

@property (weak, nonatomic) id<VERecorderPublicProtocol> camera;
@property (nonatomic) void *cameraContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void *)cameraContext;
- (void)setCameraContext:(void *)arg0;
- (void)setRecorderAudioMode:(long long)arg0;
- (void)setCameraProvider:(id)arg0;
- (BOOL)p_verifyCameraContext;
- (void)onCameraInit:(id)arg0;
- (id)camera;
- (void)setCamera:(id)arg0;
- (void).cxx_destruct;

@end