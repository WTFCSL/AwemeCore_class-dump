//
//     Generated by private class-dump
//

@interface DUXTextTag : DUXTag {
    BOOL _adaptBigFont;
    long long _style;
    long long _sizeStyle;
    long long _fontWeight;
}

@property (nonatomic) long long style;
@property (nonatomic) long long sizeStyle;
@property (nonatomic) long long fontWeight;
@property (nonatomic) BOOL adaptBigFont;

- (id)initWithStyle:(long long)arg0 sizeStyle:(long long)arg1;
- (void)setAdaptBigFont:(BOOL)arg0;
- (id)initWithStyle:(long long)arg0 sizeStyle:(long long)arg1 title:(id)arg2;
- (BOOL)adaptBigFont;
- (void)setSizeStyle:(long long)arg0;
- (void)intrinsicActionSizeStyle;
- (void)intrinsicActionStyle;
- (double)intrinsicIconSize;
- (double)p_intrinsicContentHeight;
- (BOOL)p_showIconImageView;
- (long long)style;
- (long long)fontWeight;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setFontWeight:(long long)arg0;
- (void)setStyle:(long long)arg0;
- (long long)sizeStyle;

@end
