//
//     Generated by private class-dump
//

@class NSString, AVAsset, NLEInterface_OC, AWEVideoPublishViewModel, NSMutableDictionary;
@protocol ACCEditorInteractionEffectHandle;

@interface ACCNLEEditSpecialEffectWrapper : NSObject <ACCEditBuildListener, ACCEditEffectProtocolD> {
    BOOL _timeEffectReady;
    id<ACCEditorInteractionEffectHandle> _editorInteractionHandle;
    NLEInterface_OC *_nle;
    NSString *_slotName;
    AVAsset *_reverseAsset;
    long long _currentTimeMachineType;
    AWEVideoPublishViewModel *_publishModel;
    NSMutableDictionary *_timeMachineRecord;
    NSMutableDictionary *_imageTemplateModelCache;
}

@property (weak, nonatomic) NLEInterface_OC *nle;
@property (copy, nonatomic) NSString *slotName;
@property (retain, nonatomic) AVAsset *reverseAsset;
@property (nonatomic) long long currentTimeMachineType;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (nonatomic) BOOL timeEffectReady;
@property (retain, nonatomic) NSMutableDictionary *timeMachineRecord;
@property (retain, nonatomic) NSMutableDictionary *imageTemplateModelCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL timeMachineReady;
@property (weak, nonatomic) id<ACCEditorInteractionEffectHandle> editorInteractionHandle;

+ (id)getOriginalVideoAssetsWithVideoData:(id)arg0;
+ (void)generateAssetVideos:(id)arg0 slot:(id)arg1 nle:(id)arg2;

- (id)judgeComposerPriority:(id)arg0 tag:(id)arg1;
- (BOOL)handleTouchDown:(struct CGPoint { double x0; double x1; })arg0 withType:(unsigned long long)arg1;
- (BOOL)handleTouchUp:(struct CGPoint { double x0; double x1; })arg0 withType:(unsigned long long)arg1;
- (BOOL)handlePanEventWithTranslation:(struct CGPoint { double x0; double x1; })arg0 location:(struct CGPoint { double x0; double x1; })arg1;
- (void)setEffectHandle:(BOOL)arg0;
- (BOOL)brushStart;
- (BOOL)brushEnd;
- (void)removeLastBrush;
- (void)setBrushColorWithRed:(double)arg0 green:(double)arg1 blue:(double)arg2 alpah:(double)arg3;
- (void)setBrushCanvasAlpha:(double)arg0;
- (void)setBrushSize:(double)arg0;
- (long long)currentBrushNumber;
- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (void)setEffectLoadStatusBlock:(id /* block */)arg0;
- (void)setSlotName:(id)arg0;
- (id)nle;
- (void)setNle:(id)arg0;
- (id)getVideoProcess;
- (void)syncRefreshCurrentFrame;
- (void)startEffectWithPathId:(id)arg0 withTime:(double)arg1;
- (void)stopEffectwithTime:(double)arg0;
- (long long)sendEffectMsg:(long long)arg0 isGlobal:(BOOL)arg1 arg1:(long long)arg2 arg2:(long long)arg3 arg3:(id)arg4;
- (id /* block */)effectPathBlock;
- (void)setEffectPathBlock:(id /* block */)arg0;
- (double)removeEffectWithRangeID:(id)arg0;
- (void)applyTimeMachineWithConfig:(id)arg0;
- (BOOL)timeMachineReady;
- (void)clearReverseAsset;
- (id)reverseAsset;
- (void)setReverseAsset:(id)arg0;
- (void)setTimeMachineReady:(BOOL)arg0;
- (double)getTimeMachineBegineTime:(long long)arg0;
- (void)removeAllEffect;
- (void)setEditSessionProvider:(id)arg0;
- (void)removeComposerNodes;
- (void)removeTemplate;
- (void)restartReverseAsset:(struct CGSize { double x0; double x1; })arg0 completion:(id /* block */)arg1;
- (void)setEffectWidthPathID:(id)arg0 withStartTime:(double)arg1 andStopTime:(double)arg2;
- (void)setEffectWidthPathID:(id)arg0 withStartTime:(double)arg1 andStopTime:(double)arg2 completion:(id /* block */)arg3;
- (void)setEffectWidthPathID:(id)arg0 withStartTime:(double)arg1 andStopTime:(double)arg2 effectCachePath:(id)arg3;
- (void)setEffectWidthPathID:(id)arg0 withStartTime:(double)arg1 andStopTime:(double)arg2 effectCachePath:(id)arg3 completion:(id /* block */)arg4;
- (id)editorInteractionHandle;
- (void)setEditorInteractionHandle:(id)arg0;
- (void)applyTemplateWithModel:(id)arg0;
- (void)applyTemplateWithModelIfNeed;
- (void)showComplianceToastIfNeed:(id)arg0;
- (void)appendComposerNodes:(id)arg0 videoData:(id)arg1;
- (void)changeSpeedWithVideoData:(id)arg0 xPoints:(id)arg1 yPoints:(id)arg2 assetIndex:(long long)arg3;
- (void)bindNLEInterface:(BOOL)arg0;
- (BOOL)getShowComplianceToastCount;
- (void)markComplianceToastCount;
- (void)onEditSessionInit:(id)arg0;
- (void)onNLEEditorInit:(id)arg0;
- (void)setupPublishViewModel:(id)arg0;
- (long long)htsTimeMachineTypeFromNLETimeEffectType:(unsigned long long)arg0;
- (void)setCurrentTimeMachineType:(long long)arg0;
- (void)setImageTemplateModelCache:(id)arg0;
- (id)timeMachineRecord;
- (unsigned long long)nleTimeEffectTypeFromHtsTimeMachineType:(long long)arg0;
- (BOOL)p_updateVideoTrackForTimeEffectType:(long long)arg0;
- (void)insertOrUpdateReversedTrackIfNeeded:(BOOL)arg0;
- (void)recordTimeMachineEffect:(id)arg0;
- (void)setTimeMachineRecord:(id)arg0;
- (void)p_setRewind:(BOOL)arg0;
- (long long)currentTimeMachineType;
- (void)addEffectWithPathID:(id)arg0 withStartTime:(double)arg1 andStopTime:(id)arg2 effectCachePath:(id)arg3 complete:(id /* block */)arg4;
- (void)p_adjustOriginTime:(id)arg0;
- (void)setTimeEffectReady:(BOOL)arg0;
- (BOOL)timeEffectReady;
- (id)checkResourcesAvailableWithTemplate:(id)arg0;
- (id)imageTemplateModelCache;
- (void)disableCanvasStyleWithNLESegment:(id)arg0;
- (void)showImageTemplateApplyDuration:(double)arg0;
- (void)setFirstImageTemplateFrameRenderBlock:(id /* block */)arg0;
- (id)normalTimeMachineConfig;
- (id)slotName;
- (void).cxx_destruct;
- (BOOL)handleTouchEvent:(struct CGPoint { double x0; double x1; })arg0;
- (void)dealloc;

@end