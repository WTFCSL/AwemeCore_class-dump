//
//     Generated by private class-dump
//

@class CAShapeLayer;

@interface IESECLiveTabBorderView : UIView {
    CAShapeLayer *_borderLayer;
    struct CGSize { double width; double height; } _cornerSize;
}

@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (nonatomic) struct CGSize { double width; double height; } cornerSize;

- (void)layoutBorderLayer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })cornerSize;
- (void)setCornerSize:(struct CGSize { double x0; double x1; })arg0;
- (id)borderLayer;
- (void)setBorderLayer:(id)arg0;

@end
