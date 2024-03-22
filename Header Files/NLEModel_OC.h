//
//     Generated by private class-dump
//

@class NSString, NSArray, NSMutableDictionary, IESVideoAddEdgeData, NSMutableArray, NLEVideoFrameModel_OC;

@interface NLEModel_OC : NLETimeSpaceNode_OC {
    struct shared_ptr<const cut::model::NLEModel> { struct NLEModel *__ptr_; struct __shared_weak_count *__cntrl_; } _stageModel;
    NLEVideoFrameModel_OC *_coverModel;
    NSMutableArray *_p_trackArray;
}

@property (retain, nonatomic) NSString *dve_isSingleType;
@property (nonatomic) BOOL dve_isBeatEditMode;
@property (nonatomic) int canvasWidth;
@property (copy, nonatomic) NSString *dataInfo;
@property (nonatomic) BOOL shouldRegenerateReverseAsset;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *importTransform;
@property (copy, nonatomic) NSString *metaRecordInfo;
@property (copy, nonatomic) NSString *preferCanvasConfig;
@property (nonatomic) BOOL isFastImport;
@property (nonatomic) BOOL isRecordFromCamera;
@property (copy, nonatomic) NSString *previewEdge;
@property (copy, nonatomic) NSString *extraInfoString;
@property (nonatomic) BOOL isMicMuted;
@property (copy, nonatomic) NSString *normalizeSizeString;
@property (nonatomic) BOOL useVEPublic;
@property (copy, nonatomic) NSString *extraMetaInfo;
@property (readonly, copy, nonatomic) NSArray *acc_allResouces;
@property (readonly, copy, nonatomic) NSString *bgmURLString;
@property (copy, nonatomic) NSArray *pcmDataPaths;
@property (retain, nonatomic) IESVideoAddEdgeData *infoStickerAddEdgeData;
@property (retain) NSMutableDictionary *urlDict;
@property (retain, nonatomic) NSMutableArray *p_trackArray;
@property (nonatomic) struct shared_ptr<cut::model::NLEModel> { struct NLEModel *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) float canvasRatio;
@property (nonatomic) struct CGSize { double x0; double x1; } canvasSize;
@property (retain, nonatomic) NLEVideoFrameModel_OC *coverModel;
@property (copy, nonatomic) NSString *alignMode;

+ (id)stageModelWithCppModel:(struct shared_ptr<const cut::model::NLEModel> { struct NLEModel *x0; struct __shared_weak_count *x1; })arg0;

