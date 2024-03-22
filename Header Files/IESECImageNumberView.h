//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface IESECImageNumberView : UIView {
    UIImageView *_picImage;
    UILabel *_countLabel;
}

@property (retain, nonatomic) UIImageView *picImage;
@property (retain, nonatomic) UILabel *countLabel;

- (void)updateWithCommentModel:(id)arg0;
- (id)picImage;
- (void)setPicImage:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;
- (void)updateWithCount:(long long)arg0;
- (id)countLabel;
- (void)setCountLabel:(id)arg0;

@end
