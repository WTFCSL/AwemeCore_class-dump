//
//     Generated by private class-dump
//

@class UIColor, LynxPlatformLength;

@interface LynxBackgroundInfo : NSObject {
    LynxPlatformLength *borderRadiusCalc[8];
    long long _borderStyles[4];
    BOOL _BGChangedNoneImage;
    BOOL _BGChangedImage;
    BOOL _borderChanged;
    double _outlineWidth;
    long long _outlineStyle;
    UIColor *_outlineColor;
    UIColor *_borderTopColor;
    UIColor *_borderBottomColor;
    UIColor *_borderLeftColor;
    UIColor *_borderRightColor;
    UIColor *_backgroundColor;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _borderWidth;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _paddingWidth;
    struct { struct _LynxBorderUnitValue { double val; long long unit; } topLeftX; struct _LynxBorderUnitValue { double val; long long unit; } topLeftY; struct _LynxBorderUnitValue { double val; long long unit; } topRightX; struct _LynxBorderUnitValue { double val; long long unit; } topRightY; struct _LynxBorderUnitValue { double val; long long unit; } bottomLeftX; struct _LynxBorderUnitValue { double val; long long unit; } bottomLeftY; struct _LynxBorderUnitValue { double val; long long unit; } bottomRightX; struct _LynxBorderUnitValue { double val; long long unit; } bottomRightY; } _borderRadius;
}

@property (nonatomic) double outlineWidth;
@property (nonatomic) long long outlineStyle;
@property (retain, nonatomic) UIColor *outlineColor;
@property (retain, nonatomic) UIColor *borderTopColor;
@property (retain, nonatomic) UIColor *borderBottomColor;
@property (retain, nonatomic) UIColor *borderLeftColor;
@property (retain, nonatomic) UIColor *borderRightColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) long long borderTopStyle;
@property (nonatomic) long long borderBottomStyle;
@property (nonatomic) long long borderLeftStyle;
@property (nonatomic) long long borderRightStyle;
@property (nonatomic) struct { struct _LynxBorderUnitValue { double val; long long unit; } topLeftX; struct _LynxBorderUnitValue { double val; long long unit; } topLeftY; struct _LynxBorderUnitValue { double val; long long unit; } topRightX; struct _LynxBorderUnitValue { double val; long long unit; } topRightY; struct _LynxBorderUnitValue { double val; long long unit; } bottomLeftX; struct _LynxBorderUnitValue { double val; long long unit; } bottomLeftY; struct _LynxBorderUnitValue { double val; long long unit; } bottomRightX; struct _LynxBorderUnitValue { double val; long long unit; } bottomRightY; } borderRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } borderWidth;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } paddingWidth;
@property (nonatomic) BOOL BGChangedNoneImage;
@property (nonatomic) BOOL BGChangedImage;
@property (nonatomic) BOOL borderChanged;

- (struct { struct CGColor *x0; struct CGColor *x1; struct CGColor *x2; struct CGColor *x3; })borderColors;
- (BOOL)hasIdenticalBorderWidths;
- (BOOL)hasIdenticalBorderStyles;
- (BOOL)hasCoincidentBorderColors;
- (BOOL)hasDifferentBorderRadius;
- (id)getBorderLayerImageWithSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGPath { } *)getBorderLayerPathWithSize:(struct CGSize { double x0; double x1; })arg0;
- (void)makeCssDefaultValueToFitW3c;
- (BOOL)updateOutlineWidth:(double)arg0;
- (BOOL)updateOutlineColor:(id)arg0;
- (BOOL)updateOutlineStyle:(long long)arg0;
- (void)updateBorderColor:(long long)arg0 value:(id)arg1;
- (BOOL)updateBorderStyle:(long long)arg0 value:(long long)arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getPaddingRect:(struct CGSize { double x0; double x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct { struct _LynxBorderUnitValue { double x0; long long x1; } x0; struct _LynxBorderUnitValue { double x0; long long x1; } x1; struct _LynxBorderUnitValue { double x0; long long x1; } x2; struct _LynxBorderUnitValue { double x0; long long x1; } x3; struct _LynxBorderUnitValue { double x0; long long x1; } x4; struct _LynxBorderUnitValue { double x0; long long x1; } x5; struct _LynxBorderUnitValue { double x0; long long x1; } x6; struct _LynxBorderUnitValue { double x0; long long x1; } x7; })getBorderRadius;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getBorderWidth;
- (BOOL)isSimpleBorder;
- (BOOL)canUseBorderShapeLayer;
- (BOOL)BGChangedNoneImage;
- (void)setBGChangedNoneImage:(BOOL)arg0;
- (BOOL)BGChangedImage;
- (void)setBGChangedImage:(BOOL)arg0;
- (BOOL)borderChanged;
- (void)setBorderChanged:(BOOL)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })borderWidth;
- (id)init;
- (void).cxx_destruct;
- (void)setOutlineStyle:(long long)arg0;
- (void)setBorderWidth:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (long long)outlineStyle;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg0;
- (void)setOutlineColor:(id)arg0;
- (id)outlineColor;
- (struct { struct _LynxBorderUnitValue { double x0; long long x1; } x0; struct _LynxBorderUnitValue { double x0; long long x1; } x1; struct _LynxBorderUnitValue { double x0; long long x1; } x2; struct _LynxBorderUnitValue { double x0; long long x1; } x3; struct _LynxBorderUnitValue { double x0; long long x1; } x4; struct _LynxBorderUnitValue { double x0; long long x1; } x5; struct _LynxBorderUnitValue { double x0; long long x1; } x6; struct _LynxBorderUnitValue { double x0; long long x1; } x7; })borderRadius;
- (id)borderTopColor;
- (void)setBorderTopColor:(id)arg0;
- (id)borderRightColor;
- (void)setBorderRightColor:(id)arg0;
- (id)borderBottomColor;
- (void)setBorderBottomColor:(id)arg0;
- (id)borderLeftColor;
- (void)setBorderLeftColor:(id)arg0;
- (long long)borderTopStyle;
- (void)setBorderTopStyle:(long long)arg0;
- (long long)borderRightStyle;
- (void)setBorderRightStyle:(long long)arg0;
- (long long)borderBottomStyle;
- (void)setBorderBottomStyle:(long long)arg0;
- (long long)borderLeftStyle;
- (void)setBorderLeftStyle:(long long)arg0;
- (double)outlineWidth;
- (void)setOutlineWidth:(double)arg0;
- (BOOL)hasBorder;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getPaddingInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })paddingWidth;
- (void)setPaddingWidth:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setBorderRadius:(struct { struct _LynxBorderUnitValue { double x0; long long x1; } x0; struct _LynxBorderUnitValue { double x0; long long x1; } x1; struct _LynxBorderUnitValue { double x0; long long x1; } x2; struct _LynxBorderUnitValue { double x0; long long x1; } x3; struct _LynxBorderUnitValue { double x0; long long x1; } x4; struct _LynxBorderUnitValue { double x0; long long x1; } x5; struct _LynxBorderUnitValue { double x0; long long x1; } x6; struct _LynxBorderUnitValue { double x0; long long x1; } x7; })arg0;

@end