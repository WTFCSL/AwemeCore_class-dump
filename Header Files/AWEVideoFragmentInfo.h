//
//     Generated by private class-dump
//

@class NSURL, ACCCountDownTrackParamsModel, NSValue, ACCDraftURS, NSDictionary, NSIndexPath, AWEVideoStickerSavePhotoInfo, AVAsset, NSMutableArray, NSString, AWETimeRange, NSArray, NSNumber, ACCSecurityFrameInsetsModel, UIImage;

@interface AWEVideoFragmentInfo : MTLModel <MTLJSONSerializing, ACCVideoFragmentInfoProtocol> {
    BOOL _beautify;
    BOOL _beautifyUsed;
    BOOL _composerBeautifyUsed;
    BOOL _useStabilization;
    BOOL _watermark;
    BOOL _isReshoot;
    BOOL _isCustomPropTemplate;
    BOOL hasFlashMobWhileShoot;
    BOOL _hasDeselectionBeenMadeRecently;
    BOOL _isCommerce;
    BOOL _needSelectedStickerPoi;
    BOOL _appliedUseOutputProp;
    BOOL _needAddHashTagForStory;
    BOOL _hasAutoApplyHotProp;
    BOOL _uploadStickerUsed;
    BOOL _isSupportExtractFrame;
    BOOL _hasFlowerActivitySticker;
    BOOL _hasSmartScanSticker;
    BOOL _hasRedpacketSticker;
    float _eye;
    float _recordDuration;
    float _smooth;
    float _shape;
    float _reshape;
    NSString *_background;
    long long _cameraPosition;
    NSString *_colorFilterId;
    NSString *_colorFilterName;
    NSString *_composerBeautifyEffectInfo;
    NSString *_composerBeautifyInfo;
    NSString *_musicEffect;
    NSArray *_propBindMusicIdArray;
    NSString *_propRecId;
    double _speed;
    NSString *_stickerGradeKey;
    NSString *_stickerId;
    AWEVideoStickerSavePhotoInfo *_stickerSavePhotoInfo;
    NSString *_AIImageToTextContent;
    NSNumber *_AIImageToTextContentAppearedTime;
    NSArray *_arTextArray;
    NSString *_backgroundID;
    long long _delayRecordModeType;
    long long _frameCount;
    NSMutableArray *_originalFrames;
    NSArray *_originalFramesArray;
    NSIndexPath *_propIndexPath;
    NSString *_propSelectedFrom;
    NSString *_backgroundType;
    AWETimeRange *_clipRange;
    NSString *_recordMode;
    NSString *_pic2VideoSource;
    NSURL *_stickerVideoAssetURL;
    NSArray *_stickerTextArray;
    double _stickerBGPlayedPercent;
    NSString *_inheritCustomStickerId;
    NSString *_customStickerId;
    NSString *_currentCustomPropExportPath;
    NSString *_currentCustomPropIconExportPath;
    ACCDraftURS *_currentCustomPropExportURS;
    ACCDraftURS *_currentCustomPropIconExportURS;
    NSString *_propExportTaskId;
    long long _figureAppearanceDurationInMS;
    NSString *_propTabType;
    NSArray *_effectExtraInfos;
    NSString *_customizedBusinessExtra;
    NSString *_filterSelectSource;
    NSString *_recordUUID;
    NSString *_recordVideoFilePath;
    NSString *propProvider;
    NSString *propZipSize;
    NSDictionary *propModelNames;
    unsigned long long _cameraFlashMode;
    long long _selectedLiveDuetImageIndex;
    NSArray *_challengeInfos;
    NSString *_stickerPoiId;
    NSString *_mappedShortPoiId;
    NSString *_stickerName;
    NSString *_welfareActivityID;
    long long _editPageButtonStyle;
    ACCCountDownTrackParamsModel *_countDownTrackModel;
    NSDictionary *_diyPropTrackInfo;
    NSArray *_activityTimerange;
    long long _activityType;
    NSArray *_effectTrackParams;
    NSNumber *_defaultSliderFilterValue;
    NSNumber *_sliderFilterValue;
    NSNumber *_defaultSliderMakeupValue;
    NSNumber *_sliderMakeupValue;
    NSString *_sectionName;
    long long _audioInputPort;
    NSString *_propType;
    NSString *_reshootTaskId;
    unsigned long long _sourceType;
    AVAsset *_avAsset;
    NSURL *_avAssetURL;
    UIImage *_imageAsset;
    NSURL *_imageAssetURL;
    NSValue *_clipTimeRange;
    ACCSecurityFrameInsetsModel *_frameInsetsModel;
    long long _assetOrientation;
    NSArray *_stickerImageAssetPaths;
    NSString *_stickerMatchId;
    long long _captureOrientation;
    NSArray *_propMentionStickerList;
    NSArray *_effectSensorTexts;
    NSString *_propSearchParams;
    NSString *_challengeID;
    NSString *_challengeName;
    struct CGPoint { double x; double y; } _AIImageToTextContentPosition;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _frameInset;
}

