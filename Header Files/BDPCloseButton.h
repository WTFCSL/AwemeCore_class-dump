//
//     Generated by private class-dump
//

@class UIColor;

@interface BDPCloseButton : UIButton {
    BOOL _needCircle;
    long long _type;
    UIColor *_xColor;
    UIColor *_circleColor;
    struct CGPoint { double x; double y; } _translate;
}

@property (nonatomic) long long type;
@property (nonatomic) BOOL needCircle;
@property (nonatomic) struct CGPoint { double x; double y; } translate;
@property (retain, nonatomic) UIColor *xColor;
@property (retain, nonatomic) UIColor *circleColor;

- (void)setXColor:(id)arg0;
- (void)setCircleColor:(id)arg0;
- (id)xColor;
- (id)circleColor;
- (void)setNeedCircle:(BOOL)arg0;
- (void)drawRectType24Black:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)drawRectType28Black:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)drawRectType28White:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)drawRectType24White:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)drawRectTypeCustom:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)needCircle;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (long long)type;
- (id)initWithType:(long long)arg0;
- (void)setType:(long long)arg0;
- (struct CGPoint { double x0; double x1; })translate;
- (void)setTranslate:(struct CGPoint { double x0; double x1; })arg0;

@end