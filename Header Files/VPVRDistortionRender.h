//
//     Generated by private class-dump
//

@interface VPVRDistortionRender : NSObject {
    struct CardboardDistortionRenderer { } *_distortionRender;
}

+ (id)distortionRenderWithEyes:(id)arg0;

- (void)renderToTexture:(id)arg0 withCommandEncoder:(id)arg1 leftEye:(id)arg2 rightEye:(id)arg3;
- (void)updateDistortionMeshWithEyes:(id)arg0;
- (void)setupDistortionRenderer;
- (id)init;
- (void)dealloc;

@end