@property (copy, nonatomic) NSString *challengeID;
@property (copy, nonatomic) NSString *challengeName;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } frameInset;
@property (nonatomic) BOOL hasDeselectionBeenMadeRecently;
@property (nonatomic) long long selectedLiveDuetImageIndex;
@property (copy, nonatomic) NSArray *challengeInfos;
@property (nonatomic) BOOL isCommerce;
@property (copy, nonatomic) NSString *stickerPoiId;
@property (nonatomic) BOOL needSelectedStickerPoi;
@property (copy, nonatomic) NSString *mappedShortPoiId;
@property (copy, nonatomic) NSString *stickerName;
@property (nonatomic) BOOL appliedUseOutputProp;
@property (retain, nonatomic) NSString *welfareActivityID;
@property (nonatomic) long long editPageButtonStyle;
@property (nonatomic) BOOL needAddHashTagForStory;
@property (nonatomic) BOOL hasAutoApplyHotProp;
@property (retain, nonatomic) ACCCountDownTrackParamsModel *countDownTrackModel;
@property (copy, nonatomic) NSDictionary *diyPropTrackInfo;
@property (retain, nonatomic) NSArray *activityTimerange;
@property (nonatomic) long long activityType;
@property (nonatomic) BOOL uploadStickerUsed;
@property (copy) NSArray *effectTrackParams;
@property (nonatomic) BOOL isSupportExtractFrame;
@property (retain, nonatomic) NSNumber *defaultSliderFilterValue;
@property (retain, nonatomic) NSNumber *sliderFilterValue;
@property (retain, nonatomic) NSNumber *defaultSliderMakeupValue;
@property (retain, nonatomic) NSNumber *sliderMakeupValue;
@property (copy, nonatomic) NSString *sectionName;
@property (nonatomic) long long audioInputPort;
@property (nonatomic) BOOL hasFlowerActivitySticker;
@property (nonatomic) BOOL hasSmartScanSticker;
@property (nonatomic) BOOL hasRedpacketSticker;
@property (copy, nonatomic) NSString *propType;
@property (copy, nonatomic) NSString *reshootTaskId;
@property (nonatomic) unsigned long long sourceType;
@property (retain, nonatomic) AVAsset *avAsset;
@property (retain, nonatomic) NSURL *avAssetURL;
@property (retain, nonatomic) UIImage *imageAsset;
@property (retain, nonatomic) NSURL *imageAssetURL;
@property (retain, nonatomic) NSValue *clipTimeRange;
@property (retain, nonatomic) ACCSecurityFrameInsetsModel *frameInsetsModel;
@property (nonatomic) long long assetOrientation;
@property (copy, nonatomic) NSArray *stickerImageAssetPaths;
@property (copy, nonatomic) NSString *stickerMatchId;
@property (nonatomic) long long captureOrientation;
@property (copy, nonatomic) NSArray *propMentionStickerList;
@property (copy, nonatomic) NSArray *effectSensorTexts;
@property (copy, nonatomic) NSString *propSearchParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long cameraPosition;
@property (nonatomic) BOOL beautify;
@property (nonatomic) BOOL beautifyUsed;
@property (nonatomic) BOOL composerBeautifyUsed;
@property (copy, nonatomic) NSString *composerBeautifyInfo;
@property (copy, nonatomic) NSString *composerBeautifyEffectInfo;
@property (copy, nonatomic) NSString *colorFilterId;
@property (copy, nonatomic) NSString *colorFilterName;
@property (copy, nonatomic) NSString *recordMode;
@property (copy, nonatomic) NSString *background;
@property (copy, nonatomic) NSString *stickerId;
@property (nonatomic) BOOL isCustomPropTemplate;
@property (copy, nonatomic) NSString *inheritCustomStickerId;
@property (copy, nonatomic) NSString *customStickerId;
@property (copy, nonatomic) NSString *currentCustomPropExportPath;
@property (copy, nonatomic) NSString *currentCustomPropIconExportPath;
@property (retain, nonatomic) ACCDraftURS *currentCustomPropExportURS;
@property (retain, nonatomic) ACCDraftURS *currentCustomPropIconExportURS;
@property (copy, nonatomic) NSString *propExportTaskId;
@property (copy, nonatomic) NSString *customizedBusinessExtra;
@property (retain, nonatomic) AWEVideoStickerSavePhotoInfo *stickerSavePhotoInfo;
@property (copy, nonatomic) NSString *AIImageToTextContent;
@property (nonatomic) struct CGPoint { double x; double y; } AIImageToTextContentPosition;
@property (retain, nonatomic) NSNumber *AIImageToTextContentAppearedTime;
@property (copy, nonatomic) NSString *propRecId;
@property (copy, nonatomic) NSString *stickerGradeKey;
@property (retain, nonatomic) NSArray *propBindMusicIdArray;
@property (nonatomic) double speed;
@property (copy, nonatomic) NSString *musicEffect;
@property (nonatomic) BOOL useStabilization;
@property (nonatomic) BOOL watermark;
@property (nonatomic) BOOL isReshoot;
@property (nonatomic) float smooth;
@property (nonatomic) float reshape;
@property (nonatomic) float shape;
@property (nonatomic) float eye;
@property (nonatomic) long long frameCount;
@property (nonatomic) float recordDuration;
@property (retain, nonatomic) NSIndexPath *propIndexPath;
@property (copy, nonatomic) NSString *propSelectedFrom;
@property (copy, nonatomic) NSString *propTabType;
@property (copy, nonatomic) NSArray *arTextArray;
@property (copy, nonatomic) NSArray *stickerTextArray;
@property (retain, nonatomic) NSMutableArray *originalFrames;
@property (copy, nonatomic) NSArray *originalFramesArray;
@property (retain, nonatomic) NSURL *stickerVideoAssetURL;
@property (nonatomic) double stickerBGPlayedPercent;
@property (copy, nonatomic) NSString *backgroundID;
@property (copy, nonatomic) NSString *backgroundType;
@property (nonatomic) long long delayRecordModeType;
@property (copy, nonatomic) NSString *pic2VideoSource;
@property (retain, nonatomic) AWETimeRange *clipRange;
@property (nonatomic) long long figureAppearanceDurationInMS;
@property (copy, nonatomic) NSArray *effectExtraInfos;
@property (copy, nonatomic) NSString *filterSelectSource;
@property (nonatomic) BOOL hasFlashMobWhileShoot;
@property (copy, nonatomic) NSString *recordUUID;
@property (copy, nonatomic) NSString *recordVideoFilePath;
@property (copy, nonatomic) NSString *propProvider;
@property (copy, nonatomic) NSString *propZipSize;
@property (copy, nonatomic) NSDictionary *propModelNames;
@property (nonatomic) unsigned long long cameraFlashMode;

