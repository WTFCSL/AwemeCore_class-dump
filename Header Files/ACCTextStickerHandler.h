//
//     Generated by private class-dump
//

@class UIView, NSString, ACCRepoImageAlbumInfoModel, ACCTextStickerEditView, ACCStickerContainerView, NSMutableDictionary, ACCTextStickerHandlerSpeakerModel, AWEEditStickerHintView, AWEVideoPublishViewModel, AWETextStickerStylePreferenceModel, ACCTextReadEffectSelectPanelModel;
@protocol ACCTextLoadingViewProtcol, ACCTextStickerDataProvider, ACCStickerServiceProtocol, ACCTextReaderTrackerProtocol, ACCEditServiceProtocol;

@interface ACCTextStickerHandler : ACCStickerHandler <ACCStickerMigrationProtocol, ACCTextReaderSoundEffectsSelectionViewControllerProviderProtocol, AWETextTemplateDownloadObserverProtocol> {
    BOOL _isImageAlbumEdit;
    BOOL _hasFlashMobProperty;
    BOOL _editInBackground;
    BOOL _isFirstTextEdit;
    id<ACCEditServiceProtocol> _editService;
    id<ACCStickerServiceProtocol> _stickerService;
    ACCStickerContainerView *_globalStickerContainerView;
    id /* block */ _onTimeSelect;
    id /* block */ _onFlashTopicSelect;
    id /* block */ _editViewOnStartEdit;
    id /* block */ _editViewOnFinishEdit;
    id /* block */ _onFinishedEditAnimationCompletedBlock;
    id /* block */ _onStickerApplySuccess;
    id<ACCTextStickerDataProvider> _dataProvider;
    ACCRepoImageAlbumInfoModel *_repoImageAlbumInfo;
    AWEVideoPublishViewModel *_publishViewModel;
    AWETextStickerStylePreferenceModel *_stylePreferenceModel;
    ACCTextReadEffectSelectPanelModel *_ttsPanelModel;
    id<ACCTextReaderTrackerProtocol> _tracker;
    id /* block */ _panStart;
    id /* block */ _panEnd;
    ACCTextStickerEditView *_textStickerEditView;
    AWEEditStickerHintView *_textHintView;
    UIView<ACCTextLoadingViewProtcol> *_loadingView;
    ACCTextStickerHandlerSpeakerModel *_speakerModel;
    NSMutableDictionary *_textTemplateStyleMap;
    NSMutableDictionary *_textTemplateColorMap;
}

@property (retain, nonatomic) ACCTextStickerEditView *textStickerEditView;
@property (retain, nonatomic) AWEEditStickerHintView *textHintView;
@property (weak, nonatomic) UIView<ACCTextLoadingViewProtcol> *loadingView;
@property (retain, nonatomic) ACCTextStickerHandlerSpeakerModel *speakerModel;
@property (nonatomic) BOOL editInBackground;
@property (nonatomic) BOOL isFirstTextEdit;
@property (retain, nonatomic) NSMutableDictionary *textTemplateStyleMap;
@property (retain, nonatomic) NSMutableDictionary *textTemplateColorMap;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) ACCStickerContainerView *globalStickerContainerView;
@property (copy, nonatomic) id /* block */ onTimeSelect;
@property (copy, nonatomic) id /* block */ onFlashTopicSelect;
@property (copy, nonatomic) id /* block */ editViewOnStartEdit;
@property (copy, nonatomic) id /* block */ editViewOnFinishEdit;
@property (copy, nonatomic) id /* block */ onFinishedEditAnimationCompletedBlock;
@property (copy, nonatomic) id /* block */ onStickerApplySuccess;
@property (weak, nonatomic) id<ACCTextStickerDataProvider> dataProvider;
@property (weak, nonatomic) ACCRepoImageAlbumInfoModel *repoImageAlbumInfo;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (nonatomic) BOOL isImageAlbumEdit;
@property (nonatomic) BOOL hasFlashMobProperty;
@property (retain, nonatomic) AWETextStickerStylePreferenceModel *stylePreferenceModel;
@property (retain, nonatomic) ACCTextReadEffectSelectPanelModel *ttsPanelModel;
@property (weak, nonatomic) id<ACCTextReaderTrackerProtocol> tracker;
@property (copy, nonatomic) id /* block */ panStart;
@property (copy, nonatomic) id /* block */ panEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)fillCrossPlatformStickerByUserInfo:(id)arg0 repository:(id)arg1 context:(id)arg2 sticker:(id *)arg3;
+ (void)updateUserInfo:(id *)arg0 repoModel:(id)arg1 byCrossPlatformSlot:(id)arg2;
+ (id)textInfoDataForTextModel:(id)arg0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertTemplateRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 fromMediaSize:(struct CGSize { double x0; double x1; })arg1 toStickerContainerSize:(struct CGSize { double x0; double x1; })arg2;

