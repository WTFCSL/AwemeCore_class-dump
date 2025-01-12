//
//     Generated by private class-dump
//

@class AUCDTOFeatureEditorSticker, AUCDTOFeatureEditorCanvas, AUCDTOFeatureEditorVoiceChanger, AUCDTOFeatureEditorClip, AUCDTOFeatureEditorEffect, AUCDTOFeatureEditorFilter, AUCDTOFeatureEditorMusic, AUCDTOFeatureEditorAutoCaption, AUCDTOFeatureEditorQuickSave, AUCDTOFeatureEditorHDR, AUCDTOFeatureEditorThumb;

@interface AUCDTOFeatureEditor : MTLModel {
    AUCDTOFeatureEditorMusic *_music;
    AUCDTOFeatureEditorVoiceChanger *_voiceChanger;
    AUCDTOFeatureEditorSticker *_sticker;
    AUCDTOFeatureEditorCanvas *_canvas;
    AUCDTOFeatureEditorFilter *_filter;
    AUCDTOFeatureEditorHDR *_HDR;
    AUCDTOFeatureEditorQuickSave *_quickSave;
    AUCDTOFeatureEditorClip *_clip;
    AUCDTOFeatureEditorAutoCaption *_autoCaption;
    AUCDTOFeatureEditorEffect *_effect;
    AUCDTOFeatureEditorThumb *_thumb;
}

@property (retain, nonatomic) AUCDTOFeatureEditorMusic *music;
@property (retain, nonatomic) AUCDTOFeatureEditorVoiceChanger *voiceChanger;
@property (retain, nonatomic) AUCDTOFeatureEditorSticker *sticker;
@property (retain, nonatomic) AUCDTOFeatureEditorCanvas *canvas;
@property (retain, nonatomic) AUCDTOFeatureEditorFilter *filter;
@property (retain, nonatomic) AUCDTOFeatureEditorHDR *HDR;
@property (retain, nonatomic) AUCDTOFeatureEditorQuickSave *quickSave;
@property (retain, nonatomic) AUCDTOFeatureEditorClip *clip;
@property (retain, nonatomic) AUCDTOFeatureEditorAutoCaption *autoCaption;
@property (retain, nonatomic) AUCDTOFeatureEditorEffect *effect;
@property (retain, nonatomic) AUCDTOFeatureEditorThumb *thumb;

- (void)setQuickSave:(id)arg0;
- (void)setVoiceChanger:(id)arg0;
- (void)setAutoCaption:(id)arg0;
- (id)voiceChanger;
- (id)quickSave;
- (id)autoCaption;
- (id)music;
- (void)setFilter:(id)arg0;
- (id)effect;
- (id)filter;
- (void).cxx_destruct;
- (void)setEffect:(id)arg0;
- (void)setMusic:(id)arg0;
- (void)setThumb:(id)arg0;
- (void)setCanvas:(id)arg0;
- (id)thumb;
- (id)canvas;
- (id)clip;
- (void)setSticker:(id)arg0;
- (id)sticker;
- (id)HDR;
- (void)setClip:(id)arg0;
- (void)setHDR:(id)arg0;

@end
