//
//     Generated by private class-dump
//

@class NPGenericTemplateService_OC, UIView;
@protocol ACCProcessViewProtcol;

@interface AWEAlbumPixelTemplateViewModel : AWEAlbumBaseViewModel {
    UIView<ACCProcessViewProtcol> *_progressView;
    NPGenericTemplateService_OC *_presetService;
    long long _slotCount;
}

@property (retain, nonatomic) UIView<ACCProcessViewProtcol> *progressView;
@property (copy, nonatomic) NPGenericTemplateService_OC *presetService;
@property (nonatomic) long long slotCount;

- (void)albumViewControllerDidLoad:(id)arg0;
- (id)initWithInputData:(id)arg0;
- (BOOL)validAssetModelForVideo:(id)arg0;
- (void)goToNextWithMultiSelect:(BOOL)arg0;
- (void)setPresetService:(id)arg0;
- (BOOL)shouldSelectAlbumAsset:(id)arg0;
- (void)didSelectAlbumAsset:(id)arg0 withViewController:(id)arg1 sourceType:(long long)arg2;
- (void)trackSelectAsset:(id)arg0 fromPreview:(BOOL)arg1;
- (void)updateBottomNextButtonWithButton:(id)arg0 fromPreview:(BOOL)arg1;
- (id)presetService;
- (id)generateSlotConfigsWithTemplateModel:(id)arg0;
- (void)initAlbumLoadNextPerfTrack;
- (void)goToEditWithPublishModel:(id)arg0;
- (void).cxx_destruct;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (void)setSlotCount:(long long)arg0;
- (long long)slotCount;

@end
