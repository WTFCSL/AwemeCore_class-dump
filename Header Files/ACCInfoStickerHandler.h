//
//     Generated by private class-dump
//

@class NSString, AWEInfoStickerManager, AWEVideoPublishViewModel, ACCEditStickerSelectTimeManager;
@protocol ACCEditTransitionServiceProtocol, ACCEditServiceProtocol, ACCSequenceEditServiceProtocol;

@interface ACCInfoStickerHandler : ACCStickerHandler <ACCStickerMigrationProtocol> {
    AWEVideoPublishViewModel *_repository;
    id<ACCEditServiceProtocol> _editService;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    id<ACCEditTransitionServiceProtocol> _transitionService;
    id /* block */ _recoveryImageAlbumSticker;
    id /* block */ _recoveryInfoSticker;
    ACCEditStickerSelectTimeManager *_selectTimeManager;
    AWEInfoStickerManager *_stickerManager;
}

@property (retain, nonatomic) ACCEditStickerSelectTimeManager *selectTimeManager;
@property (retain, nonatomic) AWEInfoStickerManager *stickerManager;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditTransitionServiceProtocol> transitionService;
@property (copy, nonatomic) id /* block */ recoveryImageAlbumSticker;
@property (copy, nonatomic) id /* block */ recoveryInfoSticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)fillCrossPlatformStickerByUserInfo:(id)arg0 repository:(id)arg1 context:(id)arg2 sticker:(id *)arg3;
+ (void)updateUserInfo:(id *)arg0 repoModel:(id)arg1 byCrossPlatformSlot:(id)arg2;
+ (unsigned long long)infoStickerTypeFor:(id)arg0;

- (void)trackEvent:(id)arg0 params:(id)arg1;
- (id)stickerManager;
- (id)transitionService;
- (void)setTransitionService:(id)arg0;
- (id)editService;
- (void)setEditService:(id)arg0;
- (BOOL)isImageAlbumEdit;
- (void)setStickerManager:(id)arg0;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (void)expressSticker:(id)arg0;
- (void)addInteractionStickerInfoToArray:(id)arg0 idx:(long long)arg1;
- (BOOL)canRecoverSticker:(id)arg0;
- (void)recoverSticker:(id)arg0;
- (void)expressSticker:(id)arg0 onCompletion:(id /* block */)arg1;
- (BOOL)canExpressSticker:(id)arg0;
- (long long)addInfoStickerWithContext:(id)arg0 userInfoConstructor:(id /* block */)arg1 constructor:(id /* block */)arg2 appliedHandler:(id /* block */)arg3 onCompletion:(id /* block */)arg4;
- (void)checkIfStaticInfoStickerWithStrickerId:(long long)arg0;
- (id)selectTimeManager;
- (void)modernEditStickerDuration:(id)arg0;
- (void)setSelectTimeManager:(id)arg0;
- (BOOL)canRecoverImageAlbumStickerModel:(id)arg0;
- (void)recoverStickerForContainer:(id)arg0 imageAlbumStickerModel:(id)arg1;
- (void)setRecoveryImageAlbumSticker:(id /* block */)arg0;
- (void)setRecoveryInfoSticker:(id /* block */)arg0;
- (void)recoveryOneInfoSticker:(id)arg0 stickerContainer:(id)arg1 configConstructor:(id /* block */)arg2 onCompletion:(id /* block */)arg3;
- (void)applyContainerSticker:(long long)arg0 context:(id)arg1 configConstructor:(id /* block */)arg2 onCompletion:(id /* block */)arg3;
- (void)clearHandlerWhenTransfer;
- (long long)addInfoStickerWithContext:(id)arg0 infoStickerConfig:(id)arg1 userInfoConstructor:(id /* block */)arg2 constructor:(id /* block */)arg3 appliedHandler:(id /* block */)arg4 onCompletion:(id /* block */)arg5;
- (double)stickerOriginScaleWithStickerSize:(struct CGSize { double x0; double x1; })arg0;
- (id)configInfoSticker:(long long)arg0 context:(id)arg1 stickerSize:(struct CGSize { double x0; double x1; })arg2 configBlock:(id /* block */)arg3 stickerContainer:(id)arg4 onCompletion:(id /* block */)arg5;
- (double)extraScaleForStickerContainer:(id)arg0;
- (void)jumpToPinStickerViewControllerWithSticker:(id)arg0;
- (id /* block */)recoveryInfoSticker;
- (void)configStickerContainerForPinVc:(id)arg0;
- (void)applyStickerInfosChange:(id)arg0;
- (void)highlightSticker:(id)arg0 allStickers:(id)arg1;
- (id /* block */)recoveryImageAlbumSticker;
- (void)recoveryInfoStickersPinStatus:(id)arg0 originPinStatus:(id)arg1;
- (void)updateSticker:(long long)arg0 withNewId:(long long)arg1;
- (void).cxx_destruct;
- (void)setRepository:(id)arg0;
- (id)repository;

@end
