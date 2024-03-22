//
//     Generated by private class-dump
//

@class UIImageView, UILabel;
@protocol AWEEnterpriseCenterUserProfileEntryCardDelegate;

@interface AWEEnterpriseCenterUserProfileEntryCard : UIView {
    id<AWEEnterpriseCenterUserProfileEntryCardDelegate> _delegate;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (weak, nonatomic) id<AWEEnterpriseCenterUserProfileEntryCardDelegate> delegate;

- (void)viewTapped;
- (void)configWithCardModel:(id)arg0;
- (void)setSubtitleLabel:(id)arg0;
- (void).cxx_destruct;
- (id)imageView;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;

@end
