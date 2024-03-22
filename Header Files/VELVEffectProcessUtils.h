//
//     Generated by private class-dump
//

@class HTSGLFilter, HTSVideoData;
@protocol IESVideoEngineEffectProtocol;

@interface VELVEffectProcessUtils : NSObject {
    HTSGLFilter<IESVideoEngineEffectProtocol> *_effectProcessUnit;
    HTSVideoData *_videoData;
}

@property (retain, nonatomic) HTSGLFilter<IESVideoEngineEffectProtocol> *effectProcessUnit;
@property (retain, nonatomic) HTSVideoData *videoData;

- (id)getTemplateStickerTextParams:(long long)arg0;
- (unsigned long long)addTemplateWithResourcePath:(id)arg0 dependResourceParams:(id)arg1;
- (long long)setTemplateStickerTextParams:(long long)arg0 textParams:(id)arg1;
- (id)videoData;
- (void)setVideoData:(id)arg0;
- (id)initWithVideoData:(id)arg0;
- (void)setEffectProcessUnit:(id)arg0;
- (id)effectProcessUnit;
- (void).cxx_destruct;

@end
