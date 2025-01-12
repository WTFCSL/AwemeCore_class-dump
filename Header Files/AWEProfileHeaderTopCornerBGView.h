//
//     Generated by private class-dump
//

@class AWEProfileHeaderContext, AWEProfileHeaderColorfulView;

@interface AWEProfileHeaderTopCornerBGView : UIView {
    AWEProfileHeaderContext *_context;
    double _maskHeight;
    AWEProfileHeaderColorfulView *_colorfulView;
}

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (nonatomic) double maskHeight;
@property (retain, nonatomic) AWEProfileHeaderColorfulView *colorfulView;

- (void)p_setupUI;
- (void)refreshAlphaForHeaderView:(double)arg0;
- (void)p_addMaskWithHeight:(double)arg0;
- (id)colorfulView;
- (void)setColorfulView:(id)arg0;
- (double)maskHeight;
- (void)setMaskHeight:(double)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)context;
- (void)layoutSubviews;
- (void)updateWithContext:(id)arg0;

@end
