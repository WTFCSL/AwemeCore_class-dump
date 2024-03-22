//
//     Generated by private class-dump
//

@class NSDictionary, AVAsset, IESVideoAddEdgeData, IESMMCanvasConfig, NLEEditor_OC, NSString, IESMMImageMovieInfo, IESMMTranscoderParam, IESMMMVModel, NLEEditorConfiguration, NSArray, VEEditorSession, HTSVideoData;

@protocol NLEMediaProtocol <NSObject>

+ (id)getAlgorithmConfigsWithMultiImage:(id)arg0 andImgPaths:(id)arg1;
+ (id)getAlgorithmConfigs:(id)arg0 andImgPaths:(id)arg1;

@property (readonly, nonatomic) VEEditorSession *veEditor;
@property (readonly, nonatomic) HTSVideoData *veVideoData;
@property (readonly, nonatomic) BOOL enableMultiTrack;
@property (nonatomic) unsigned long long videoDurationMode;
@property (copy, nonatomic) id /* block */ reverseBlock;
@property (retain, nonatomic) NLEEditorConfiguration *nleConfig;
@property (retain, nonatomic) IESVideoAddEdgeData *previewEdge;
@property (readonly, copy, nonatomic) id /* block */ normalizeConverter;
@property (retain, nonatomic) IESVideoAddEdgeData *infoStickerAddEdgeData;
@property (retain, nonatomic) NLEEditor_OC *editor;
@property (nonatomic) long long status;
@property (readonly, nonatomic) double currentPlayerTime;
@property (nonatomic) double realVideoFramePts;
@property (retain, nonatomic) IESMMMVModel *veMVModel;
@property (retain, nonatomic) IESMMImageMovieInfo *imageMovieInfo;
@property (retain, nonatomic) NSArray *arrViews;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } videoSize;
@property (nonatomic) unsigned long long compileType;
@property (nonatomic) long long colorSpace;
@property (copy, nonatomic) id /* block */ mixPlayerCompleteBlock;
@property (copy, nonatomic) id /* block */ playToEndBlock;
@property (readonly) BOOL isInited;
@property (readonly, nonatomic) BOOL shouldPrepare;
@property (readonly, nonatomic) double totalVideoDuration;
@property (readonly, nonatomic) double totalVideoDurationAddTimeMachine;
@property (readonly, nonatomic) double maxTrackDuration;
@property (readonly, nonatomic) double totalBGAudioDuration;
@property (copy, nonatomic) id /* block */ stickerChangeEvent;
@property (copy, nonatomic) id /* block */ nleConvertUserInfoBlock;
@property (copy, nonatomic) id /* block */ effectPathBlock;
@property (nonatomic) BOOL disableAutoUpdateCanvasSize;
@property (nonatomic) BOOL isFastImport;
@property (nonatomic) BOOL isRecordFromCamera;
@property (nonatomic) BOOL isMicMuted;
@property (copy, nonatomic) NSDictionary *metaRecordInfo;
@property (copy, nonatomic) NSDictionary *dataInfo;
@property (retain, nonatomic) IESMMCanvasConfig *preferCanvasConfig;
@property (nonatomic) struct CGSize { double x0; double x1; } normalizeSize;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) BOOL notSupportCrossplat;
@property (nonatomic) BOOL crossplatCompile;
@property (nonatomic) BOOL crossplatInput;
@property (nonatomic) BOOL crossplatMultiTrack;
@property (nonatomic) BOOL disableMetadataInfo;
@property (nonatomic) int previewFrameRate;
@property (nonatomic) long long contentSource;
@property (copy, nonatomic) NSString *extraMetaInfo;
@property (nonatomic) struct CGSize { double x0; double x1; } canvasSize;
@property (copy, nonatomic) NSString *musicID;
@property (nonatomic) BOOL isDetectMode;
@property (readonly, copy, nonatomic) NSArray *effect_timeRange;
@property (readonly, copy, nonatomic) NSArray *effect_operationTimeRange;
@property (retain, nonatomic) AVAsset *effect_reverseAsset;
@property (readonly, copy, nonatomic) NSDictionary *effect_dictionary;
@property (readonly, nonatomic) double effect_videoDuration;
@property (retain, nonatomic) AVAsset *videoHeader;
@property (retain, nonatomic) AVAsset *endingWaterMarkAudio;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } importTransform;
@property (retain, nonatomic) IESMMTranscoderParam *transParam;
@property (nonatomic) BOOL bCompleteCommit;
@property (nonatomic) BOOL stopRenderWhenNotActive;

