//
//     Generated by private class-dump
//

@class NSString;

@interface ACCVideoQualityPipeline : NSObject <ACCVideoQualityLifeCycleObserverProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)verifyVideoQualityWithContext:(id)arg0 transcodeParams:(struct ACCVideoQualityTranscodeParams { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; })arg1;
+ (BOOL)useNewMudule:(id)arg0;
+ (void)reportResolutionCheckAbsent:(id)arg0;
+ (void)reportAbnormalResolution:(id)arg0 extraContent:(id)arg1 trackParams:(id)arg2 error:(id)arg3 needsQiaofu:(BOOL)arg4;
+ (id)pipeline;

- (void)onPrepareSource:(id)arg0;
- (void)onFinishSource:(id)arg0;
- (void)onPrepareRender:(id)arg0;
- (void)onFinishRender:(id)arg0;
- (void)onPrepareCompile:(id)arg0;
- (void)onFinishCompile:(id)arg0 withError:(id)arg1;
- (void)onPrepareSave:(id)arg0;
- (void)onFinishSave:(id)arg0;

@end