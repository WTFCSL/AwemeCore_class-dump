//
//     Generated by private class-dump
//

@class UIImageView, UILabel, AWEScreenShootBaseViewModel;

@interface AWEScreenShootCollectionViewCell : UICollectionViewCell {
    AWEScreenShootBaseViewModel *_screenShootViewModel;
    UIImageView *_imageView;
    UILabel *_titleLable;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) AWEScreenShootBaseViewModel *screenShootViewModel;

- (id)titleLable;
- (void)setTitleLable:(id)arg0;
- (id)screenShootViewModel;
- (void)setScreenShootViewModel:(id)arg0;
- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (void)updateUI;
- (void)setUpUI;

@end
