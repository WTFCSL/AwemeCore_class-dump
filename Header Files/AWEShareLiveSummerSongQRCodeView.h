//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWEShareLiveSummerSongQRCodeView : UIView {
    UIImageView *_bgImageView;
    UILabel *_nickNameLabel;
    UILabel *_descriptionLabel;
    UIImageView *_qrCodeImageView;
}

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *qrCodeImageView;

- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg0;
- (void)addQRCodeImage:(id)arg0;
- (void).cxx_destruct;
- (void)setDescriptionLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)descriptionLabel;
- (void)setupUI;
- (void)setBgImageView:(id)arg0;
- (id)bgImageView;
- (id)qrCodeImageView;
- (void)setQrCodeImageView:(id)arg0;

@end
