//
//     Generated by private class-dump
//

@class UIImageView, UIButton, UILabel;

@interface AWEBatManStickerAnimationView : UIView {
    UIImageView *_animationImageView;
    UIButton *_enterButton;
    UILabel *_descriptionLabel;
    UIButton *_closeButton;
    UIButton *_maskButton;
}

@property (retain, nonatomic) UIImageView *animationImageView;
@property (retain, nonatomic) UIButton *enterButton;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *maskButton;

- (void)setEntranceInfo:(id)arg0;
- (id)enterButton;
- (void)setEnterButton:(id)arg0;
- (void)setMaskButton:(id)arg0;
- (id)maskButton;
- (void).cxx_destruct;
- (void)setDescriptionLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)descriptionLabel;
- (void)startAnimation;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setupSubviews;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)animationImageView;
- (void)setAnimationImageView:(id)arg0;

@end
