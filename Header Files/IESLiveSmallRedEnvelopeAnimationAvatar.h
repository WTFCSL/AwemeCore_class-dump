//
//     Generated by private class-dump
//

@class IESLiveGradientView, UIImageView;

@interface IESLiveSmallRedEnvelopeAnimationAvatar : UIView {
    IESLiveGradientView *_backgroundView;
    UIImageView *_avatar;
}

@property (retain, nonatomic) IESLiveGradientView *backgroundView;
@property (retain, nonatomic) UIImageView *avatar;

- (void)updateAvatar:(id)arg0;
- (void)updateCornerRadius:(double)arg0;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setBackgroundView:(id)arg0;
- (id)avatar;
- (void)setAvatar:(id)arg0;

@end