- (id)publishViewModel;
- (id)editService;
- (void)setEditService:(id)arg0;
- (id)textsArray;
- (id)repoImageAlbumInfo;
- (BOOL)isImageAlbumEdit;
- (void)setPublishViewModel:(id)arg0;
- (void)setStickerService:(id)arg0;
- (id)stickerService;
- (void)expressSticker:(id)arg0;
- (id)textsArrayInString;
- (void)addInteractionStickerInfoToArray:(id)arg0 idx:(long long)arg1;
- (id)addTextWithTextInfo:(id)arg0 locationModel:(id)arg1 preferredRatio:(BOOL)arg2 constructorBlock:(id /* block */)arg3;
- (void)setEditViewOnStartEdit:(id /* block */)arg0;
- (void)setEditViewOnFinishEdit:(id /* block */)arg0;
- (void)apply:(id)arg0 index:(unsigned long long)arg1;
- (BOOL)canHandleSticker:(id)arg0;
- (BOOL)canRecoverSticker:(id)arg0;
- (void)recoverSticker:(id)arg0;
- (BOOL)canExpressSticker:(id)arg0;
- (void)setOnStickerApplySuccess:(id /* block */)arg0;
- (void)setStylePreferenceModel:(id)arg0;
- (BOOL)canRecoverImageAlbumStickerModel:(id)arg0;
- (void)recoverStickerForContainer:(id)arg0 imageAlbumStickerModel:(id)arg1;
- (id)getTextReaderModel;
- (void)editTextStickerView:(id)arg0;
- (id /* block */)editViewOnFinishEdit;
- (id /* block */)editViewOnStartEdit;
- (id /* block */)onStickerApplySuccess;
- (void)expressSticker:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)applyAsNleVirtualSticker:(id)arg0 index:(unsigned long long)arg1;
- (BOOL)canRecoverStickerStorageModel:(id)arg0;
- (void)recoverStickerForContainer:(id)arg0 storageModel:(id)arg1;
- (void)applyStickerStorageModel:(id)arg0 forContainer:(id)arg1 stickerIndex:(unsigned long long)arg2 imageAlbumIndex:(unsigned long long)arg3;
- (void)refreshStickerRecommendBarWithZip;
- (id)textStickerEditView;
- (void)setTextStickerEditView:(id)arg0;
- (void)setOnTimeSelect:(id /* block */)arg0;
- (id /* block */)onTimeSelect;
- (id)templateStickerInfoFromJsonString:(id)arg0;
- (void)didSelectTTSAudio:(id)arg0 speakerID:(id)arg1 soundEffectID:(id)arg2 challengeIds:(id)arg3;
- (void)didTapCancelDelegate;
- (void)didTapFinishDelegate:(id)arg0 speakerID:(id)arg1 speakerName:(id)arg2;
- (void)onFlashTopicEditFinished:(BOOL)arg0;
- (void)requestTextReadingForStickerViews:(id)arg0;
- (void)setGlobalStickerContainerView:(id)arg0;
- (void)removeTextReadingIfNoTextSticker;
- (void)setHasFlashMobProperty:(BOOL)arg0;
- (void)setRepoImageAlbumInfo:(id)arg0;
- (void)setIsImageAlbumEdit:(BOOL)arg0;
- (void)setOnFlashTopicSelect:(id /* block */)arg0;
- (void)setOnFinishedEditAnimationCompletedBlock:(id /* block */)arg0;
- (void)setPanStart:(id /* block */)arg0;
- (void)setPanEnd:(id /* block */)arg0;
- (id)ttsPanelModel;
- (void)setTtsPanelModel:(id)arg0;
- (id)addTextWithTextInfo:(id)arg0 locationModel:(id)arg1 constructorBlock:(id /* block */)arg2;
- (void)applyTTSAndTrack:(id)arg0 spkID:(id)arg1 streamSpkID:(id)arg2 effectID:(id)arg3 effectName:(id)arg4 toneTab:(id)arg5 challengeIDs:(id)arg6;
- (id)stylePreferenceModel;
- (BOOL)hasFlashMobProperty;
- (void)cancelReadRequest;
- (id)speakerModel;
- (void)p_applyTTSAudio:(id)arg0 speakerID:(id)arg1 streamSpeakID:(id)arg2 soundEffectID:(id)arg3 toneTab:(id)arg4 challengeIds:(id)arg5;
- (void)p_applyAudioToVE:(id)arg0 stickerView:(id)arg1 stickerTimeView:(id)arg2 skipSeek:(BOOL)arg3;
- (BOOL)imageAlbumSupportTextReaderOptimize;
- (void)changeNLEVideoSlotDurationWithDuration:(double)arg0;
- (void)p_applyTTSAudio:(id)arg0 speakerID:(id)arg1 streamSpeakID:(id)arg2 soundEffectID:(id)arg3 toneTab:(id)arg4 challengeIds:(id)arg5 skipSeek:(BOOL)arg6;
- (void)removeTextReadingForStickerView:(id)arg0;
- (void)recoverNLEVideoSlotDurationWhenDeleteTextReader;
- (BOOL)isFirstTextEdit;
- (void)setIsFirstTextEdit:(BOOL)arg0;
- (id)textTemplateColorMap;
- (id)textTemplateStyleMap;
- (void)updateTextTemplateStyleWithStickerId:(long long)arg0 color:(id)arg1 style:(unsigned long long)arg2;
- (void)showTextHintOnStickerView:(id)arg0 textModel:(id)arg1;
- (BOOL)p_shouldAutoShowBubble:(id)arg0;
- (id /* block */)onFinishedEditAnimationCompletedBlock;
- (void)textEditFinishedForStickerView:(id)arg0;
- (struct CGPoint { double x0; double x1; })changeCurrentTextTemplateToEditStatusIfNeeded;
- (void)onFlashTopicEditStart:(id)arg0 index:(id)arg1 titleForPreFetch:(id)arg2 scrollPosition:(unsigned long long)arg3;
- (void)_apply:(id)arg0 index:(unsigned long long)arg1;
- (void)markAndRemoveTextHint:(unsigned long long)arg0;
- (void)recoverTextWithTemplateInfo:(id)arg0 stickerId:(long long)arg1 textParams:(id)arg2 toStickerContainer:(id)arg3 filepath:(id)arg4 dependeResourcePartams:(id)arg5 textModel:(id)arg6 effectId:(id)arg7 categoryIndex:(long long)arg8;
- (id)extraStringFromInfoSticker:(id)arg0;
- (id)p_recoverStickerForContainer:(id)arg0 storageModel:(id)arg1;
- (id)textFontsArrayInString;
- (id)textFontEffectIdsArrayInString;
- (id)textRecommendIdsInString;
- (id)textRecommendTypesArrayInString;
- (void)addTextInteractionStickerInfo:(id)arg0 toArray:(id)arg1 idx:(long long)arg2;
- (void)p_addTextSocialInfoToInteractionStickers:(id)arg0 stickerView:(id)arg1 textModel:(id)arg2 idx:(long long)arg3;
- (id)addTextWithTextInfo:(id)arg0 locationModel:(id)arg1 preferredRatio:(BOOL)arg2 constructorBlock:(id /* block */)arg3 toStickerContainer:(id)arg4;
- (void)updateTemplateStickerSizeWithTemplateStickerView:(id)arg0 stickerId:(long long)arg1 forStickerContainer:(id)arg2 templateInfo:(id)arg3;
- (id)recoverInitText:(id)arg0 filepath:(id)arg1;
- (id)textStickerConfig:(id)arg0 locationModel:(id)arg1 textStickerView:(id)arg2 preferredRatio:(BOOL)arg3;
- (void)setDefaultColorWithStickerId:(long long)arg0;
- (void)configTemplateSticker:(id)arg0 config:(id)arg1;
- (id /* block */)panStart;
- (id /* block */)panEnd;
- (void)requestTextReadingForStickerView:(id)arg0;
- (id)globalStickerContainerView;
- (id)textHintView;
- (void)p_applyAudioToVE:(id)arg0 stickerView:(id)arg1 stickerTimeView:(id)arg2;
- (void)changeTextTemplateToNormalIfNeededWith:(id)arg0;
- (void)p_requestTextReadingForStickerViewModern:(id)arg0;
- (id)textStickerViewList;
- (id)textViewsAscendingByStartTime;
- (id)textFontsArray;
- (id)textRecommendTypesArray;
- (id)textRecommendIdsArray;
- (id)textFontEffectIdsArray;
- (void)setEditInBackground:(BOOL)arg0;
- (id /* block */)onFlashTopicSelect;
- (BOOL)editInBackground;
- (id)textStickerConfig:(id)arg0 locationModel:(id)arg1 textStickerView:(id)arg2;
- (id)addTextWithTextInfoAndApply:(id)arg0 locationModel:(id)arg1 index:(unsigned long long)arg2;
- (void)setTextHintView:(id)arg0;
- (void)setSpeakerModel:(id)arg0;
- (void)setTextTemplateStyleMap:(id)arg0;
- (void)setTextTemplateColorMap:(id)arg0;
- (id)dataProvider;
- (void)setDataProvider:(id)arg0;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)finish;
- (void)dealloc;
- (void)reset;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
