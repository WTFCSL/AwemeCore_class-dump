//
//     Generated by private class-dump
//

@class VEAIMomentAlgorithm, NSArray, NLEProduceKitFrameComponent, VEAIMomentBIMConfig;
@protocol NPPresetRecommendExtractFrameConfigDelegate, NPPresetRecommendAlgorithmServiceDelegate;

@interface NPPresetRecommendService_OC : NSObject {
    id<NPPresetRecommendExtractFrameConfigDelegate> _extractFrameDelegate;
    id<NPPresetRecommendAlgorithmServiceDelegate> _algorithmDelegate;
    unsigned long long _curPipelineStep;
    NSArray *_frameResult;
    NLEProduceKitFrameComponent *_frameComponent;
    VEAIMomentAlgorithm *_videoAIAlgorithm;
    VEAIMomentAlgorithm *_imageAIAlgorithm;
    VEAIMomentBIMConfig *_imageBimConfig;
    VEAIMomentBIMConfig *_videoNormalFrameBimConfig;
    VEAIMomentBIMConfig *_videoKeyFrameBimConfig;
}

@property (copy, nonatomic) NSArray *frameResult;
@property (nonatomic) unsigned long long curPipelineStep;
@property (retain, nonatomic) NLEProduceKitFrameComponent *frameComponent;
@property (retain, nonatomic) VEAIMomentAlgorithm *videoAIAlgorithm;
@property (retain, nonatomic) VEAIMomentAlgorithm *imageAIAlgorithm;
@property (retain, nonatomic) VEAIMomentBIMConfig *imageBimConfig;
@property (retain, nonatomic) VEAIMomentBIMConfig *videoNormalFrameBimConfig;
@property (retain, nonatomic) VEAIMomentBIMConfig *videoKeyFrameBimConfig;
@property (weak, nonatomic) id<NPPresetRecommendExtractFrameConfigDelegate> extractFrameDelegate;
@property (weak, nonatomic) id<NPPresetRecommendAlgorithmServiceDelegate> algorithmDelegate;

+ (void)trackRecommendExtractWithEvent:(id)arg0 type:(long long)arg1 duration:(long long)arg2 frameCount:(long long)arg3 error:(id)arg4;
+ (id)frameCacheDirPath;

- (void)processMaterials:(id)arg0 toStage:(unsigned long long)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)setExtractFrameDelegate:(id)arg0;
- (void)setAlgorithmDelegate:(id)arg0;
- (void)setCurPipelineStep:(unsigned long long)arg0;
- (void)extractFramesFromVideoMaterial:(id)arg0 forStage:(unsigned long long)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)extractFrameFromImageMaterial:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)supportExtractFrameForMaterial:(id)arg0 atStage:(unsigned long long)arg1;
- (id)extractFrameDelegate;
- (id)algorithmDelegate;
- (void)extractFeaturesWithInitialResult:(id)arg0 completion:(id /* block */)arg1;
- (void)extractFeatureForVideoMaterial:(id)arg0 completion:(id /* block */)arg1;
- (void)extractFeatureForImageMaterial:(id)arg0 completion:(id /* block */)arg1;
- (id)videoKeyFrameBimConfig;
- (id)videoNormalFrameBimConfig;
- (id)videoAIAlgorithm;
- (id)imageBimConfig;
- (id)imageAIAlgorithm;
- (BOOL)enableC3FeatureExtraction;
- (void)updatePipelineStatus:(unsigned long long)arg0;
- (unsigned long long)curPipelineStep;
- (id)frameResult;
- (void)setFrameResult:(id)arg0;
- (id)frameComponent;
- (void)setFrameComponent:(id)arg0;
- (void)setVideoAIAlgorithm:(id)arg0;
- (void)setImageAIAlgorithm:(id)arg0;
- (void)setImageBimConfig:(id)arg0;
- (void)setVideoNormalFrameBimConfig:(id)arg0;
- (void)setVideoKeyFrameBimConfig:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
