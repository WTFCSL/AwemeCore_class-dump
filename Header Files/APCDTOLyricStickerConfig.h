//
//     Generated by private class-dump
//

@class APCDTONormalizedLocation, NSArray, APCDTOBasicConfig, APCDTOStickerOffsetFromCanvas, IESEffectModel, NSNumber, NSString;

@interface APCDTOLyricStickerConfig : MTLModel <APCEditorStickerConfigProtocol, MTLJSONSerializing> {
    APCDTOBasicConfig *_basic;
    NSString *_effectIdentifer;
}

@property (retain, nonatomic) IESEffectModel *downloadedEffect;
@property (copy, nonatomic) NSArray *effectInfos;
@property (nonatomic) BOOL isFromMusicShare;
@property (retain, nonatomic) APCDTOBasicConfig *basic;
@property (retain, nonatomic) APCDTONormalizedLocation *location;
@property (retain, nonatomic) APCDTOStickerOffsetFromCanvas *stickerOffsetFromCanvas;
@property (nonatomic) long long supportedGestureType;
@property (nonatomic) BOOL deleteable;
@property (nonatomic) BOOL editable;
@property (retain, nonatomic) NSNumber *groupId;
@property (nonatomic) double minimumScale;
@property (nonatomic) long long layerIndex;
@property (nonatomic) BOOL showSelectedHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) APCDTOBasicConfig *basic;
@property (copy, nonatomic) NSString *effectIdentifer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)basicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setBasic:(id)arg0;
- (id)basic;
- (BOOL)deleteable;
- (void)setDeleteable:(BOOL)arg0;
- (void)setSupportedGestureType:(long long)arg0;
- (void)setEffectInfos:(id)arg0;
- (id)effectInfos;
- (void)setDownloadedEffect:(id)arg0;
- (void)setIsFromMusicShare:(BOOL)arg0;
- (id)downloadedEffect;
- (BOOL)isFromMusicShare;
- (void)setStickerOffsetFromCanvas:(id)arg0;
- (BOOL)showSelectedHint;
- (void)setShowSelectedHint:(BOOL)arg0;
- (id)stickerOffsetFromCanvas;
- (long long)supportedGestureType;
- (id)effectIdentifer;
- (void)setEffectIdentifer:(id)arg0;
- (void).cxx_destruct;
- (void)setGroupId:(id)arg0;
- (double)minimumScale;
- (id)location;
- (id)groupId;
- (void)setLocation:(id)arg0;
- (void)setMinimumScale:(double)arg0;
- (void)setEditable:(BOOL)arg0;
- (BOOL)editable;
- (long long)layerIndex;
- (void)setLayerIndex:(long long)arg0;

@end
