//
//     Generated by private class-dump
//

@class UIImageView, UIView, UILabel, UIButton;

@interface AWECompanyUploadImageCell : UICollectionViewCell {
    UIView *_uploadContentView;
    UIView *_imageContentView;
    UIImageView *_imageView;
    UIButton *_deleteButton;
    UILabel *_uploadTextLabel;
    long long _maxUploadImageCount;
}

@property (retain, nonatomic) UIView *uploadContentView;
@property (retain, nonatomic) UIView *imageContentView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UILabel *uploadTextLabel;
@property (nonatomic) long long maxUploadImageCount;

- (long long)maxUploadImageCount;
- (void)setMaxUploadImageCount:(long long)arg0;
- (void)p_setupUploadContentView;
- (void)p_setupImageContentView;
- (id)uploadTextLabel;
- (void)setUploadContentView:(id)arg0;
- (id)uploadContentView;
- (void)setUploadTextLabel:(id)arg0;
- (void)updateImage:(id)arg0 forRow:(long long)arg1;
- (void)updateUploadStyleWithCount:(long long)arg0;
- (void)setDeleteButton:(id)arg0;
- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (id)deleteButton;
- (id)imageContentView;
- (void)setImageContentView:(id)arg0;

@end
