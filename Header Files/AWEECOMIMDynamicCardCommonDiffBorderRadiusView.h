//
//     Generated by private class-dump
//

@class UIImageView, AWEECOMIMDynamicCardCommonDiffBorderRadiusViewModel, CAShapeLayer;

@interface AWEECOMIMDynamicCardCommonDiffBorderRadiusView : UIView {
    CAShapeLayer *_borderLayer;
    UIImageView *_imgView;
    AWEECOMIMDynamicCardCommonDiffBorderRadiusViewModel *_model;
}

@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (retain, nonatomic) UIImageView *imgView;
@property (retain, nonatomic) AWEECOMIMDynamicCardCommonDiffBorderRadiusViewModel *model;

- (void)updateViewWithModel:(id)arg0;
- (id)imgView;
- (void)setImgView:(id)arg0;
- (void)addBorderToImageView:(id)arg0;
- (void)addDifferentCornerRadiusForLeftTop:(double)arg0 leftBottom:(double)arg1 rightTop:(double)arg2 rightBottom:(double)arg3 contianerBorderColor:(id)arg4 contianerBorderWidth:(double)arg5 isDash:(BOOL)arg6;
- (void)updateViewWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)didResetFrame;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)borderLayer;
- (void)setBorderLayer:(id)arg0;

@end
