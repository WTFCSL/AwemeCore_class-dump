//
//     Generated by private class-dump
//

@class UITapGestureRecognizer, AWEAwemeModel;

@interface AWEBasicModeFakeElement : UIView {
    BOOL _disableTapGes;
    AWEAwemeModel *_model;
    UITapGestureRecognizer *_tap;
}

@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } hitTestEdgeInsets;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL disableTapGes;

- (void)p_setup;
- (void)p_addTapGes;
- (void)setDisableTapGes:(BOOL)arg0;
- (BOOL)disableTapGes;
- (void)setModel:(id)arg0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void).cxx_destruct;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })hitTestEdgeInsets;
- (void)tap:(id)arg0;
- (void)setHitTestEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)tap;
- (void)setTap:(id)arg0;

@end
