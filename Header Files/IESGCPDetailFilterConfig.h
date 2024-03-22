//
//     Generated by private class-dump
//

@class UIColor, UIFont;

@interface IESGCPDetailFilterConfig : NSObject {
    BOOL _isMultipleSelection;
    BOOL _needFadeOut;
    UIColor *_filterViewBackgroundColor;
    UIColor *_filterCollectionViewBackgroundColor;
    double _filterCollectionViewHeight;
    double _filterCellSpace;
    double _filterCellTopSpace;
    double _filterCellLeftSpace;
    long long _textAlignment;
    double _filterCellCornerRadius;
    double _filterCellBorderWidth;
    UIColor *_filterCellSelectedBorderColor;
    UIColor *_filterCellUnselectedBorderColor;
    UIColor *_filterCellSelectedTextColor;
    UIColor *_filterCellUnselectedTextColor;
    UIFont *_filterCellSelectedTextFont;
    UIFont *_filterCellUnselectedTextFont;
    UIColor *_filterCellSelectedBackgroundColor;
    UIColor *_filterCellUnselectedBackgroundColor;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _labelInsets;
}

@property (retain, nonatomic) UIColor *filterViewBackgroundColor;
@property (retain, nonatomic) UIColor *filterCollectionViewBackgroundColor;
@property (nonatomic) double filterCollectionViewHeight;
@property (nonatomic) double filterCellSpace;
@property (nonatomic) double filterCellTopSpace;
@property (nonatomic) double filterCellLeftSpace;
@property (nonatomic) BOOL isMultipleSelection;
@property (nonatomic) BOOL needFadeOut;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } labelInsets;
@property (nonatomic) long long textAlignment;
@property (nonatomic) double filterCellCornerRadius;
@property (nonatomic) double filterCellBorderWidth;
@property (retain, nonatomic) UIColor *filterCellSelectedBorderColor;
@property (retain, nonatomic) UIColor *filterCellUnselectedBorderColor;
@property (retain, nonatomic) UIColor *filterCellSelectedTextColor;
@property (retain, nonatomic) UIColor *filterCellUnselectedTextColor;
@property (retain, nonatomic) UIFont *filterCellSelectedTextFont;
@property (retain, nonatomic) UIFont *filterCellUnselectedTextFont;
@property (retain, nonatomic) UIColor *filterCellSelectedBackgroundColor;
@property (retain, nonatomic) UIColor *filterCellUnselectedBackgroundColor;

- (void)setFilterCellSelectedTextColor:(id)arg0;
- (void)setFilterCellSelectedBackgroundColor:(id)arg0;
- (void)setFilterCollectionViewHeight:(double)arg0;
- (void)setFilterCellLeftSpace:(double)arg0;
- (void)setLabelInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setFilterCellCornerRadius:(double)arg0;
- (void)setFilterCellSelectedTextFont:(id)arg0;
- (void)setFilterCellUnselectedTextFont:(id)arg0;
- (void)setFilterCellUnselectedTextColor:(id)arg0;
- (void)setFilterCellUnselectedBackgroundColor:(id)arg0;
- (void)setNeedFadeOut:(BOOL)arg0;
- (void)setFilterViewBackgroundColor:(id)arg0;
- (void)setFilterCellTopSpace:(double)arg0;
- (void)setFilterCellSpace:(double)arg0;
- (void)setFilterCollectionViewBackgroundColor:(id)arg0;
- (id)filterViewBackgroundColor;
- (id)filterCollectionViewBackgroundColor;
- (double)filterCollectionViewHeight;
- (double)filterCellSpace;
- (double)filterCellTopSpace;
- (double)filterCellLeftSpace;
- (BOOL)isMultipleSelection;
- (void)setIsMultipleSelection:(BOOL)arg0;
- (BOOL)needFadeOut;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })labelInsets;
- (double)filterCellCornerRadius;
- (double)filterCellBorderWidth;
- (void)setFilterCellBorderWidth:(double)arg0;
- (id)filterCellSelectedBorderColor;
- (void)setFilterCellSelectedBorderColor:(id)arg0;
- (id)filterCellUnselectedBorderColor;
- (void)setFilterCellUnselectedBorderColor:(id)arg0;
- (id)filterCellSelectedTextColor;
- (id)filterCellUnselectedTextColor;
- (id)filterCellSelectedTextFont;
- (id)filterCellUnselectedTextFont;
- (id)filterCellSelectedBackgroundColor;
- (id)filterCellUnselectedBackgroundColor;
- (id)init;
- (void).cxx_destruct;
- (long long)textAlignment;
- (void)setTextAlignment:(long long)arg0;

@end
