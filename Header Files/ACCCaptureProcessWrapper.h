//
//     Generated by private class-dump
//

@class NSString;
@protocol VERecorderPublicProtocol;

@interface ACCCaptureProcessWrapper : NSObject <ACCCameraBuildListener, ACCCaptureProcessProtocol> {
    id<VERecorderPublicProtocol> _camera;
}

@property (weak, nonatomic) id<VERecorderPublicProtocol> camera;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCameraProvider:(id)arg0;
- (void)onCameraInit:(id)arg0;
- (void)openAysnLoadAlgorithm;
- (void)setShakingDetectEnable:(BOOL)arg0 param:(id)arg1;
- (void)updateConfigShakingDetectWithParam:(id)arg0;
- (void)setImageDefinitionDetectEnable:(BOOL)arg0 param:(id)arg1;
- (void)updateConfigImageDefinitionDetectParam:(id)arg0;
- (id)camera;
- (void)setCamera:(id)arg0;
- (void).cxx_destruct;

@end
