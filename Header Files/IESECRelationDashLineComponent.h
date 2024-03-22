//
//     Generated by private class-dump
//

@class CAShapeLayer;

@interface IESECRelationDashLineComponent : UIView <IESECLLComponent> {
    CAShapeLayer *_dashLineLayer;
}

@property (retain, nonatomic) CAShapeLayer *dashLineLayer;

+ (id /* block */)dashLine;
+ (id /* block */)solidLineWithPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
+ (id /* block */)dashLineWithPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0 width:(double)arg1;

- (void)updateUIWithModel:(id)arg0;
- (id)dashLineLayer;
- (void)setDashLineLayer:(id)arg0;
- (double)p_dashLineWidth;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
