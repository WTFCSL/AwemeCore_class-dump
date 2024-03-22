//
//     Generated by private class-dump
//

@class NLESegmentMV_OC, NLESegment_OC, IESMMVideoDataClipRange, TransformTextureVertices, NSString, IESMMMVResource, NLESegmentVideo_OC, IESMMCanvasConfig, NLESegmentFilter_OC, IESMMVideoTransformInfo, NSArray, NLESegmentGIF_OC, NLESegmentSticker_OC, NLESegmentTimeEffect_OC, NLESegmentSubtitleSticker_OC, NLESegmentImageSticker_OC, NLESegmentInfoSticker_OC, NLESegmentAudio_OC, NLESegmentTransition_OC, NLESegmentTextTemplate_OC, IESMediaFilterInfo, NLESegmentEffect_OC, IESMMCanvasSource, NLEResourceNode_OC, NLESegmentTextSticker_OC, NSNumber;

@interface NLETrackSlot_OC : NLETimeSpaceNode_OC {
    NLESegmentTransition_OC *_endTransition;
    NLEResourceNode_OC *_pinAlgorithmFile;
    NLESegment_OC *_segment;
    NLETrackSlot_OC *_renderProxy;
}

@property (nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } dve_sourceTimeRange;
@property (readonly, nonatomic) double dve_speed;
@property (copy, nonatomic) NSArray *dve_beatPoints;
@property (copy, nonatomic) NSString *dve_splitRefName;
@property (readonly, nonatomic) NLESegmentVideo_OC *dve_videoSegment;
@property (readonly, nonatomic) NLESegmentAudio_OC *dve_audioSegment;
@property (readonly, nonatomic) NLESegmentEffect_OC *dve_effectSegment;
@property (copy, nonatomic) NSString *originPath;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) float stickerSizeHeight;
@property (nonatomic) float multiOriginalVoiceRate;
@property (copy, nonatomic) NSString *assetRotationInfoString;
@property (copy, nonatomic) NSString *srtString;
@property (copy, nonatomic) NSString *textParam;
@property (copy, nonatomic) NSString *bingoKey;
@property (nonatomic) float stickerSizeWidth;
@property (copy, nonatomic) NSString *movieInputFillTypeString;
@property (copy, nonatomic) NSString *virtualStickerExtra;
@property (nonatomic) long long cropRatio;
@property (copy, nonatomic) NSString *stickerUserInfo;
@property (readonly, copy, nonatomic) NLESegmentSticker_OC *sticker;
@property (nonatomic) double acc_rotationValue;
@property (nonatomic) long long acc_cropRatioType;
@property (nonatomic) double acc_cropRatioValue;
@property (nonatomic) double acc_scaleValueOriginal;
@property (nonatomic) BOOL acc_hasCroppedThisTime;
@property (nonatomic) BOOL acc_hasRotatedThisTime;
@property (nonatomic) BOOL acc_hasFlippedThisTime;
@property (nonatomic) BOOL acc_cropPageHasEditedThisTime;
@property (readonly, nonatomic) double dve_durationSeconds;
@property (retain, nonatomic) IESMMVideoDataClipRange *audioClipRange;
@property (retain, nonatomic) IESMMVideoDataClipRange *videoClipRange;
@property (retain, nonatomic) IESMMVideoTransformInfo *videoTransform;
@property (retain, nonatomic) IESMediaFilterInfo *videoTransition;
@property (readonly, nonatomic) NLESegmentVideo_OC *videoSegment;
@property (readonly, nonatomic) NLESegmentAudio_OC *audioSegment;
@property (readonly, nonatomic) NLESegmentGIF_OC *gifSegment;
@property (readonly, nonatomic) NLESegmentEffect_OC *effectSegment;
@property (readonly, nonatomic) NLESegmentFilter_OC *filterSegment;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } nle_endTime;
@property (copy, nonatomic) NSNumber *movieInputFillType;
@property (copy, nonatomic) NSNumber *assetRotationInfo;
@property (readonly, nonatomic) IESMMCanvasConfig *canvasConfig;
@property (retain, nonatomic) IESMMCanvasSource *canvasSource;
@property (retain, nonatomic) TransformTextureVertices *transformTextureVertices;
@property (readonly, nonatomic) NLESegmentSticker_OC *sticker;
@property (readonly, nonatomic) NLESegmentInfoSticker_OC *infoSticker;
@property (readonly, nonatomic) NLESegmentImageSticker_OC *imageSticker;
@property (readonly, nonatomic) NLESegmentSubtitleSticker_OC *lyricSticker;
@property (readonly, nonatomic) NLESegmentSticker_OC *captionSticker;
@property (readonly, nonatomic) NLESegmentSticker_OC *captionInfoSticker;
@property (readonly, nonatomic) NLESegmentTextSticker_OC *textSticker;
@property (readonly, nonatomic) NLESegmentTimeEffect_OC *timeEffect;
@property (readonly, nonatomic) NLESegmentTextTemplate_OC *textTemplateSticker;
@property (readonly, nonatomic) NLESegmentMV_OC *mv;
@property (readonly, nonatomic) IESMMMVResource *mvResouce;
@property (retain, nonatomic) NSNumber *acc_originVolumeRatio;
@property (nonatomic) struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLESegment_OC *segment;
@property (retain, nonatomic) NLEResourceNode_OC *pinAlgorithmFile;
@property (retain, nonatomic) NLESegmentTransition_OC *endTransition;
@property (retain, nonatomic) NLETrackSlot_OC *renderProxy;
@property (copy, nonatomic) NSArray *keyframeUUIDList;