- (BOOL)isFastImport;
- (void)setCoverModel:(id)arg0;
- (float)canvasRatio;
- (void)setCanvasRatio:(float)arg0;
- (void)setDataInfo:(id)arg0;
- (id)urlDict;
- (void)setUrlDict:(id)arg0;
- (id)getTracks;
- (id)dve_allTracksOfType:(unsigned long long)arg0;
- (id)dve_allTracksOfType:(unsigned long long)arg0 resourceTypes:(id)arg1;
- (id)dve_trackContainSlotId:(id)arg0;
- (void)dve_addSlotToMainTrack:(id)arg0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1;
- (id)dve_getMainVideoTrack;
- (id)dve_addEmptyTrackIfNeeded:(unsigned long long)arg0 requireCount:(long long)arg1;
- (void)dve_removeLastEmptyTracksForType:(unsigned long long)arg0;
- (long long)dve_getMaxTrackLayer:(unsigned long long)arg0;
- (id)dve_allTracksOfType:(unsigned long long)arg0 resourceType:(unsigned long long)arg1;
- (long long)dve_getMaxTrackLayer:(unsigned long long)arg0 resourceType:(unsigned long long)arg1;
- (id)dve_allSortedTracks;
- (int)getEffectLayerMax;
- (id)dve_isSingleType;
- (void)setDve_isSingleType:(id)arg0;
- (BOOL)dve_isBeatEditMode;
- (void)setDve_isBeatEditMode:(BOOL)arg0;
- (id)dve_targetIndexOfNodeId:(id)arg0 trackType:(unsigned long long)arg1 excludeMainTrack:(BOOL)arg2;
- (id)dve_videoSlotsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (id)dve_slotsInTrackWithSlot:(id)arg0;
- (id)dve_trackContainSlot:(id)arg0;
- (void)dve_addSlotsToMainTrack:(id)arg0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1;
- (id)dve_slotsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 forType:(unsigned long long)arg1;
- (void)dve_insertSlot:(id)arg0 atTargetStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1 trackIndex:(long long)arg2 trackType:(unsigned long long)arg3;
- (id)dve_addEmptyTrackIfNeeded:(unsigned long long)arg0 requireCount:(long long)arg1 resourceType:(unsigned long long)arg2;
- (long long)dve_countMaterialWithoutSplit:(unsigned long long)arg0;
- (void)dve_removeLastEmptyTracks;
- (void)dve_removeLastEmptyTracksForType:(unsigned long long)arg0 resourceType:(unsigned long long)arg1;
- (id)dve_removeSlots:(id)arg0 inTrackType:(unsigned long long)arg1;
- (long long)dve_getMaxTrackLayer;
- (long long)dve_getMaxEffectLayer;
- (id)dve_slotsOfType:(unsigned long long)arg0;
- (BOOL)dve_hasAudioOrPicInPicSegments;
- (id)dve_slotOf:(id)arg0;
- (BOOL)dve_containsTrack:(id)arg0;
- (long long)getMaxTargetEnd;
- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLEModel> { struct NLEModel *x0; struct __shared_weak_count *x1; })arg0;
- (void)clearOCObjectCache;
- (void)modifyDForward2DailyResource:(id)arg0 videoAnimEffectId:(id)arg1;
- (id)p_trackArray;
- (BOOL)isStage;
- (struct shared_ptr<const cut::model::NLEModel> { struct NLEModel *x0; struct __shared_weak_count *x1; })stageCppModel;
- (id)initWithCanvasSize:(struct CGSize { double x0; double x1; })arg0;
- (unsigned int)getThousandFps;
- (void)setThousandFps:(unsigned int)arg0;
- (void)setCanvasRatioWithUpdateRelativeLocation:(float)arg0;
- (long long)getMinTargetStart;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getMaxTargetEndExcludeDisabledNode:(BOOL)arg0;
- (int)getLayerMax;
- (id)coverModel;
- (id)alignMode;
- (void)setAlignMode:(id)arg0;
- (void)setRewind:(BOOL)arg0 withExceptTrackTypes:(id)arg1;
- (id)allVideoTracks;
- (id)getStage;
- (void)setP_trackArray:(id)arg0;
- (BOOL)useVEPublic;
- (id)previewEdge;
- (BOOL)isRecordFromCamera;
- (void)setIsRecordFromCamera:(BOOL)arg0;
- (id)extraMetaInfo;
- (void)setPreviewEdge:(id)arg0;
- (id)infoStickerAddEdgeData;
- (void)setInfoStickerAddEdgeData:(id)arg0;
- (void)setIsFastImport:(BOOL)arg0;
- (BOOL)isMicMuted;
- (void)setIsMicMuted:(BOOL)arg0;
- (id)metaRecordInfo;
- (void)setMetaRecordInfo:(id)arg0;
- (id)dataInfo;
- (id)preferCanvasConfig;
- (void)setPreferCanvasConfig:(id)arg0;
- (void)setExtraMetaInfo:(id)arg0;
- (id)importTransform;
- (void)setImportTransform:(id)arg0;
- (void)setUseVEPublic:(BOOL)arg0;
- (id)pcmDataPaths;
- (void)setPcmDataPaths:(id)arg0;
- (void)setCanvasWidth:(int)arg0;
- (id)tracksWithType:(unsigned long long)arg0;
- (id)getMainVideoTrack;
- (id)specialEffectTrack;
- (id)getEnableMainTrack;
- (id)slotsWithType:(unsigned long long)arg0;
- (id)getSubVideoTrack;
- (void)acc_setVideoVolumn:(float)arg0 forTrackCondition:(id /* block */)arg1;
- (void)acc_setAudioVolumn:(float)arg0 forTrackCondition:(id /* block */)arg1;
- (id)mvTrack;
- (void)removeTracksWithType:(unsigned long long)arg0;
- (void)replaceMainTrackWithMV:(id)arg0;
- (id)slotOfName:(id)arg0 withTrackType:(unsigned long long)arg1;
- (id)acc_bgmTrack;
- (id)audioTrackOfAsset:(id)arg0 nle:(id)arg1;
- (BOOL)isMVType;
- (void)acc_setVideoVolumn:(float)arg0 forTrackSlotCondition:(id /* block */)arg1;
- (id)voiceChangerFilters;
- (void)removeAllVoiceChangerFilters;
- (void)setAudioFilter:(id)arg0 forTrack:(id)arg1 draftFolder:(id)arg2;
- (id)videoTrackOfAsset:(id)arg0 nle:(id)arg1;
- (id)videoSlotOfAsset:(id)arg0 nle:(id)arg1;
- (BOOL)shouldRegenerateReverseAsset;
- (id)getReversedTrack;
- (void)setShouldRegenerateReverseAsset:(BOOL)arg0;
- (id)timeEffectTrack;
- (void)removeAllSpecialEffects;
- (id)createReversedTrack:(id)arg0 nle:(id)arg1;
- (void)switchReversedTrackToOriginMainTrack;
- (void)adjustOriginTime:(id)arg0 maxDuration:(double)arg1;
- (id)captionStickerTrack;
- (BOOL)hasRewindTimeEffect;
- (id)removeSlots:(id)arg0 trackType:(unsigned long long)arg1;
- (id)normalizeSizeString;
- (void)setNormalizeSizeString:(id)arg0;
- (id)audioSlotOfAsset:(id)arg0 nle:(id)arg1;
- (id)bgAudioAssetTrack;
- (void)removeAllAudioFiltersForAudioAsset:(BOOL)arg0;
- (void)setAudioFilters:(id)arg0 forTrack:(id)arg1 draftFolder:(id)arg2;
- (void)removeAudioFilter:(id)arg0 forTrack:(id)arg1;
- (id)subTracksWithType:(unsigned long long)arg0;
- (id)videoSlotOfCustomAsset:(id)arg0 nle:(id)arg1;
- (BOOL)acc_moveMainResourceToDraftFolder:(id)arg0;
- (id)acc_allResouces;
- (double)mainVideoTrackSpeed;
- (void)removeEmptyTracksWithType:(unsigned long long)arg0;
- (id)trackContainSlot:(id)arg0;
- (id)trackContainSlotId:(id)arg0;
- (void)removeEmptyTracksForType:(unsigned long long)arg0;
- (void)removeAllVoiceChangerFiltersForTrack:(id)arg0;
- (void)removeAllAudioFiltersForTrack:(id)arg0;
- (void)addAudioFilter:(id)arg0 forTrack:(id)arg1 draftFolder:(id)arg2;
- (long long)slotIndexInItsTrack:(id)arg0;
- (id)addTrackWithLayer:(int)arg0;
- (id)bgmURLString;
- (id)init;
- (void).cxx_destruct;
- (id)identifier;
- (void)removeTrack:(id)arg0;
- (void)setCanvasSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })canvasSize;
- (id).cxx_construct;
- (void)setIdentifier:(id)arg0;
- (void)clearTracks;
- (void)addTrack:(id)arg0;
- (id)allResources;
- (int)canvasWidth;
- (id)extraInfoString;
- (void)setExtraInfoString:(id)arg0;

@end
