//
//     Generated by private class-dump
//

@class AWEPOIAlbumPhotoInfo, UIImageView, AWEGradientView, UILabel, UIView;

@interface AWEPOIAlbumSinglePhoto : UIView {
    id /* block */ _didTap;
    AWEPOIAlbumPhotoInfo *_photo;
    id /* block */ _processSelectedStatusChange;
    UIImageView *_imageView;
    AWEGradientView *_labelMask;
    AWEGradientView *_photoMask;
    UILabel *_label;
    UIImageView *_uncheckImageView;
    UIView *_selectedCellMaskView;
    long long _photoIndex;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWEGradientView *labelMask;
@property (retain, nonatomic) AWEGradientView *photoMask;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *uncheckImageView;
@property (retain, nonatomic) UIView *selectedCellMaskView;
@property (nonatomic) long long photoIndex;
@property (copy, nonatomic) id /* block */ didTap;
@property (retain, nonatomic) AWEPOIAlbumPhotoInfo *photo;
@property (copy, nonatomic) id /* block */ processSelectedStatusChange;

- (void)setDidTap:(id /* block */)arg0;
- (void)showMaskViewIfNeed:(id)arg0;
- (id)labelMask;
- (id)photoMask;
- (void)photoTapAction;
- (long long)photoIndex;
- (void)setLabelMask:(id)arg0;
- (void)setPhotoMask:(id)arg0;
- (void)setPhotoIndex:(long long)arg0;
- (void)updateWithModel:(id)arg0 selectedStatus:(id)arg1;
- (void)setProcessSelectedStatusChange:(id /* block */)arg0;
- (id)uncheckImageView;
- (id)selectImage;
- (id)unselectImage;
- (id)selectedCellMaskView;
- (void)doSelectStatusChange;
- (id /* block */)processSelectedStatusChange;
- (void)changeToSelectedStatus;
- (void)changeToUnselectedStatus;
- (void)setUncheckImageView:(id)arg0;
- (void)setSelectedCellMaskView:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)imageView;
- (void)setLabel:(id)arg0;
- (void)setImageView:(id)arg0;
- (void)layout;
- (id)label;
- (id)photo;
- (void)setPhoto:(id)arg0;
- (void)setupUI;
- (id)photoImage;
- (id /* block */)didTap;

@end