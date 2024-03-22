//
//     Generated by private class-dump
//

@class NSString, NSArray, RACSubject;
@protocol ACCImageAlbumEditorSessionProtocol;

@interface ACCImageAlbumEditStickerWraper : NSObject <ACCEditBuildListener, ACCEditStickerProtocolD> {
    id /* block */ captionStickerImageBlock;
    long long fixedTopInfoSticker;
    NSArray *infoStickers;
    id<ACCImageAlbumEditorSessionProtocol> _player;
    double _textStickerVEScale;
    RACSubject *_stickerRegenerateSignal;
    NSString *_originTemplateText;
}

@property (weak, nonatomic) id<ACCImageAlbumEditorSessionProtocol> player;
@property (nonatomic) double textStickerVEScale;
@property (retain, nonatomic) RACSubject *stickerRegenerateSignal;
@property (copy, nonatomic) NSString *originTemplateText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *infoStickers;
@property (copy, nonatomic) id /* block */ captionStickerImageBlock;
@property (nonatomic) long long fixedTopInfoSticker;

- (struct CGSize { double x0; double x1; })getstickerEditBoxSize:(long long)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getstickerEditBoundBox:(long long)arg0;
- (struct CGSize { double x0; double x1; })getInfoStickerSize:(long long)arg0;
- (double)getStickerRotation:(long long)arg0;
- (struct CGPoint { double x0; double x1; })getStickerPosition:(long long)arg0;
- (BOOL)getStickerVisible:(long long)arg0;
- (void)cancelPin:(long long)arg0;
- (long long)getStickerPinStatus:(long long)arg0;
- (id)getTemplateStickerTextParams:(long long)arg0;
- (BOOL)isAnimationSticker:(long long)arg0;
- (void)startChangeStickerDuration:(long long)arg0;
- (void)stopChangeStickerDuration:(long long)arg0;
- (void)setInfoStickerRestoreMode:(long long)arg0;
- (void)updateSticker:(long long)arg0;
- (void)setStickerLayer:(long long)arg0 layer:(long long)arg1;
- (void)setSticker:(long long)arg0 startTime:(double)arg1 duration:(double)arg2;
- (void)removeInfoSticker:(long long)arg0;
- (long long)addInfoSticker:(id)arg0 withEffectInfo:(id)arg1 userInfo:(id)arg2;
- (void)setStickerAngle:(long long)arg0 angle:(double)arg1;
- (void)setStickerScale:(long long)arg0 scale:(double)arg1;
- (void)setSticker:(long long)arg0 alpha:(double)arg1;
- (long long)addTextStickerWithUserInfo:(id)arg0;
- (void)setTextStickerTextParams:(long long)arg0 textParams:(id)arg1;
- (long long)addSubtitleSticker;
- (void)setSrtInfo:(long long)arg0 srt:(id)arg1;
- (void)setSrtFont:(long long)arg0 fontPath:(id)arg1;
- (void)setSrtColor:(long long)arg0 red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (void)setSrtAudioInfo:(long long)arg0 seqIn:(double)arg1 trimIn:(double)arg2 duration:(double)arg3 audioCycle:(BOOL)arg4;
- (int)setTemplateStickerTextParams:(long long)arg0 textParams:(id)arg1;
- (id)infoStickers;
- (void)setSticker:(long long)arg0 offsetX:(double)arg1 offsetY:(double)arg2;
- (void)setStickerAbove:(long long)arg0;
- (void)setSrtManipulate:(long long)arg0 state:(BOOL)arg1;
- (id /* block */)captionStickerImageBlock;
- (void)preparePin;
- (void)getStickerId:(long long)arg0 props:(id)arg1;
- (void)setCaptionStickerImageBlock:(id /* block */)arg0;
- (void)startPin:(long long)arg0 pinStartTime:(float)arg1 pinDuration:(float)arg2 completion:(id /* block */)arg3;
- (void)setSticker:(long long)arg0 offsetX:(double)arg1 offsetY:(double)arg2 angle:(double)arg3 scale:(double)arg4;
- (void)setEditSessionProvider:(id)arg0;
- (void)removeAll2DStickers;
- (BOOL)isStaticInfoSticker:(long long)arg0;
- (void)beginBatchCommit;
- (void)endBatchCommit;
- (id)filterMusicLyricStickerId;
- (id)filterMusicLyricEffectId;
- (id)filterMusicLyricColor;
- (long long)setStickerAnimationWithStckerID:(long long)arg0 animationType:(long long)arg1 filePath:(id)arg2 duration:(double)arg3;
- (void)addStickerbyUIImage:(id)arg0 letterInfo:(id)arg1 duration:(double)arg2;
- (long long)addInfoSticker:(id)arg0 URS:(id)arg1 withEffectInfo:(id)arg2 userInfo:(id)arg3 alpha:(double)arg4;
- (void)setStickersAbove:(id)arg0 offsetX:(double)arg1 offsetY:(double)arg2 angle:(double)arg3 scale:(double)arg4;
- (void)setStickerAlphas:(id)arg0 alpha:(double)arg1 above:(BOOL)arg2;
- (void)setStickersScale:(id)arg0 scale:(double)arg1;
- (void)setStickerAboveForInfoSticker:(long long)arg0;
- (void)setStickerAboveForInfoStickerAll:(long long)arg0;
- (void)setStickerAboveForPoiSticker:(long long)arg0;
- (void)removeInfoStickers:(id)arg0;
- (void)removeAllInfoStickers;
- (long long)fixedTopInfoSticker;
- (void)setFixedTopInfoSticker:(long long)arg0;
- (long long)addInfoSticker:(id)arg0 withEffectInfo:(id)arg1 userInfo:(id)arg2 imageEditorIndex:(long long)arg3;
- (void)beginCurrentImageEditorBatchUpdate;
- (void)endCurrentImageEditorBatchUpdate;
- (double)getImageEditorTextStickerVEScaleWithImage:(id)arg0 imagePath:(id)arg1 userInfo:(id)arg2;
- (unsigned long long)addTemplateWithResourcePath:(id)arg0 dependResourceParams:(id)arg1 userInfo:(id)arg2;
- (id)getTemplateStickerInfo:(long long)arg0;
- (long long)addTextSticker:(id)arg0 withUserInfo:(id)arg1;
- (long long)uniqueIdForStickerId:(long long)arg0;
- (void)setTemplateSticker:(long long)arg0 rotation:(double)arg1;
- (void)setTemplateSticker:(long long)arg0 offsetX:(double)arg1 offsetY:(double)arg2;
- (void)setTemplateSticker:(long long)arg0 scale:(double)arg1;
- (void)setTemplateSticker:(long long)arg0 startTime:(double)arg1 duration:(double)arg2;
- (void)setTemplateSticker:(long long)arg0 text:(id)arg1;
- (void)setTextSticker:(long long)arg0 rotation:(double)arg1;
- (void)setTextSticker:(long long)arg0 offsetX:(double)arg1 offsetY:(double)arg2;
- (void)setTextSticker:(long long)arg0 scale:(double)arg1;
- (void)setTextSticker:(long long)arg0 startTime:(double)arg1 duration:(double)arg2;
- (void)setTextSticker:(long long)arg0 text:(id)arg1;
- (int)setTextSticker:(long long)arg0 textParams:(id)arg1;
- (id)stickerRegenerateSignal;
- (long long)addVirtualStickerWithUserInfo:(id)arg0;
- (void)setStickerEnable:(long long)arg0 enable:(BOOL)arg1;
- (void)removeAllVirtualStickers;
- (void)onEditSessionInit:(id)arg0;
- (void)setOriginTemplateText:(id)arg0;
- (id)originTemplateText;
- (void)_setTemplateTextSticker:(long long)arg0 modTextParams:(id /* block */)arg1;
- (void)_setTextSticker:(long long)arg0 modTextParams:(id /* block */)arg1;
- (long long)getMaxLayerForSticker:(long long)arg0;
- (double)p_imageAngleWithVideoInputScale:(double)arg0;
- (id)p_imagStickerOffsetWithVideoInputValueWithStickerId:(long long)arg0 offsetX:(double)arg1 offsetY:(double)arg2;
- (struct CGPoint { double x0; double x1; })p_covertImageOffsetToVideoOffset:(struct CGPoint { double x0; double x1; })arg0 imageSize:(struct CGSize { double x0; double x1; })arg1;
- (double)textStickerVEScale;
- (void)setTextStickerVEScale:(double)arg0;
- (long long)addInfoStickerWithURS:(id)arg0 withEffectInfo:(id)arg1 userInfo:(id)arg2 alpha:(double)arg3;
- (long long)addInfoSticker:(id)arg0 withEffectInfo:(id)arg1 userInfo:(id)arg2 alpha:(double)arg3;
- (id)getOriginTemplateText;
- (id)getTextStickerTextParams:(long long)arg0;
- (void)setStickerRegenerateSignal:(id)arg0;
- (void).cxx_destruct;
- (void)setPlayer:(id)arg0;
- (void)dealloc;
- (id)player;

@end