//
//     Generated by private class-dump
//

@class UIImageView, UILabel, AWEImageAlbumImagePickerSelectIndicator;
@protocol AWEImageAlbumImagePickerCollectionViewCellDelegate;

@interface AWEImageAlbumImagePickerCollectionViewCell : UICollectionViewCell {
    BOOL _isSlides;
    UIImageView *_imageView;
    AWEImageAlbumImagePickerSelectIndicator *_selectIndicator;
    id<AWEImageAlbumImagePickerCollectionViewCellDelegate> _delegate;
    long long _index;
    UILabel *_timeLab;
    UIImageView *_iconImageView;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWEImageAlbumImagePickerSelectIndicator *selectIndicator;
@property (weak, nonatomic) id<AWEImageAlbumImagePickerCollectionViewCellDelegate> delegate;
@property (nonatomic) long long index;
@property (retain, nonatomic) UILabel *timeLab;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) BOOL isSlides;

+ (id)identifier;

- (BOOL)isSlides;
- (void)setIsSlides:(BOOL)arg0;
- (void)configWithImage:(id)arg0;
- (void)updateWithSelected:(BOOL)arg0;
- (void)configWithImageURLList:(id)arg0 selected:(BOOL)arg1 isHorizontal:(BOOL)arg2;
- (void)setTimeLab:(id)arg0;
- (id)timeLab;
- (id)timeWithDuration:(id)arg0;
- (void)configWithItemExtraInfo:(id)arg0;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (id)delegate;
- (long long)index;
- (void)setDelegate:(id)arg0;
- (id)iconImageView;
- (void)handleSelection;
- (void)setIconImageView:(id)arg0;
- (id)selectIndicator;
- (void)setSelectIndicator:(id)arg0;

@end
