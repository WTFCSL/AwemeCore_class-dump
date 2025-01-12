//
//     Generated by private class-dump
//

@class ACCOneKeyMvEntranceAlbumBottomView, AWEAlbumMVCutSameViewModel, UIView, AWEMVDetailResponseModel, AWECutSameTipView;
@protocol ACCLoadingViewProtocol, ACCSelectedAssetsBottomViewProtocol;

@interface AWEAlbumOneKeyAnchorViewModel : AWEAlbumBaseViewModel {
    ACCOneKeyMvEntranceAlbumBottomView<ACCSelectedAssetsBottomViewProtocol> *_bottomView;
    AWEAlbumMVCutSameViewModel *_cutSameViewModel;
    AWECutSameTipView *_tipView;
    UIView<ACCLoadingViewProtocol> *_loadingView;
    AWEMVDetailResponseModel *_mvDetail;
}

@property (retain, nonatomic) ACCOneKeyMvEntranceAlbumBottomView<ACCSelectedAssetsBottomViewProtocol> *bottomView;
@property (retain, nonatomic) AWEAlbumMVCutSameViewModel *cutSameViewModel;
@property (retain, nonatomic) AWECutSameTipView *tipView;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) AWEMVDetailResponseModel *mvDetail;

- (void)albumViewControllerDidLoad:(id)arg0;
- (id)initWithInputData:(id)arg0;
- (BOOL)validAssetModelForVideo:(id)arg0;
- (void)updateSelectedAssets:(id)arg0;
- (void)setCutSameViewModel:(id)arg0;
- (id)cutSameViewModel;
- (BOOL)shouldSelectAlbumAsset:(id)arg0;
- (void)loadTemplateDetail;
- (void)switchToCutSame:(id)arg0;
- (id)mvDetail;
- (void)setMvDetail:(id)arg0;
- (void).cxx_destruct;
- (id)bottomView;
- (id)footerTitle;
- (void)setBottomView:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)tipView;
- (void)setTipView:(id)arg0;
- (id)bottomButton;

@end
