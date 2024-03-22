//
//     Generated by private class-dump
//

@class IESEffectModel, NSMutableArray;

@interface AWEStickerApplySavePhotoHandler : AWEStickerApplyBaseHandler {
    IESEffectModel *_currentSticker;
    NSMutableArray *_stickerSavePhotoNames;
}

@property (retain, nonatomic) IESEffectModel *currentSticker;
@property (retain, nonatomic) NSMutableArray *stickerSavePhotoNames;

- (id)currentSticker;
- (void)setCurrentSticker:(id)arg0;
- (void)camera:(id)arg0 didApplySticker:(id)arg1 success:(BOOL)arg2;
- (void)camera:(id)arg0 didRecvMessage:(id)arg1;
- (void)camera:(id)arg0 willApplySticker:(id)arg1 propSource:(long long)arg2;
- (void)camera:(id)arg0 didTakeAction:(long long)arg1 error:(id)arg2 data:(id)arg3;
- (void)p_fetchStickerWaterMarkImage:(id)arg0;
- (void)p_handleStickerSavePhoto:(id)arg0;
- (void)setStickerSavePhotoNames:(id)arg0;
- (id)stickerSavePhotoNames;
- (void).cxx_destruct;

@end