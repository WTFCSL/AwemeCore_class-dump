//
//     Generated by private class-dump
//

@class NSDictionary;

@interface ACCFlashMobUpdateConfig : APCDTOQuickFlashStickerConfig {
    unsigned long long _renderStickerType;
    NSDictionary *_extraDic;
}

@property (nonatomic) unsigned long long renderStickerType;
@property (retain, nonatomic) NSDictionary *extraDic;

- (id)extraDic;
- (void)setExtraDic:(id)arg0;
- (void)setRenderStickerType:(unsigned long long)arg0;
- (unsigned long long)renderStickerType;
- (id)buildQuickFlashModelWithConfig;
- (id)initWithQuickFlashModel:(id)arg0;
- (void)setUpWithQuickFlashModel:(id)arg0;
- (void).cxx_destruct;

@end
