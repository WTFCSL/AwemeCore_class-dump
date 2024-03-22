//
//     Generated by private class-dump
//

@interface IESLiveCustomButton : IESLiveButton {
    BOOL _disableAdjustSpacing;
    unsigned long long _buttonSize;
    unsigned long long _style;
    double _spacing;
    double _cornerRadius;
    double _minHeight;
}

@property (nonatomic) unsigned long long buttonSize;
@property (nonatomic) unsigned long long style;
@property (nonatomic) double minHeight;
@property (nonatomic) double spacing;
@property (nonatomic) BOOL disableAdjustSpacing;
@property (nonatomic) double cornerRadius;

+ (id)buttonWithStyle:(unsigned long long)arg0;

- (void)applyCornerRadius:(double)arg0;
- (void)renderButtonSize:(unsigned long long)arg0;
- (void)updateContentSpacingIfNeeded;
- (BOOL)disableAdjustSpacing;
- (void)setDisableAdjustSpacing:(BOOL)arg0;
- (double)spacing;
- (unsigned long long)style;
- (void)setSpacing:(double)arg0;
- (id)initWithStyle:(unsigned long long)arg0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)cornerRadius;
- (void)setMinHeight:(double)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (unsigned long long)buttonSize;
- (void)layoutSubviews;
- (void)setButtonSize:(unsigned long long)arg0;
- (void)setCornerRadius:(double)arg0;
- (void)setStyle:(unsigned long long)arg0;
- (double)minHeight;
- (void)renderStyle;

@end
