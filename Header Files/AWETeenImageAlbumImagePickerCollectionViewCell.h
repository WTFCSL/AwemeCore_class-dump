//
//     Generated by private class-dump
//

@class UIImageView, AWETeenImageAlbumImagePickerSelectIndicator;
@protocol AWETeenImageAlbumImagePickerCollectionViewCellDelegate;

@interface AWETeenImageAlbumImagePickerCollectionViewCell : UICollectionViewCell {
    UIImageView *_imageView;
    AWETeenImageAlbumImagePickerSelectIndicator *_selectIndicator;
    id<AWETeenImageAlbumImagePickerCollectionViewCellDelegate> _delegate;
    long long _index;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWETeenImageAlbumImagePickerSelectIndicator *selectIndicator;
@property (weak, nonatomic) id<AWETeenImageAlbumImagePickerCollectionViewCellDelegate> delegate;
@property (nonatomic) long long index;

+ (id)identifier;

- (void)configWithImage:(id)arg0;
- (void)updateWithSelected:(BOOL)arg0;
- (void)configWithImageURLList:(id)arg0 selected:(BOOL)arg1 isHorizontal:(BOOL)arg2;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (id)delegate;
- (long long)index;
- (void)setDelegate:(id)arg0;
- (void)handleSelection;
- (id)selectIndicator;
- (void)setSelectIndicator:(id)arg0;

@end
