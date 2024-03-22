//
//     Generated by private class-dump
//

@class NSArray, UIColor, UIView;

@interface BDXCategoryIndicatorView : BDXCategoryBaseView {
    BOOL _cellBackgroundColorGradientEnabled;
    BOOL _separatorLineShowEnabled;
    NSArray *_indicators;
    UIColor *_cellBackgroundUnselectedColor;
    UIColor *_cellBackgroundSelectedColor;
    UIColor *_separatorLineColor;
    UIView *_lineView;
    struct CGSize { double width; double height; } _separatorLineSize;
}

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) NSArray *indicators;
@property (nonatomic, getter=isCellBackgroundColorGradientEnabled) BOOL cellBackgroundColorGradientEnabled;
@property (retain, nonatomic) UIColor *cellBackgroundUnselectedColor;
@property (retain, nonatomic) UIColor *cellBackgroundSelectedColor;
@property (nonatomic, getter=isSeparatorLineShowEnabled) BOOL separatorLineShowEnabled;
@property (retain, nonatomic) UIColor *separatorLineColor;
@property (nonatomic) struct CGSize { double width; double height; } separatorLineSize;

- (void)setIndicators:(id)arg0;
- (void)setSeparatorLineColor:(id)arg0;
- (void)initializeData;
- (BOOL)selectCellAtIndex:(long long)arg0 selectedType:(unsigned long long)arg1;
- (void)contentOffsetOfContentScrollViewDidChanged:(struct CGPoint { double x0; double x1; })arg0;
- (void)refreshSelectedCellModel:(id)arg0 unselectedCellModel:(id)arg1;
- (void)refreshLeftCellModel:(id)arg0 rightCellModel:(id)arg1 ratio:(double)arg2;
- (struct CGSize { double x0; double x1; })separatorLineSize;
- (BOOL)isCellBackgroundColorGradientEnabled;
- (id)cellBackgroundUnselectedColor;
- (void)setSeparatorLineSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setCellBackgroundColorGradientEnabled:(BOOL)arg0;
- (void)setCellBackgroundSelectedColor:(id)arg0;
- (void)setCellBackgroundUnselectedColor:(id)arg0;
- (void)resetLineView;
- (BOOL)isSeparatorLineShowEnabled;
- (void)setSeparatorLineShowEnabled:(BOOL)arg0;
- (id)indicators;
- (void).cxx_destruct;
- (id)separatorLineColor;
- (void)refreshState;
- (id)cellBackgroundSelectedColor;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)initializeViews;

@end
