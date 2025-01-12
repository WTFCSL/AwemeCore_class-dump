//
//     Generated by private class-dump
//

@class APCDTONormalizedLocation, APCDTOBasicConfig, APCDTOStickerOffsetFromCanvas, AWEStoryColor, NSString, NSNumber, NSArray;

@interface APCDTOTextStickerConfig : MTLModel <APCEditorStickerConfigProtocol, MTLJSONSerializing> {
    APCDTOBasicConfig *_basic;
    NSString *_text;
    long long _textStyle;
    NSString *_color;
    NSString *_fontName;
    double _fontSize;
    NSArray *_extraInfos;
    long long _align;
}

@property (retain, nonatomic) AWEStoryColor *colorModel;
@property (nonatomic) BOOL isTaskSticker;
@property (nonatomic) BOOL isAutoAdded;
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
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long textStyle;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *fontName;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSArray *extraInfos;
@property (nonatomic) long long align;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textStyleJSONTransformer;
+ (id)basicJSONTransformer;
+ (id)extraInfosJSONTransformer;
+ (id)alignJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setBasic:(id)arg0;
- (id)basic;
- (id)extraInfos;
- (void)setExtraInfos:(id)arg0;
- (id)textModel;
- (id)colorModel;
- (void)setColorModel:(id)arg0;
- (BOOL)deleteable;
- (void)setDeleteable:(BOOL)arg0;
- (void)setSupportedGestureType:(long long)arg0;
- (void)setIsTaskSticker:(BOOL)arg0;
- (void)setIsAutoAdded:(BOOL)arg0;
- (BOOL)isTaskSticker;
- (BOOL)isAutoAdded;
- (void)setStickerOffsetFromCanvas:(id)arg0;
- (BOOL)showSelectedHint;
- (void)setShowSelectedHint:(BOOL)arg0;
- (id)stickerOffsetFromCanvas;
- (long long)supportedGestureType;
- (BOOL)isBasedOnCanvasPositioning;
- (id)addHashtagExtraWithHashtagName:(id)arg0;
- (unsigned long long)textModelTextStyle;
- (long long)textStyle;
- (id)color;
- (id)init;
- (id)init;
- (void).cxx_destruct;
- (void)setGroupId:(id)arg0;
- (void)setFontSize:(double)arg0;
- (void)setText:(id)arg0;
- (double)fontSize;
- (double)minimumScale;
- (void)setTextStyle:(long long)arg0;
- (id)location;
- (id)groupId;
- (id)fontName;
- (void)setFontName:(id)arg0;
- (void)setLocation:(id)arg0;
- (id)text;
- (void)setMinimumScale:(double)arg0;
- (void)setColor:(id)arg0;
- (void)setEditable:(BOOL)arg0;
- (BOOL)editable;
- (long long)layerIndex;
- (void)setLayerIndex:(long long)arg0;
- (long long)align;
- (void)setAlign:(long long)arg0;

@end
