//
//     Generated by private class-dump
//

@class IESECGoodsDetailParameters, UIView, IESECButton;

@interface IESECGoodsActivityCouponView : UIView {
    IESECGoodsDetailParameters *_parameters;
    IESECButton *_leftAreaButton;
    IESECButton *_rightAreaButton;
    UIView *_rightShadowBGView;
}

@property (retain, nonatomic) IESECGoodsDetailParameters *parameters;
@property (retain, nonatomic) IESECButton *leftAreaButton;
@property (retain, nonatomic) IESECButton *rightAreaButton;
@property (retain, nonatomic) UIView *rightShadowBGView;

- (void)setupSubViews;
- (id)leftAreaButton;
- (id)rightShadowBGView;
- (id)rightAreaButton;
- (void)addShadowToView:(id)arg0 shadowColor:(id)arg1;
- (void)setLeftAreaButton:(id)arg0;
- (void)setRightAreaButton:(id)arg0;
- (void)setRightShadowBGView:(id)arg0;
- (id)initWithParameters:(id)arg0;
- (void).cxx_destruct;
- (void)setParameters:(id)arg0;
- (id)parameters;
- (void)updateData;

@end
