//
//     Generated by private class-dump
//

@class AWEProfileHeaderContext, UIView;

@interface AWEProfileHeaderContainerView : UIView {
    AWEProfileHeaderContext *_context;
    UIView *_bgCornerView;
}

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (retain, nonatomic) UIView *bgCornerView;

- (void)configWithContext:(id)arg0;
- (void)refreshAlphaForHeaderView:(double)arg0;
- (BOOL)enableBgCornerView;
- (id)bgCornerView;
- (void)refreshHeaderFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 bgCornerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)setBgCornerView:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)context;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;

@end
