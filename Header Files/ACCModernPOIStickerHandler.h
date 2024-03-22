//
//     Generated by private class-dump
//

@class NSString, UIView, AWEEditStickerHintView, ACCModernPOIStickerSwitchView;
@protocol ACCTextLoadingViewProtcol, ACCPOIStickerDataProvider;

@interface ACCModernPOIStickerHandler : ACCStickerHandler <ACCModernPOIStickerSwitchViewDelegate, ACCModernPOIStickerViewHelperProtocol, ACCStickerMigrationProtocol, ACCDraftResourceRecoverProtocol> {
    id<ACCPOIStickerDataProvider> _dataProvider;
    id /* block */ _onEditPoiInfo;
    id /* block */ _editViewOnStartEdit;
    id /* block */ _editViewOnFinishEdit;
    id /* block */ _editViewOnFinishAnimationEdit;
    id /* block */ _onStickerApplySuccess;
    AWEEditStickerHintView *_poiHintView;
    ACCModernPOIStickerSwitchView *_editView;
    UIView<ACCTextLoadingViewProtcol> *_loadingView;
    NSString *_currentPOIID;
    NSString *_currentLoadingTag;
}

@property (retain, nonatomic) AWEEditStickerHintView *poiHintView;
@property (retain, nonatomic) ACCModernPOIStickerSwitchView *editView;
@property (weak, nonatomic) UIView<ACCTextLoadingViewProtcol> *loadingView;
@property (copy, nonatomic) NSString *currentPOIID;
@property (copy, nonatomic) NSString *currentLoadingTag;
@property (weak, nonatomic) id<ACCPOIStickerDataProvider> dataProvider;
@property (copy, nonatomic) id /* block */ onEditPoiInfo;
@property (copy, nonatomic) id /* block */ editViewOnStartEdit;
@property (copy, nonatomic) id /* block */ editViewOnFinishEdit;
@property (copy, nonatomic) id /* block */ editViewOnFinishAnimationEdit;
@property (copy, nonatomic) id /* block */ onStickerApplySuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)useModernPOIStickerStyle:(id)arg0;
+ (id)draftResourceIDsToDownloadForPublishViewModel:(id)arg0;
+ (void)updateWithDownloadedEffects:(id)arg0 publishViewModel:(id)arg1 completion:(id /* block */)arg2;
+ (BOOL)fillCrossPlatformStickerByUserInfo:(id)arg0 repository:(id)arg1 context:(id)arg2 sticker:(id *)arg3;
+ (void)updateUserInfo:(id *)arg0 repoModel:(id)arg1 byCrossPlatformSlot:(id)arg2;
+ (id)adaptedLocationWithInteractionInfo:(id)arg0 player:(id)arg1 isDraftBefore710:(BOOL)arg2;
+ (BOOL)containsModernPOISticker:(id)arg0;

- (void)expressSticker:(id)arg0;
- (void)addInteractionStickerInfoToArray:(id)arg0 idx:(long long)arg1;
- (void)clearPOIStatus;
- (void)setOnEditPoiInfo:(id /* block */)arg0;
- (void)setEditViewOnStartEdit:(id /* block */)arg0;
- (void)setEditViewOnFinishEdit:(id /* block */)arg0;
- (void)setEditViewOnFinishAnimationEdit:(id /* block */)arg0;
- (void)addPOIStickerWithPOIModel:(id)arg0;
- (BOOL)canHandleSticker:(id)arg0;
- (BOOL)canRecoverSticker:(id)arg0;
- (void)recoverSticker:(id)arg0;
- (BOOL)canExpressSticker:(id)arg0;
- (void)setOnStickerApplySuccess:(id /* block */)arg0;
- (id /* block */)editViewOnFinishEdit;
- (id /* block */)editViewOnStartEdit;
- (id /* block */)onStickerApplySuccess;
- (void)expressSticker:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)updateSticker:(long long)arg0 withNewId:(long long)arg1;
- (void)setCurrentPOIID:(id)arg0;
- (void)setCurrentLoadingTag:(id)arg0;
- (void)addPOIStickerWithPOIModel:(id)arg0 locationModel:(id)arg1 recoverSticker:(id)arg2 userInfoConstructor:(id /* block */)arg3 constructorBlock:(id /* block */)arg4;
- (id)poiModelWithInteractionModel:(id)arg0;
- (void)addPOIInteractionStickerInfo:(id)arg0 toArray:(id)arg1 idx:(long long)arg2;
- (id)currentPOIID;
- (void)generatePOIStickerWithPOIModel:(id)arg0 locationModel:(id)arg1 recoverSticker:(id)arg2 userInfoConstructor:(id /* block */)arg3 constructorBlock:(id /* block */)arg4;
- (id)currentLoadingTag;
- (void)markAndRemovePOIHint;
- (void)editPOISticker:(id)arg0;
- (void)dismissEditStickerViewStyle:(BOOL)arg0;
- (void)updatePOIStickerLocationWithStickerId:(long long)arg0 model:(id)arg1;
- (void)updatePOISticker:(id)arg0;
- (void)showPOIHintOnStickerView:(id)arg0 useMulti:(BOOL)arg1;
- (void)trackEvent:(id)arg0 stickerPOIView:(id)arg1;
- (id /* block */)onEditPoiInfo;
- (id)poiHintView;
- (void)setPoiHintView:(id)arg0;
- (id /* block */)editViewOnFinishAnimationEdit;
- (void)editStickerViewStyle:(id)arg0 didSelectIndex:(long long)arg1 completionBlock:(id /* block */)arg2;
- (void)selectPOIForEditStickerViewStyle;
- (void)stopLoading;
- (id)dataProvider;
- (void)setDataProvider:(id)arg0;
- (void).cxx_destruct;
- (void)startLoading;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)editView;
- (void)setEditView:(id)arg0;
- (id)currentPlayer;

@end
