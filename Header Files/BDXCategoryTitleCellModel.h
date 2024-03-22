//
//     Generated by private class-dump
//

@class NSString, UIColor, UIFont;

@interface BDXCategoryTitleCellModel : BDXCategoryIndicatorCellModel {
    BOOL _titleLabelMaskEnabled;
    BOOL _titleLabelZoomEnabled;
    BOOL _titleLabelStrokeWidthEnabled;
    NSString *_title;
    double _titleHeight;
    long long _titleNumberOfLines;
    double _titleLabelVerticalOffset;
    UIColor *_titleNormalColor;
    UIColor *_titleCurrentColor;
    UIColor *_titleSelectedColor;
    UIFont *_titleFont;
    UIFont *_titleSelectedFont;
    double _titleLabelNormalZoomScale;
    double _titleLabelCurrentZoomScale;
    double _titleLabelSelectedZoomScale;
    double _titleLabelZoomSelectedVerticalOffset;
    double _titleLabelNormalStrokeWidth;
    double _titleLabelCurrentStrokeWidth;
    double _titleLabelSelectedStrokeWidth;
    unsigned long long _titleLabelAnchorPointStyle;
}

@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) double titleHeight;
@property (nonatomic) long long titleNumberOfLines;
@property (nonatomic) double titleLabelVerticalOffset;
@property (retain, nonatomic) UIColor *titleNormalColor;
@property (retain, nonatomic) UIColor *titleCurrentColor;
@property (retain, nonatomic) UIColor *titleSelectedColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *titleSelectedFont;
@property (nonatomic, getter=isTitleLabelMaskEnabled) BOOL titleLabelMaskEnabled;
@property (nonatomic, getter=isTitleLabelZoomEnabled) BOOL titleLabelZoomEnabled;
@property (nonatomic) double titleLabelNormalZoomScale;
@property (nonatomic) double titleLabelCurrentZoomScale;
@property (nonatomic) double titleLabelSelectedZoomScale;
@property (nonatomic) double titleLabelZoomSelectedVerticalOffset;
@property (nonatomic, getter=isTitleLabelStrokeWidthEnabled) BOOL titleLabelStrokeWidthEnabled;
@property (nonatomic) double titleLabelNormalStrokeWidth;
@property (nonatomic) double titleLabelCurrentStrokeWidth;
@property (nonatomic) double titleLabelSelectedStrokeWidth;
@property (nonatomic) unsigned long long titleLabelAnchorPointStyle;

- (long long)titleNumberOfLines;
- (void)setTitleNumberOfLines:(long long)arg0;
- (void)updateNumberSizeWidthIfNeeded;
- (unsigned long long)titleLabelAnchorPointStyle;
- (double)titleLabelVerticalOffset;
- (double)titleLabelCurrentZoomScale;
- (double)titleLabelNormalZoomScale;
- (double)titleLabelSelectedZoomScale;
- (double)titleLabelZoomSelectedVerticalOffset;
- (BOOL)isTitleLabelZoomEnabled;
- (id)titleSelectedFont;
- (BOOL)isTitleLabelStrokeWidthEnabled;
- (double)titleLabelCurrentStrokeWidth;
- (BOOL)isTitleLabelMaskEnabled;
- (id)titleNormalColor;
- (id)titleSelectedColor;
- (id)titleCurrentColor;
- (void)setTitleLabelCurrentZoomScale:(double)arg0;
- (double)titleLabelNormalStrokeWidth;
- (double)titleLabelSelectedStrokeWidth;
- (void)setTitleLabelCurrentStrokeWidth:(double)arg0;
- (void)setTitleCurrentColor:(id)arg0;
- (void)setTitleLabelVerticalOffset:(double)arg0;
- (void)setTitleNormalColor:(id)arg0;
- (void)setTitleSelectedColor:(id)arg0;
- (void)setTitleSelectedFont:(id)arg0;
- (void)setTitleLabelMaskEnabled:(BOOL)arg0;
- (void)setTitleLabelZoomEnabled:(BOOL)arg0;
- (void)setTitleLabelNormalZoomScale:(double)arg0;
- (void)setTitleLabelSelectedZoomScale:(double)arg0;
- (void)setTitleLabelZoomSelectedVerticalOffset:(double)arg0;
- (void)setTitleLabelStrokeWidthEnabled:(BOOL)arg0;
- (void)setTitleLabelNormalStrokeWidth:(double)arg0;
- (void)setTitleLabelSelectedStrokeWidth:(double)arg0;
- (void)setTitleLabelAnchorPointStyle:(unsigned long long)arg0;
- (double)titleHeight;
- (void).cxx_destruct;
- (id)title;
- (id)titleFont;
- (void)setTitleFont:(id)arg0;
- (void)setTitle:(id)arg0;

@end