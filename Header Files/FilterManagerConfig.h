//
//     Generated by private class-dump
//

@interface FilterManagerConfig : NSObject {
    BOOL _infoStickerForceAmazing;
    BOOL _useGlobalEffectGroup;
    BOOL _isUsedForExport;
    BOOL _disableEffectGroup;
    BOOL _disableInfoSticker;
    BOOL _disableTransition;
    BOOL _infostickerTextureRelease;
    BOOL _disableExtracFilter;
    BOOL _enableKeyFrameFeature;
    id /* block */ _stickerRecoverEvent;
    id /* block */ _imageBlock;
}

@property (nonatomic) BOOL infoStickerForceAmazing;
@property (nonatomic) BOOL useGlobalEffectGroup;
@property (nonatomic) BOOL isUsedForExport;
@property (nonatomic) BOOL disableEffectGroup;
@property (nonatomic) BOOL disableInfoSticker;
@property (nonatomic) BOOL disableTransition;
@property (nonatomic) BOOL infostickerTextureRelease;
@property (nonatomic) BOOL disableExtracFilter;
@property (nonatomic) BOOL enableKeyFrameFeature;
@property (copy, nonatomic) id /* block */ stickerRecoverEvent;
@property (copy, nonatomic) id /* block */ imageBlock;

- (void)setImageBlock:(id /* block */)arg0;
- (id /* block */)imageBlock;
- (BOOL)useGlobalEffectGroup;
- (void)setDisableInfoSticker:(BOOL)arg0;
- (void)setStickerRecoverEvent:(id /* block */)arg0;
- (id /* block */)stickerRecoverEvent;
- (BOOL)disableInfoSticker;
- (BOOL)infoStickerForceAmazing;
- (BOOL)infostickerTextureRelease;
- (void)setInfostickerTextureRelease:(BOOL)arg0;
- (BOOL)disableTransition;
- (BOOL)disableExtracFilter;
- (BOOL)enableKeyFrameFeature;
- (BOOL)isUsedForExport;
- (void)setIsUsedForExport:(BOOL)arg0;
- (BOOL)disableEffectGroup;
- (void)setInfoStickerForceAmazing:(BOOL)arg0;
- (void)setUseGlobalEffectGroup:(BOOL)arg0;
- (void)setDisableEffectGroup:(BOOL)arg0;
- (void)setDisableTransition:(BOOL)arg0;
- (void)setDisableExtracFilter:(BOOL)arg0;
- (void)setEnableKeyFrameFeature:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;

@end
