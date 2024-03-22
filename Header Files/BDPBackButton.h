//
//     Generated by private class-dump
//

@class UIColor;

@interface BDPBackButton : UIButton {
    long long _type;
    UIColor *_strokeColor;
    struct CGSize { double width; double height; } _scale;
    struct CGPoint { double x; double y; } _translate;
}

@property (nonatomic) long long type;
@property (nonatomic) struct CGSize { double width; double height; } scale;
@property (nonatomic) struct CGPoint { double x; double y; } translate;
@property (retain, nonatomic) UIColor *strokeColor;

- (void)drawRect24:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)drawRect28Black:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)drawRectCustom:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)drawRectBase:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void).cxx_destruct;
- (id)strokeColor;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (long long)type;
- (struct CGSize { double x0; double x1; })scale;
- (void)setStrokeColor:(id)arg0;
- (void)setType:(long long)arg0;
- (void)setScale:(struct CGSize { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })translate;
- (void)setTranslate:(struct CGPoint { double x0; double x1; })arg0;

@end