//
//     Generated by private class-dump
//

@class UILabel, UIView;

@interface AWEProcessIndicatorBaseView : UIView {
    UIView *_separatorView;
    UIView *_container;
    UILabel *_progressLeftLabel;
    UILabel *_progressRightLabel;
    double _contentMargin;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _edgeInsets;
}

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *progressLeftLabel;
@property (retain, nonatomic) UILabel *progressRightLabel;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) double contentMargin;
@property (retain, nonatomic) UIView *separatorView;

- (id)progressLeftLabel;
- (id)progressRightLabel;
- (void)setProgressLeftLabel:(id)arg0;
- (void)setProgressRightLabel:(id)arg0;
- (void)setRightContent:(id)arg0;
- (void)setLeftContent:(id)arg0;
- (void)setContentEdgeInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setLeftContentWithAttributeStr:(id)arg0;
- (void)setRightContentWithAttributeStr:(id)arg0;
- (void)setLeftContentFont:(id)arg0;
- (void)setRightContentFont:(id)arg0;
- (void)setLeftContentColor:(id)arg0;
- (void)setRightContentColor:(id)arg0;
- (id)container;
- (id)init;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void).cxx_destruct;
- (void)setSeparatorView:(id)arg0;
- (void)setContainer:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (void)setContentMargin:(double)arg0;
- (id)separatorView;
- (double)contentMargin;
- (void)setupUI;

@end
