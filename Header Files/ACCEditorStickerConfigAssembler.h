//
//     Generated by private class-dump
//

@class APCDTOLyricStickerConfig, NSMutableArray, APCDTOPoiStickerConfig;

@interface ACCEditorStickerConfigAssembler : NSObject {
    NSMutableArray *_infoStickerList;
    APCDTOPoiStickerConfig *_modernPOISticker;
    NSMutableArray *_textStickerList;
    APCDTOLyricStickerConfig *_lyricsStickerConfig;
    NSMutableArray *_quickFlashStickerList;
}

@property (retain, nonatomic) NSMutableArray *infoStickerList;
@property (retain, nonatomic) APCDTOPoiStickerConfig *modernPOISticker;
@property (retain, nonatomic) NSMutableArray *textStickerList;
@property (retain, nonatomic) APCDTOLyricStickerConfig *lyricsStickerConfig;
@property (retain, nonatomic) NSMutableArray *quickFlashStickerList;

- (void)setInfoStickerList:(id)arg0;
- (id)infoStickerList;
- (void)addTextSticker:(id /* block */)arg0;
- (void)addInfoSticker:(id /* block */)arg0;
- (void)addCustomSticker:(id /* block */)arg0;
- (void)addTextStickerConfig:(id)arg0;
- (void)addMentionSticker:(id /* block */)arg0;
- (void)addHashtagSticker:(id /* block */)arg0;
- (BOOL)addPOISticker:(id /* block */)arg0;
- (void)setupLyricsSticker:(id /* block */)arg0;
- (id)textStickerConfigList;
- (void)removeTextStickerConfig:(id)arg0;
- (void)prepareOnCompletion:(id /* block */)arg0;
- (id)infoStickerConfigList;
- (id)lyricsStickerConfig;
- (void)addStickersFromParameteriedConfig:(id)arg0;
- (void)addGlobalStickersFromGlobalStickerConfig:(id)arg0;
- (void)addStickersFromStickerConfig:(id)arg0;
- (void)setupInitialState:(id)arg0;
- (id)textStickerList;
- (id)modernPOISticker;
- (void)setModernPOISticker:(id)arg0;
- (id)quickFlashStickerList;
- (void)setLyricsStickerConfig:(id)arg0;
- (void)dispatchEffectModel:(id)arg0;
- (void)removeQuickFlashStickerConfigs;
- (id)modernPOIStickerConfig;
- (id)quickFlashStickerConfigList;
- (void)setTextStickerList:(id)arg0;
- (void)setQuickFlashStickerList:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
