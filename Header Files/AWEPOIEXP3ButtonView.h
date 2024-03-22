//
//     Generated by private class-dump
//

@class NSString, AWEPOIEXP3ButtonViewStyle, UIButton;

@interface AWEPOIEXP3ButtonView : UIView {
    double _viewNeedWidth;
    NSString *_title;
    AWEPOIEXP3ButtonViewStyle *_style;
    UIButton *_actionButton;
}

@property (readonly, nonatomic) double viewNeedWidth;
@property (readonly, copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEPOIEXP3ButtonViewStyle *style;
@property (retain, nonatomic) UIButton *actionButton;

- (void)p_setupUI;
- (void)configWithButtonTitle:(id)arg0;
- (double)viewNeedWidth;
- (id)style;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)title;
- (void)setStyle:(id)arg0;
- (id)actionButton;
- (void)setActionButton:(id)arg0;

@end