- (void)setExtraInfo:(id)arg0;
- (unsigned long long)getEffectHandle;
- (BOOL)getColorFilterIntensity:(id)arg0 outIntensity:(float *)arg1;
- (BOOL)updateComposerNode:(id)arg0 key:(id)arg1 value:(double)arg2;
- (long long)setStickerPreviewMode:(id)arg0 previewMode:(int)arg1;
- (struct CGSize { double x0; double x1; })getstickerEditBoxSizeNormaliz:(long long)arg0;
- (id)getInfoStickers;
- (struct CGSize { double x0; double x1; })getstickerEditBoxSize:(long long)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getstickerEditBoundBox:(long long)arg0;
- (struct CGSize { double x0; double x1; })getInfoStickerSize:(long long)arg0;
- (double)getStickerRotation:(long long)arg0;
- (struct CGPoint { double x0; double x1; })getStickerPosition:(long long)arg0;
- (BOOL)getStickerVisible:(long long)arg0;
- (BOOL)getInfoStickerIsDynamic:(long long)arg0;
- (BOOL)isInfoStickerOutOfBounds;
- (void)cancelPin:(long long)arg0;
- (long long)getStickerPinStatus:(long long)arg0;
- (id)getTemplateStickerTextParams:(long long)arg0;
- (BOOL)isAnimationSticker:(long long)arg0;
- (void)startChangeStickerDuration:(long long)arg0;
- (void)stopChangeStickerDuration:(long long)arg0;
- (void)setInfoStickerRestoreMode:(long long)arg0;
- (void)updateSticker:(long long)arg0;
- (void)setStickerLayer:(long long)arg0 layer:(long long)arg1;
- (id)musicID;
- (BOOL)isFastImport;
- (void)appendComposerNodesWithTags:(id)arg0;
- (void)removeComposerNodesWithTags:(id)arg0;
- (BOOL)replaceComposerNodesWithNewTag:(id)arg0 old:(id)arg1;
- (void)setEffectLoadStatusBlock:(id /* block */)arg0;
- (void)setDataInfo:(id)arg0;
- (double)maxTrackDuration;
- (void)resetPlayerWithViews:(id)arg0;
- (double)currentPlayerTime;
- (void)setMusicID:(id)arg0;
- (unsigned long long)getEffectHandle:(BOOL)arg0;
- (long long)exportResource:(id)arg0 isGlobal:(BOOL)arg1;
- (BOOL)isInited;
- (void)setPlayerVolume:(float)arg0;
- (void)setDisableAutoUpdateCanvasSize:(BOOL)arg0;
- (id)getBrushStickerInfoWithSlotId:(id)arg0;
- (void)saveBrushStickerToPNGWithSlotId:(id)arg0 savePath:(id)arg1 completion:(id /* block */)arg2;
- (void)setStickerEditMode:(BOOL)arg0;
- (long long)stickerIdForSlot:(id)arg0;
- (id)veVideoData;
- (id)getVideoProcess;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 seekMode:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setMixPlayerCompleteBlock:(id /* block */)arg0;
- (void)setFirstRenderBlk:(id /* block */)arg0;
- (void)setUserInfo:(id)arg0 forStickerSlot:(id)arg1;
- (unsigned long long)compileType;
- (void)setCompileType:(unsigned long long)arg0;
- (void)setFailedToPlayBlk:(id /* block */)arg0;
- (void)setAutoRepeatPlay:(BOOL)arg0;
- (id)arrViews;
- (void)pauseAsync;
- (void)syncRefreshCurrentFrame;
- (BOOL)shouldPrepare;
- (BOOL)stopRenderWhenNotActive;
- (void)setStopRenderWhenNotActive:(BOOL)arg0;
- (void)activeEditor:(id /* block */)arg0;
- (void)clearForcedVideoData;
- (id)previewEdge;
- (BOOL)enableMultiTrack;
- (void)setBCompleteCommit:(BOOL)arg0;
- (void)setNleConfig:(id)arg0;
- (BOOL)isRecordFromCamera;
- (void)setIsRecordFromCamera:(BOOL)arg0;
- (id)imageMovieInfo;
- (void)setImageMovieInfo:(id)arg0;
- (void)setVideoDurationMode:(unsigned long long)arg0;
- (void)resetPlayerWithViews:(id)arg0 opaque:(BOOL)arg1;
- (void)setArrViews:(id)arg0;
- (id)nleConfig;
- (void)pauseAsync:(BOOL)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })mapOriginalPositionToTimeEffectPosition:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (double)totalVideoDuration;
- (id)transParam;
- (void)setTransParam:(id)arg0;
- (id)extraMetaInfo;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })mapTimeEffectPositionToOriginalPosition:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setRealVideoFramePts:(double)arg0;
- (BOOL)autoRepeatPlay;
- (id /* block */)mixPlayerCompleteBlock;
- (id /* block */)playToEndBlock;
- (unsigned long long)videoDurationMode;
- (void)setCanvasMinDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 needPrepare:(BOOL)arg1;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 seekMode:(unsigned long long)arg1;
- (struct CGSize { double x0; double x1; })getVideoSize;
- (double)realVideoFramePts;
- (void)setEditBoxSizeCache:(struct CGSize { double x0; double x1; })arg0 scale:(double)arg1 forStickerSlot:(id)arg2;
- (id)slotIdForSticker:(long long)arg0;
- (id)userInfoForStickerSlot:(id)arg0;
- (double)totalVideoDurationAddTimeMachine;
- (void)clearEditoReverseAsset;
- (void)resetPreModel;
- (void)setNLEEditor:(id)arg0;
- (void)clearVideoData;
- (void)resetPlayerViewSize:(struct CGSize { double x0; double x1; })arg0;
- (double)getLastPlayFramRate;
- (double)nleTotalVideoDuration:(id)arg0;
- (id)getFirstRenderTime;
- (BOOL)useGlobalEffectGroup;
- (id)slotNameForEffectRangID:(id)arg0;
- (id)effectRangIDForSlot:(id)arg0;
- (void)startEffectWithPathId:(id)arg0 withTime:(double)arg1;
- (void)stopEffectwithTime:(double)arg0;
- (void)setAIMattingCallback:(id)arg0;
- (void)saveBrushStickerContextWithSlotName:(id)arg0 draftPath:(id)arg1 completion:(id /* block */)arg2;
- (void)updateBrushStickerToSnapshotWithSlotId:(id)arg0;
- (void)preparePin;
- (void)beginInfoStickerPin:(long long)arg0;
- (id)getInfoStickerPinDataFile:(long long)arg0;
- (void)syncForceModeRefreshCurrentFrame;
- (id)textTemplateInfoForSlot:(id)arg0;
- (void)removeUserInfo:(id)arg0;
- (void)setVEOperateCallback:(id)arg0;
- (void)updateStickerAnimation:(id)arg0;
- (void)disableStickerAnimation:(id)arg0;
- (void)addStickerByUIImage:(id)arg0 letterInfo:(id)arg1 duration:(double)arg2;
- (void)getStickerId:(long long)arg0 props:(id)arg1;
- (id)stickerBoxWithSlot:(id)arg0;
- (void)setCaptionStickerImageBlock:(id /* block */)arg0;
- (void)BuildTempEditorStatus:(unsigned long long)arg0;
- (id)assetFromSlotOC:(id)arg0;
- (void)setHighFrameRateRender:(BOOL)arg0;
- (long long)getPreviewModeType:(id)arg0;
- (void)setPreviewModeType:(long long)arg0 toView:(id)arg1;
- (void)setAutoPlayWhenAppBecomeActive:(BOOL)arg0;
- (BOOL)autoPlayWhenAppBecomeActive;
- (void)setMixPlayerDisableAutoResume:(BOOL)arg0;
- (void)startEditMode:(id)arg0 completeBlock:(id /* block */)arg1;
- (void)lockSeekVideoClip:(id)arg0;
- (void)unLockSeekVideoClip;
- (void)seekToTimeMachineTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (struct CGSize { double x0; double x1; })getNewFrameSize;
- (void)updateVideoData:(id)arg0 completeBlock:(id /* block */)arg1;
- (BOOL)updateMutipleComposerNodes:(id)arg0 keys:(id)arg1 values:(id)arg2 track:(id)arg3;
- (BOOL)switchColorFilterIntensity:(id)arg0 inFilterPath:(id)arg1 inPosition:(float)arg2 inLeftIntensity:(float)arg3 inRightIntensity:(float)arg4 track:(id)arg5;
- (void)refreshAudioPlayer;
- (int)setSrcMaxHwRatio:(float)arg0;
- (void)effect_cleanOperation;
- (void)effect_reCalculateEffectiveTimeRange;
- (double)effect_currentTimeMachineDurationWithType:(long long)arg0;
- (void)setMetaData:(id)arg0 recordInfo:(long long)arg1 MD5:(id)arg2 needStore:(BOOL)arg3;
- (long long)effect_TimeRepeatCount;
- (double)effect_TimeSlowSpeed;
- (void)activeEffectMessageCenter;
- (void)inactiveEffectMessageCenter;
- (void)observerEffectMessageCenterVePublicCallback:(id /* block */)arg0 veOcCallback:(id)arg1;
- (void)removeObserverEffectMessageCenterCallback:(id)arg0;
- (void)setEffectMessageCallback:(id /* block */)arg0 flag:(unsigned char)arg1;
- (void)removeEffectMessageCallback;
- (void)setCompileTargetFileInfoCallback:(id /* block */)arg0;
- (void)setInvalidMetaDataCallBack:(id /* block */)arg0;
- (void)setInvalidMetadataTimeCallBack:(id /* block */)arg0;
- (int)addMetadata:(id)arg0 value:(id)arg1;
- (void)setAssetRotationInfo:(id)arg0 forSlot:(id)arg1;
- (id)assetRotationInfoOfSlot:(id)arg0;
- (void)setBingoKey:(id)arg0 forSlot:(id)arg1;
- (id)bingoKeyOfSlot:(id)arg0;
- (void)setMovieInputFillType:(id)arg0 forSlot:(id)arg1;
- (id)movieInputFillTypeOfSlot:(id)arg0;
- (id)movieFillTypeOfSlot:(id)arg0;
- (BOOL)isNewImageMovie;
- (void)setImageMovieInfoWithUIImages:(id)arg0 imageShowDuration:(id)arg1;
- (void)setPhotoAssetsImageInfoWithImage:(id)arg0 slot:(id)arg1;
- (void)clearPhotoAssetsImageInfo;
- (void)setAudioReaderFirstFrameCallback:(id /* block */)arg0;
- (struct CGSize { double x0; double x1; })getMVResolution;
- (id)getMVOriginalAudioAsset;
- (int)applyLensOneKeyHdrDetect;
- (id)effectDrawer;
- (id)bingoManager;
- (double)getAspectScaleForSlot:(id)arg0 rotation:(double)arg1;
- (void)setNthRenderBlk:(id /* block */)arg0;
- (void)setTemplateFirstRenderBlk:(id /* block */)arg0;
- (void)setPrepareDoneBlk:(id /* block */)arg0;
- (void)completeConfigTemplate;
- (void)enableKeyFrameCallback;
- (void)addKeyFrameListener:(id)arg0;
- (id)refreshAllKeyFrameInfo:(id)arg0 pts:(long long)arg1 inSlot:(id)arg2;
- (id)slotWithCanvasKeyFrameInfo:(id)arg0 slot:(id)arg1;
- (double)audioVolumeKeyFrameInfoWithPTS:(unsigned long long)arg0 slot:(id)arg1;
- (id)maskSegmentFromKeyFrameInfo:(id)arg0 forSlot:(id)arg1;
- (id)keyFrameInfoAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setAfterUpdateVideoDataBlock:(id /* block */)arg0;
- (id)getAllKeyFramesAtPts:(unsigned long long)arg0;
- (double)getaudioVolumeKeyFrameAtPts:(unsigned long long)arg0 withAVAsset:(id)arg1;
- (id)maskCacheForSlot:(id)arg0;
- (id)getCachedFeaturesForVideoSlotOC:(id)arg0;
- (id)getCachedChromaForVideoSlot:(id)arg0;
- (id /* block */)getNLEStickerRecoverActionBlock;
- (void)setImageResizeWidth:(int)arg0 height:(int)arg1 resFillMode:(long long)arg2 resizeAlgorithm:(long long)arg3;
- (int)setPreviewFps:(int)arg0 isDynamicAdjust:(BOOL)arg1;
- (long long)exportResource:(id)arg0;
- (long long)sendEffectMsg:(long long)arg0 arg1:(long long)arg1 arg2:(long long)arg2 arg3:(id)arg3;
- (long long)sendEffectMsg:(long long)arg0 isGlobal:(BOOL)arg1 arg1:(long long)arg2 arg2:(long long)arg3 arg3:(id)arg4;
- (long long)setRenderCachePath:(id)arg0 path:(id)arg1;
- (id)veEditor;
- (void)setReverseBlock:(id /* block */)arg0;
- (void)setPreviewEdge:(id)arg0;
- (id /* block */)normalizeConverter;
- (id)infoStickerAddEdgeData;
- (void)setInfoStickerAddEdgeData:(id)arg0;
- (id)veMVModel;
- (void)setVeMVModel:(id)arg0;
- (void)setPlayToEndBlock:(id /* block */)arg0;
- (double)totalBGAudioDuration;
- (id /* block */)stickerChangeEvent;
- (void)setStickerChangeEvent:(id /* block */)arg0;
- (id /* block */)nleConvertUserInfoBlock;
- (void)setNleConvertUserInfoBlock:(id /* block */)arg0;
- (id /* block */)effectPathBlock;
- (void)setEffectPathBlock:(id /* block */)arg0;
- (BOOL)disableAutoUpdateCanvasSize;
- (void)setIsFastImport:(BOOL)arg0;
- (BOOL)isMicMuted;
- (void)setIsMicMuted:(BOOL)arg0;
- (id)metaRecordInfo;
- (void)setMetaRecordInfo:(id)arg0;
- (id)dataInfo;
- (id)preferCanvasConfig;
- (void)setPreferCanvasConfig:(id)arg0;
- (struct CGSize { double x0; double x1; })normalizeSize;
- (void)setNormalizeSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)notSupportCrossplat;
- (void)setNotSupportCrossplat:(BOOL)arg0;
- (BOOL)crossplatCompile;
- (void)setCrossplatCompile:(BOOL)arg0;
- (BOOL)crossplatInput;
- (void)setCrossplatInput:(BOOL)arg0;
- (BOOL)crossplatMultiTrack;
- (void)setCrossplatMultiTrack:(BOOL)arg0;
- (BOOL)disableMetadataInfo;
- (void)setDisableMetadataInfo:(BOOL)arg0;
- (void)setExtraMetaInfo:(id)arg0;
- (BOOL)isDetectMode;
- (void)setIsDetectMode:(BOOL)arg0;
- (id)effect_timeRange;
- (id)effect_operationTimeRange;
- (id)effect_reverseAsset;
- (void)setEffect_reverseAsset:(id)arg0;
- (id)effect_dictionary;
- (double)effect_videoDuration;
- (id)videoHeader;
- (void)setVideoHeader:(id)arg0;
- (id)endingWaterMarkAudio;
- (void)setEndingWaterMarkAudio:(id)arg0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })importTransform;
- (void)setImportTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0;
- (BOOL)bCompleteCommit;
- (void)refresh;
- (void)setColorSpace:(long long)arg0;
- (long long)status;
- (void)setContentSource:(long long)arg0;
- (long long)contentSource;
- (void)stop;
- (id)identifier;
- (void)setCanvasSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setStatus:(long long)arg0;
- (long long)colorSpace;
- (BOOL)isHDR;
- (int)setMetadata:(id)arg0;
- (void)prepare;
- (void)setMessageHandler:(id /* block */)arg0;
- (void)start;
- (void)pause;
- (struct CGSize { double x0; double x1; })canvasSize;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (id)editor;
- (void)setIdentifier:(id)arg0;
- (void)setEditor:(id)arg0;
- (id)audioSession;
- (void)setStickerUserInfo:(id)arg0;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 completionHandler:(id /* block */)arg1;
- (id)extraInfo;
- (id)exportSession;
- (id)captureOutput;
- (struct CGSize { double x0; double x1; })videoSize;
- (id /* block */)reverseBlock;
- (void)setPreviewModeType:(long long)arg0;
- (int)previewFrameRate;
- (void)setPreviewFrameRate:(int)arg0;

@end
