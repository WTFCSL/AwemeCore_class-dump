//
//     Generated by private class-dump
//

@class NSString, NSArray, ACCDraftURS;

@interface AWEPictureToVideoInfo : MTLModel <MTLJSONSerializing> {
    BOOL _beautifyUsed;
    BOOL _composerBeautifyUsed;
    BOOL _hasDeselectionBeenMadeRecently;
    NSString *_propID;
    NSArray *_stickerTextArray;
    NSArray *_arTextArray;
    NSArray *_challengeInfos;
    NSString *_inheritCustomStickerId;
    NSString *_customStickerId;
    NSString *_customizedBusinessExtra;
    NSString *_currentCustomPropExportPath;
    NSString *_currentCustomPropIconExportPath;
    ACCDraftURS *_currentCustomPropExportURS;
    ACCDraftURS *_currentCustomPropIconExportURS;
    NSString *_propExportTaskId;
    long long _editPageButtonStyle;
    NSString *_composerBeautifyInfo;
    NSString *_composerBeautifyEffectInfo;
    NSString *_colorFilterName;
    NSString *_colorFilterId;
    long long _cameraPosition;
    NSString *_welfareActivityID;
    NSString *_filterSelectSource;
    unsigned long long _cameraFlashMode;
}

@property (copy, nonatomic) NSString *propID;
@property (copy, nonatomic) NSArray *stickerTextArray;
@property (copy, nonatomic) NSArray *arTextArray;
@property (copy, nonatomic) NSArray *challengeInfos;
@property (copy, nonatomic) NSString *inheritCustomStickerId;
@property (copy, nonatomic) NSString *customStickerId;
@property (copy, nonatomic) NSString *customizedBusinessExtra;
@property (copy, nonatomic) NSString *currentCustomPropExportPath;
@property (copy, nonatomic) NSString *currentCustomPropIconExportPath;
@property (retain, nonatomic) ACCDraftURS *currentCustomPropExportURS;
@property (retain, nonatomic) ACCDraftURS *currentCustomPropIconExportURS;
@property (copy, nonatomic) NSString *propExportTaskId;
@property (nonatomic) long long editPageButtonStyle;
@property (nonatomic) BOOL beautifyUsed;
@property (nonatomic) BOOL composerBeautifyUsed;
@property (copy, nonatomic) NSString *composerBeautifyInfo;
@property (copy, nonatomic) NSString *composerBeautifyEffectInfo;
@property (copy, nonatomic) NSString *colorFilterName;
@property (copy, nonatomic) NSString *colorFilterId;
@property (nonatomic) BOOL hasDeselectionBeenMadeRecently;
@property (nonatomic) long long cameraPosition;
@property (copy, nonatomic) NSString *welfareActivityID;
@property (copy, nonatomic) NSString *filterSelectSource;
@property (nonatomic) unsigned long long cameraFlashMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)challengeInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)customizedBusinessExtra;
- (void)setCustomizedBusinessExtra:(id)arg0;
- (id)propExportTaskId;
- (void)setPropExportTaskId:(id)arg0;
- (id)welfareActivityID;
- (BOOL)hasDeselectionBeenMadeRecently;
- (void)setHasDeselectionBeenMadeRecently:(BOOL)arg0;
- (void)setColorFilterId:(id)arg0;
- (id)colorFilterId;
- (id)challengeInfos;
- (id)customStickerId;
- (id)currentCustomPropExportPath;
- (id)currentCustomPropIconExportPath;
- (id)currentCustomPropExportURS;
- (id)currentCustomPropIconExportURS;
- (id)inheritCustomStickerId;
- (id)colorFilterName;
- (id)composerBeautifyEffectInfo;
- (id)initWithPic2VideoInfo:(id)arg0;
- (void)setCustomStickerId:(id)arg0;
- (void)setCurrentCustomPropExportURS:(id)arg0;
- (void)setCurrentCustomPropIconExportURS:(id)arg0;
- (id)pic2VideoInfo;
- (void)setColorFilterName:(id)arg0;
- (void)setCurrentCustomPropExportPath:(id)arg0;
- (void)setCurrentCustomPropIconExportPath:(id)arg0;
- (void)setEditPageButtonStyle:(long long)arg0;
- (void)setStickerTextArray:(id)arg0;
- (void)setChallengeInfos:(id)arg0;
- (void)setWelfareActivityID:(id)arg0;
- (void)setArTextArray:(id)arg0;
- (void)setInheritCustomStickerId:(id)arg0;
- (id)stickerTextArray;
- (id)arTextArray;
- (void)setComposerBeautifyInfo:(id)arg0;
- (id)composerBeautifyInfo;
- (void)setComposerBeautifyEffectInfo:(id)arg0;
- (BOOL)beautifyUsed;
- (void)setBeautifyUsed:(BOOL)arg0;
- (BOOL)composerBeautifyUsed;
- (void)setComposerBeautifyUsed:(BOOL)arg0;
- (void)setFilterSelectSource:(id)arg0;
- (long long)editPageButtonStyle;
- (id)filterSelectSource;
- (long long)cameraPosition;
- (void).cxx_destruct;
- (unsigned long long)cameraFlashMode;
- (void)setCameraFlashMode:(unsigned long long)arg0;
- (void)setCameraPosition:(long long)arg0;
- (id)propID;
- (void)setPropID:(id)arg0;

@end