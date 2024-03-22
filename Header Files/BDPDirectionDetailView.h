//
//     Generated by private class-dump
//

@class BDPDirectionDetailButton, CAShapeLayer, UILabel, UIView, CALayer;

@interface BDPDirectionDetailView : UIView {
    BDPDirectionDetailButton *_naviButton;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIView *_seperatorView;
    CALayer *_maskLayer;
    CAShapeLayer *_shadowLayer;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIView *seperatorView;
@property (retain, nonatomic) BDPDirectionDetailButton *naviButton;
@property (retain, nonatomic) CALayer *maskLayer;
@property (retain, nonatomic) CAShapeLayer *shadowLayer;

- (id)naviButton;
- (void)setNaviButton:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)shadowLayer;
- (id)maskLayer;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (void)setShadowLayer:(id)arg0;
- (void)setMaskLayer:(id)arg0;
- (id)seperatorView;
- (void)setSeperatorView:(id)arg0;
- (void)updateWithModel:(id)arg0;

@end
