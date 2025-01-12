//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface AWENewVideoCoverPreviewRemindView : UICollectionViewCell {
    UIImageView *_imageView;
    UILabel *_tipsLabel;
    UIView *_placeholderView;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIView *placeholderView;

- (id)tipsLabel;
- (void)setTipsLabel:(id)arg0;
- (void)configLabel;
- (id)placeholderView;
- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (void)setPlaceholderView:(id)arg0;
- (void)setupUI;

@end
