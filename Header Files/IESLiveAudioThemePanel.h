//
//     Generated by private class-dump
//

@class IESLiveAudioThemePanelViewModel, IESLivePopupInsideCollectionView, NSString, UIView, UILabel, UIButton;
@protocol IESLivePhotoLibraryService;

@interface IESLiveAudioThemePanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UINavigationControllerDelegate, UIImagePickerControllerDelegate> {
    id /* block */ _didClickTitle;
    IESLiveAudioThemePanelViewModel *_viewModel;
    UIView *_blurView;
    IESLivePopupInsideCollectionView *_collectionView;
    UILabel *_titleLabel;
    id<IESLivePhotoLibraryService> _photoService;
    UIButton *_ugcBtn;
}

@property (retain, nonatomic) IESLiveAudioThemePanelViewModel *viewModel;
@property (retain, nonatomic) UIView *blurView;
@property (retain, nonatomic) IESLivePopupInsideCollectionView *collectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) id<IESLivePhotoLibraryService> photoService;
@property (retain, nonatomic) UIButton *ugcBtn;
@property (copy, nonatomic) id /* block */ didClickTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)panelHeight;
+ (double)bottomMargin;

- (void)bindViewModel;
- (id)photoService;
- (void)setPhotoService:(id)arg0;
- (id)initWithViewModel:(id)arg0 context:(id)arg1;
- (void)editImage:(id)arg0 fromController:(id)arg1;
- (id /* block */)didClickTitle;
- (void)uploadButtonDidClick;
- (void)setUgcBtn:(id)arg0;
- (id)ugcBtn;
- (void)editAsset:(id)arg0 fromController:(id)arg1;
- (void)setDidClickTitle:(id /* block */)arg0;
- (void)setBlurView:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)blurView;
- (id)titleLabel;
- (void)setCollectionView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (struct CGSize { double x0; double x1; })itemSize;
- (void)setTitleLabel:(id)arg0;
- (void)setupConstraints;
- (void)imagePickerControllerDidCancel:(id)arg0;
- (void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1;
- (void)setupViews;

@end