+ (struct { long long x0; int x1; unsigned int x2; long long x3; })dve_transitionRequireMinSlotDuration;
+ (id)videoTrackSlotWithAsset:(id)arg0 nle:(id)arg1;
+ (id)videoTrackSlotWithPictureURL:(id)arg0 duration:(double)arg1 nle:(id)arg2;
+ (id)imageStickerWithResoucePath:(id)arg0 URS:(id)arg1 effectInfo:(id)arg2 userInfo:(id)arg3 draftFolder:(id)arg4;
+ (id)infoStickerWithResoucePath:(id)arg0 URS:(id)arg1 effectInfo:(id)arg2 userInfo:(id)arg3 draftFolder:(id)arg4;
+ (id)audioTrackSlotWithAsset:(id)arg0 nle:(id)arg1;
+ (id)mvTrackSlotWithResouce:(id)arg0 draftFolder:(id)arg1;
+ (id)mvMusicSlotWithMusicPath:(id)arg0 audioClipRange:(id)arg1 draftFolder:(id)arg2;
+ (id)slotWithBeatsTracking:(id)arg0 draftFolder:(id)arg1;
+ (id)placeHolderAudioSlotForResourceType:(unsigned long long)arg0;
+ (id)nodeWithURS:(id)arg0 withResoucePath:(id)arg1 draftFolder:(id)arg2;
+ (id)stickerWithStickerTrackSlot:(id)arg0 NLEModel:(id)arg1;
+ (id)composerFilterTrackSlotWithURS:(id)arg0 filterName:(id)arg1 effectExtra:(id)arg2 effectTags:(id)arg3 intensity:(double)arg4;
+ (id)normalFilterTrackSlotWithURS:(id)arg0 filterName:(id)arg1 intensity:(double)arg2;
+ (id)captionInfoStickerTrackSlot;
+ (id)captionStickerTrackSlot;
+ (id)textStickerTrackSlotWithUserInfo:(id)arg0;
+ (id)lyricsStickerWithResoucePath:(id)arg0 URS:(id)arg1 effectInfo:(id)arg2 userInfo:(id)arg3 draftFolder:(id)arg4;
+ (id)stickerTrackSlotWithSticker:(id)arg0 draftFolder:(id)arg1;
+ (id)p_fixVEResoucePath:(id)arg0 draftFolder:(id)arg1;
+ (id)textTemplateStickerWithResoucePath:(id)arg0 draftFolder:(id)arg1 dependeResourceString:(id)arg2 textParam:(id)arg3 sticker:(id)arg4;
+ (id)p_lyricsTrackSlotWithSticker:(id)arg0 URS:(id)arg1 resoucePath:(id)arg2 draftFolder:(id)arg3;
+ (id)brushStickerWithResoucePath:(id)arg0 effectInfo:(id)arg1 userInfo:(id)arg2 draftFolder:(id)arg3;
+ (id)textTemplateStickerWithStickerTrackSlot:(id)arg0 NLEModel:(id)arg1;
+ (id)videoTrackSlotWithPictureURL:(id)arg0 nle:(id)arg1;
+ (id)gifTrackSlotWithPictureURLs:(id)arg0 nle:(id)arg1;