+ (id)clipTimeRangeJSONTransformer;
+ (id)clipRangeJSONTransformer;
+ (id)effectTrackStringWithFragmentInfos:(id)arg0 filter:(id /* block */)arg1;
+ (id)challengeInfosJSONTransformer;
+ (id)activityTimerangeJSONTransformer;
+ (id)stickerSavePhotoInfoJsonTransformer;
+ (id)effectTrackParamsJSONTransformer;
+ (id)frameInsetsModelJSONTransformer;
+ (id)countDownTrackModelJSONTransformer;
+ (id)propIndexPathJSONTransformer;
+ (id)propMentionStickerListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (float)smooth;
- (void)setRecordDuration:(float)arg0;
- (void)setWatermark:(BOOL)arg0;
- (BOOL)isCommerce;
- (void)setIsCommerce:(BOOL)arg0;
- (id)challengeName;
- (void)setChallengeName:(id)arg0;
- (void)setStickerId:(id)arg0;
- (id)propSelectedFrom;
- (void)setPropSelectedFrom:(id)arg0;
- (float)recordDuration;
- (id)stickerPoiId;
- (void)setStickerPoiId:(id)arg0;
- (id)recordMode;
- (void)setRecordMode:(id)arg0;
- (BOOL)isReshoot;
- (void)setIsReshoot:(BOOL)arg0;
- (BOOL)isSupportExtractFrame;
- (void)setIsSupportExtractFrame:(BOOL)arg0;
- (id)recordVideoFilePath;
- (void)setRecordVideoFilePath:(id)arg0;
- (id)propProvider;
- (void)setPropProvider:(id)arg0;
- (id)propZipSize;
- (void)setPropZipSize:(id)arg0;
- (id)propType;
- (void)setPropType:(id)arg0;
- (id)clipRange;
- (void)setClipRange:(id)arg0;
- (id)customizedBusinessExtra;
- (void)setCustomizedBusinessExtra:(id)arg0;
- (id)propExportTaskId;
- (void)setPropExportTaskId:(id)arg0;
- (id)stickerId;
- (void)setReshape:(float)arg0;
- (id)welfareActivityID;
- (BOOL)hasDeselectionBeenMadeRecently;
- (void)setHasDeselectionBeenMadeRecently:(BOOL)arg0;
- (void)setPropIndexPath:(id)arg0;
- (id)propIndexPath;
- (void)setPropSearchParams:(id)arg0;
- (id)propSearchParams;
- (id)originalFramesArray;
- (void)setOriginalFramesArray:(id)arg0;
- (void)setAvAssetURL:(id)arg0;
- (void)setColorFilterId:(id)arg0;
- (id)colorFilterId;
- (id)propBindMusicIdArray;
- (void)setPropBindMusicIdArray:(id)arg0;
- (id)challengeInfos;
- (id)propRecId;
- (void)setPropRecId:(id)arg0;
- (id)propTabType;
- (void)setPropTabType:(id)arg0;
- (id)avAssetURL;
- (long long)selectedLiveDuetImageIndex;
- (void)setSelectedLiveDuetImageIndex:(long long)arg0;
- (void)setImageAssetURL:(id)arg0;
- (id)imageAssetURL;
- (id)reshootTaskId;
- (void)deleteStickerSavePhotos:(id)arg0;
- (id)stickerVideoAssetURL;
- (double)stickerBGPlayedPercent;
- (id)customStickerId;
- (id)currentCustomPropExportPath;
- (id)currentCustomPropIconExportPath;
- (id)currentCustomPropExportURS;
- (id)currentCustomPropIconExportURS;
- (id)inheritCustomStickerId;
- (id)colorFilterName;
- (id)composerBeautifyEffectInfo;
- (id)effectExtraInfos;
- (id)pic2VideoSource;
- (id)backgroundID;
- (void)setCustomStickerId:(id)arg0;
- (void)setCurrentCustomPropExportURS:(id)arg0;
- (void)setCurrentCustomPropIconExportURS:(id)arg0;
- (id)dtoFragmentInfo;
- (id)stickerSavePhotoInfo;
- (void)setColorFilterName:(id)arg0;
- (id)mappedShortPoiId;
- (id)initWithDTOFragmentInfo:(id)arg0;
- (void)convertToRelativePathWithTaskID:(id)arg0;
- (void)convertToAbsolutePathWithTaskID:(id)arg0;
- (void)setAIImageToTextContent:(id)arg0;
- (void)setAIImageToTextContentPosition:(struct CGPoint { double x0; double x1; })arg0;
- (id)AIImageToTextContent;
- (struct CGPoint { double x0; double x1; })AIImageToTextContentPosition;
- (void)setAIImageToTextContentAppearedTime:(id)arg0;
- (void)setAppliedUseOutputProp:(BOOL)arg0;
- (void)setStickerVideoAssetURL:(id)arg0;
- (void)setStickerBGPlayedPercent:(double)arg0;
- (void)setCurrentCustomPropExportPath:(id)arg0;
- (void)setCurrentCustomPropIconExportPath:(id)arg0;
- (void)setNeedAddHashTagForStory:(BOOL)arg0;
- (void)setEditPageButtonStyle:(long long)arg0;
- (void)setEffectExtraInfos:(id)arg0;
- (id)effectSensorTexts;
- (void)setEffectSensorTexts:(id)arg0;
- (void)setStickerTextArray:(id)arg0;
- (void)setChallengeInfos:(id)arg0;
- (void)setWelfareActivityID:(id)arg0;
- (void)setArTextArray:(id)arg0;
- (void)setInheritCustomStickerId:(id)arg0;
- (void)setStickerGradeKey:(id)arg0;
- (void)setPropModelNames:(id)arg0;
- (void)setUploadStickerUsed:(BOOL)arg0;
- (void)setIsCustomPropTemplate:(BOOL)arg0;
- (void)setNeedSelectedStickerPoi:(BOOL)arg0;
- (void)setPic2VideoSource:(id)arg0;
- (void)setHasAutoApplyHotProp:(BOOL)arg0;
- (void)setDefaultSliderMakeupValue:(id)arg0;
- (void)setSliderMakeupValue:(id)arg0;
- (void)setDefaultSliderFilterValue:(id)arg0;
- (void)setSliderFilterValue:(id)arg0;
- (void)setDiyPropTrackInfo:(id)arg0;
- (void)setStickerMatchId:(id)arg0;
- (id)propMentionStickerList;
- (void)setPropMentionStickerList:(id)arg0;
- (id)stickerTextArray;
- (id)arTextArray;
- (void)setUseStabilization:(BOOL)arg0;
- (void)setDelayRecordModeType:(long long)arg0;
- (void)setFigureAppearanceDurationInMS:(long long)arg0;
- (void)setCountDownTrackModel:(id)arg0;
- (void)setStickerSavePhotoInfo:(id)arg0;
- (void)setFrameInsetsModel:(id)arg0;
- (void)setComposerBeautifyInfo:(id)arg0;
- (id)composerBeautifyInfo;
- (void)setComposerBeautifyEffectInfo:(id)arg0;
- (BOOL)useStabilization;
- (long long)delayRecordModeType;
- (BOOL)uploadStickerUsed;
- (long long)figureAppearanceDurationInMS;
- (id)stickerImageAssetPaths;
- (id)stickerGradeKey;
- (BOOL)hasAutoApplyHotProp;
- (id)countDownTrackModel;
- (id)frameInsetsModel;
- (id)AIImageToTextContentAppearedTime;
- (BOOL)beautifyUsed;
- (void)setBeautifyUsed:(BOOL)arg0;
- (BOOL)composerBeautifyUsed;
- (void)setComposerBeautifyUsed:(BOOL)arg0;
- (void)setEye:(float)arg0;
- (id)effectTrackParams;
- (void)setEffectTrackParams:(id)arg0;
- (void)setFilterSelectSource:(id)arg0;
- (BOOL)hasRedpacketSticker;
- (BOOL)appliedUseOutputProp;
- (id)activityTimerange;
- (void)setHasFlashMobWhileShoot:(BOOL)arg0;
- (BOOL)hasFlashMobWhileShoot;
- (id)propModelNames;
- (void)setReshootTaskId:(id)arg0;
- (void)setStickerImageAssetPaths:(id)arg0;
- (id)defaultSliderMakeupValue;
- (id)sliderMakeupValue;
- (id)defaultSliderFilterValue;
- (id)sliderFilterValue;
- (BOOL)needAddHashTagForStory;
- (long long)editPageButtonStyle;
- (BOOL)isCustomPropTemplate;
- (BOOL)beautify;
- (id)stickerMatchId;
- (id)filterSelectSource;
- (id)diyPropTrackInfo;
- (void)setupChallengeWithDictionary:(id)arg0;
- (void)setBeautify:(BOOL)arg0;
- (id)musicEffect;
- (void)setMusicEffect:(id)arg0;
- (BOOL)needSelectedStickerPoi;
- (void)setMappedShortPoiId:(id)arg0;
- (void)setActivityTimerange:(id)arg0;
- (void)setBackgroundID:(id)arg0;
- (void)setHasRedpacketSticker:(BOOL)arg0;
- (BOOL)hasFlowerActivitySticker;
- (void)setHasFlowerActivitySticker:(BOOL)arg0;
- (BOOL)hasSmartScanSticker;
- (void)setHasSmartScanSticker:(BOOL)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })frameInset;
- (void)setFrameInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setAudioInputPort:(long long)arg0;
- (id)p_convertToRelativePath:(id)arg0 withTaskID:(id)arg1;
- (id)p_convertToAbsolutePath:(id)arg0 withTaskID:(id)arg1;
- (id)originalFrames;
- (void)setOriginalFrames:(id)arg0;
- (void)setSourceType:(unsigned long long)arg0;
- (unsigned long long)sourceType;
- (void)setAvAsset:(id)arg0;
- (void)setShape:(float)arg0;
- (long long)cameraPosition;
- (id)init;
- (void)setActivityType:(long long)arg0;
- (id)background;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)backgroundType;
- (BOOL)watermark;
- (void)setCaptureOrientation:(long long)arg0;
- (long long)frameCount;
- (void)setRecordUUID:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (long long)activityType;
- (void)setBackgroundType:(id)arg0;
- (void)setBackground:(id)arg0;
- (void)setSpeed:(double)arg0;
- (id)recordUUID;
- (id)initWithSourceType:(unsigned long long)arg0;
- (float)shape;
- (void)setImageAsset:(id)arg0;
- (long long)captureOrientation;
- (id)imageAsset;
- (id)avAsset;
- (double)speed;
- (void)setFrameCount:(long long)arg0;
- (unsigned long long)cameraFlashMode;
- (void)setCameraFlashMode:(unsigned long long)arg0;
- (float)reshape;
- (long long)assetOrientation;
- (void)setAssetOrientation:(long long)arg0;
- (float)eye;
- (id)stickerName;
- (void)setStickerName:(id)arg0;
- (long long)audioInputPort;
- (id)sectionName;
- (void)setSectionName:(id)arg0;
- (void)setClipTimeRange:(id)arg0;
- (id)clipTimeRange;
- (void)setCameraPosition:(long long)arg0;
- (id)challengeID;
- (void)setChallengeID:(id)arg0;
- (void)setSmooth:(float)arg0;

@end