- (void)setExtra:(id)arg0;
- (id)mv;
- (id)dve_videoSegment;
- (id)dve_splitRefName;
- (id)dve_audioSegment;
- (void)setEndTransition:(id)arg0;
- (id)getVideoAnims;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })dve_sourceTimeRange;
- (void)setDve_sourceTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0;
- (double)dve_speed;
- (void)dve_updateVideoAnimationValueIfNeed;
- (void)dve_updateTransition:(id)arg0;
- (id)dve_effectSegment;
- (id)dve_beatPoints;
- (void)setDve_beatPoints:(id)arg0;
- (void)setDve_splitRefName:(id)arg0;
- (id)audioFilter;
- (void)setSegmentAudio:(id)arg0;
- (void)setSegmentVideo:(id)arg0;
- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })arg0;
- (void)setSegmentEffect:(id)arg0;
- (id)getKeyframe;
- (void)clearEffect;
- (id)getEffect;
- (id)timeEffect;
- (id)getFilterByName:(id)arg0;
- (id)removeFilterByName:(id)arg0;
- (void)addKeyframe:(id)arg0;
- (void)removeKeyframe:(id)arg0;
- (id)createNLESegmentOC:(struct shared_ptr<cut::model::NLESegment> { struct NLESegment *x0; struct __shared_weak_count *x1; })arg0;
- (void)adjustKeyFrame:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setSegmentSticker:(id)arg0;
- (void)setSegmentImageSticker:(id)arg0;
- (void)setSegmentText:(id)arg0;
- (void)setSegmentTransiton:(id)arg0;
- (void)setSegmentTextTemplate:(id)arg0;
- (void)setSegmentImage:(id)arg0;
- (void)setSegmentGif:(id)arg0;
- (id)getFilter;
- (void)clearFilter;
- (void)addVideoAnim:(id)arg0;
- (void)clearVideoAnim;
- (void)removeVideoAnim:(id)arg0;
- (id)getMask;
- (void)addMask:(id)arg0;
- (void)removeMask:(id)arg0;
- (id)GetChormaChannel;
- (void)addChormaChannel:(id)arg0;
- (void)clearChormaChannel;
- (void)removeChormaChannel:(id)arg0;
- (void)setPinAlgorithmFile:(id)arg0;
- (id)pinAlgorithmFile;
- (void)setAutoFillFrame:(id)arg0;
- (id)autoFillFrame;
- (void)setAIMatting:(id)arg0;
- (id)aiMatting;
- (void)setAudioFilter:(id)arg0;
- (void)clearAudioFilter;
- (id)getSortKeyframe;
- (void)clearKeyframe;
- (id)createKeyframe;
- (id)addOrUpdateKeyframe:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 timeRange:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1 forceAdd:(BOOL)arg2;
- (void)adjustKeyFrame;
- (BOOL)removeKeyframe:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 timeRange:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1;
- (id)keyframe:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 timeRange:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1;
- (void)setKeyframeUUIDList:(id)arg0;
- (id)keyframeUUIDList;
- (void)setRenderProxy:(id)arg0;
- (id)renderProxy;
- (long long)cropRatio;
- (void)setCropRatio:(long long)arg0;
- (void)setTextParam:(id)arg0;
- (id)movieInputFillType;
- (void)setMovieInputFillType:(id)arg0;
- (id)textParam;
- (id)videoSegment;
- (id)canvasConfig;
- (id)lyricSticker;
- (id)infoSticker;
- (id)textSticker;
- (void)setStickerStartTime:(double)arg0 duration:(double)arg1 maxDuration:(double)arg2;
- (void)setVideoClipRange:(id)arg0;
- (id)canvasSource;
- (id)audioSegment;
- (void)setAssetRotationInfo:(id)arg0;
- (void)setAcc_originVolumeRatio:(id)arg0;
- (void)setAcc_hasCroppedThisTime:(BOOL)arg0;
- (void)setAcc_hasRotatedThisTime:(BOOL)arg0;
- (void)setAcc_hasFlippedThisTime:(BOOL)arg0;
- (id)videoTransition;
- (id)videoClipRange;
- (id)transformTextureVertices;
- (id)audioClipRange;
- (void)setAudioClipRange:(id)arg0;
- (void)setAcc_cropRatioType:(long long)arg0;
- (void)setAcc_cropRatioValue:(double)arg0;
- (void)setAcc_rotationValue:(double)arg0;
- (id)acc_videoSegment;
- (double)acc_rotationValue;
- (double)acc_cropRatioValue;
- (double)acc_scaleValueOriginal;
- (void)setAcc_scaleValueOriginal:(double)arg0;
- (BOOL)acc_hasCroppedThisTime;
- (BOOL)acc_hasRotatedThisTime;
- (BOOL)acc_hasFlippedThisTime;
- (long long)acc_cropRatioType;
- (BOOL)acc_cropPageHasEditedThisTime;
- (void)setNle_endTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setStickerOffset:(struct CGPoint { double x0; double x1; })arg0 normalizeConverter:(id /* block */)arg1;
- (void)setTransformTextureVertices:(id)arg0;
- (void)setCanvasSource:(id)arg0;
- (BOOL)isRelatedWithAudioAsset:(id)arg0;
- (id)mvResouce;
- (BOOL)isRelatedWithVideoAsset:(id)arg0;
- (id)acc_originVolumeRatio;
- (id)filterSegment;
- (void)resetVideoClipRange;
- (id)getSrtColor;
- (void)setSrtColorWithR:(double)arg0 g:(double)arg1 b:(double)arg2 a:(double)arg3;
- (void)setSrtString:(id)arg0 draftFolder:(id)arg1;
- (void)setVirtualStickerExtra:(id)arg0;
- (long long)setStickerAnimationType:(long long)arg0 filePath:(id)arg1 draftFolder:(id)arg2 duration:(double)arg3;
- (void)setTextStickerTextParams:(id)arg0;
- (void)setStickerAboveWithNLEModel:(id)arg0;
- (id)textTemplateSticker;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })nle_endTime;
- (void)nle_updateVideoAnimationValueIfNeed;
- (id)assetRotationInfo;
- (id)captionSticker;
- (id)bingoKey;
- (void)setBingoKey:(id)arg0;
- (void)resetAudioClipRange;
- (void)setCanvasConfig:(id)arg0 draftFolder:(id)arg1;
- (id)gifSegment;
- (void)setVideoTransition:(id)arg0;
- (id)captionInfoSticker;
- (float)stickerSizeHeight;
- (void)setStickerSizeHeight:(float)arg0;
- (float)multiOriginalVoiceRate;
- (void)setMultiOriginalVoiceRate:(float)arg0;
- (id)assetRotationInfoString;
- (void)setAssetRotationInfoString:(id)arg0;
- (id)srtString;
- (void)setSrtString:(id)arg0;
- (float)stickerSizeWidth;
- (void)setStickerSizeWidth:(float)arg0;
- (id)movieInputFillTypeString;
- (void)setMovieInputFillTypeString:(id)arg0;
- (id)virtualStickerExtra;
- (void)setAcc_cropPageHasEditedThisTime:(BOOL)arg0;
- (double)dve_durationSeconds;
- (id)segmentWithClass:(Class)arg0;
- (void)setEditBoxSizeCache:(struct CGSize { double x0; double x1; })arg0 scale:(double)arg1;
- (struct CGSize { double x0; double x1; })getEditBoxSizeCache;
- (id)effectSegment;
- (id)imageSticker;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })acc_targetTimeRange;
- (id)segment;
- (id)init;
- (void)setSegment:(id)arg0;
- (void)addFilter:(id)arg0;
- (void)removeFilter:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)endTransition;
- (id)extra;
- (id)originPath;
- (void)addEffect:(id)arg0;
- (void)setOriginPath:(id)arg0;
- (void)setStickerUserInfo:(id)arg0;
- (id)stickerUserInfo;
- (id)sticker;
- (id)sticker;
- (void)clearMask;
- (void)removeEffect:(id)arg0;
- (void)setVideoTransform:(id)arg0;
- (id)videoTransform;

@end
