//
//     Generated by private class-dump
//

@class LynxTextRenderer, LynxTextIndent, NSString, NSMutableAttributedString, LineSpacingAdaptation;

@interface LynxTextShadowNode : LynxBaseTextShadowNode <LynxCustomMeasureDelegate> {
    BOOL _enableTailColorConvert;
    BOOL _isCalcVerticalAlignValue;
    LynxTextRenderer *_textRenderer;
    LineSpacingAdaptation *_lineSpacingAdaptation;
    unsigned long long _textOverflow;
    long long _overflow;
    unsigned long long _whiteSpace;
    long long _maxLineNum;
    long long _maxTextLength;
    long long _textVerticalAlign;
    NSMutableAttributedString *_attrString;
    double _maxAscender;
    double _maxDescender;
    double _maxLineAscender;
    double _maxLineDescender;
    double _maxTruncationLineAscender;
    double _maxTruncationLineDescender;
    double _maxXHeight;
    LynxTextIndent *_textIndent;
    long long _textSingleLineVerticalAlign;
}

@property (retain, nonatomic) LynxTextRenderer *textRenderer;
@property (retain, nonatomic) LineSpacingAdaptation *lineSpacingAdaptation;
@property (nonatomic) unsigned long long textOverflow;
@property (nonatomic) long long overflow;
@property (nonatomic) unsigned long long whiteSpace;
@property (nonatomic) long long maxLineNum;
@property (nonatomic) long long maxTextLength;
@property (nonatomic) long long textVerticalAlign;
@property (retain, nonatomic) NSMutableAttributedString *attrString;
@property (nonatomic) BOOL enableTailColorConvert;
@property (nonatomic) double maxAscender;
@property (nonatomic) double maxDescender;
@property (nonatomic) double maxLineAscender;
@property (nonatomic) double maxLineDescender;
@property (nonatomic) double maxTruncationLineAscender;
@property (nonatomic) double maxTruncationLineDescender;
@property (nonatomic) double maxXHeight;
@property (nonatomic) BOOL isCalcVerticalAlignValue;
@property (retain, nonatomic) LynxTextIndent *textIndent;
@property (nonatomic) long long textSingleLineVerticalAlign;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__124030;
+ (id)__lynx_prop_config__124431;
+ (id)__lynx_prop_config__125832;
+ (id)__lynx_prop_config__127233;
+ (id)__lynx_prop_config__128234;
+ (id)__lynx_prop_config__129235;
+ (id)__lynx_prop_config__130136;
+ (id)__lynx_prop_config__130937;
+ (id)__lynx_prop_config__131838;
+ (id)__lynx_prop_config__133339;
+ (id)__lynx_prop_config__135040;
+ (id)__lynx_prop_config__136441;
+ (id)__lynx_prop_config__137342;
+ (id)__lynx_prop_config__138343;
+ (id)__lynx_prop_config__139744;

- (void)setBackgroundColor:(id)arg0 requestReset:(BOOL)arg1;
- (void)setOverflowX:(unsigned long long)arg0 requestReset:(BOOL)arg1;
- (void)setOverflowY:(unsigned long long)arg0 requestReset:(BOOL)arg1;
- (void)setOverflow:(unsigned long long)arg0 requestReset:(BOOL)arg1;
- (void)setAttrString:(id)arg0;
- (id)attrString;
- (void)adoptNativeLayoutNode:(long long)arg0;
- (struct CGSize { double x0; double x1; })measureNode:(id)arg0 withWidth:(double)arg1 widthMode:(long long)arg2 height:(double)arg3 heightMode:(long long)arg4;
- (unsigned long long)textOverflow;
- (void)setTextOverflow:(unsigned long long)arg0;
- (void)setMaxTextLength:(long long)arg0;
- (long long)maxTextLength;
- (id)getExtraBundle;
- (id)initWithSign:(long long)arg0 tagName:(id)arg1;
- (id)generateAttributedString:(id)arg0 withTextMaxLength:(long long)arg1 withDirection:(long long)arg2;
- (void)layoutDidStart;
- (struct MeasureResult { struct CGSize { double x0; double x1; } x0; double x1; })measureWithMeasureParam:(id)arg0 MeasureContext:(id)arg1;
- (void)alignWithAlignParam:(id)arg0 AlignContext:(id)arg1;
- (void)dispatchLayoutEvent;
- (BOOL)needsEventSet;
- (void)layoutDidUpdate;
- (BOOL)enableTextNonContiguousLayout;
- (long long)maxLineNum;
- (BOOL)enableTailColorConvert;
- (long long)textSingleLineVerticalAlign;
- (void)setTextSingleLineVerticalAlign:(long long)arg0;
- (double)maxLineAscender;
- (void)setMaxLineAscender:(double)arg0;
- (double)maxLineDescender;
- (void)setMaxLineDescender:(double)arg0;
- (long long)textVerticalAlign;
- (void)calculateLineAscenderAndDescenderForAttributeStr:(id)arg0 MeasureParam:(id)arg1 MeasureContext:(id)arg2;
- (id)lineSpacingAdaptation;
- (void)setTextRenderer:(id)arg0;
- (double)maxTruncationLineAscender;
- (double)maxTruncationLineDescender;
- (void)updateLineHeightWithMaxLineAscender:(float)arg0 maxLineDescender:(float)arg1;
- (void)calculateLineSpaceForAttributedStr:(id)arg0;
- (id)textRenderer;
- (double)calcBaselineShiftOffset:(long long)arg0 verticalAlignValue:(double)arg1 withAscender:(double)arg2 withDescender:(double)arg3;
- (void)calculateTruncationLineAscenderAndDescenderMeasureParam:(id)arg0 MeasureContext:(id)arg1;
- (void)setMaxTruncationLineAscender:(double)arg0;
- (void)setMaxTruncationLineDescender:(double)arg0;
- (double)alignInlineNodeInVertical:(long long)arg0 withLineHeight:(double)arg1 withAttachmentHeight:(double)arg2 withAttachmentYPosition:(double)arg3;
- (void)alignOneLine:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0 lineRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 layoutManager:(id)arg2 textContainer:(id)arg3 AlignContext:(id)arg4;
- (void)determineLineSpacing:(id)arg0;
- (void)modifyLineHeightForStorage:(id)arg0;
- (void)addVerticalAlignCenterInline:(id)arg0;
- (void)updateNonVirtualOffspringLayout;
- (void)updateNonVirtualOffspringLayoutForTruncationNode;
- (void)setMaxLineNum:(long long)arg0;
- (void)setEnableTailColorConvert:(BOOL)arg0;
- (void)setMaxeLine:(long long)arg0 requestReset:(BOOL)arg1;
- (void)setTextMaxLength:(long long)arg0 requestReset:(BOOL)arg1;
- (void)setWhiteSpace:(unsigned long long)arg0 requestReset:(BOOL)arg1;
- (void)setTextOverflow:(unsigned long long)arg0 requestReset:(BOOL)arg1;
- (void)setTextVerticalAlign:(id)arg0 requestReset:(BOOL)arg1;
- (void)setVerticalTextAlign:(id)arg0 requestReset:(BOOL)arg1;
- (void)setWordBreakStrategy:(unsigned long long)arg0 requestReset:(BOOL)arg1;
- (void)setEnableTailColorConvert:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)setTextIndent:(id)arg0 requestReset:(BOOL)arg1;
- (void)setXAutoFontSize:(id)arg0 requestReset:(BOOL)arg1;
- (void)setXAutoFontSizePresetSizes:(id)arg0 requestReset:(BOOL)arg1;
- (void)setLineSpacingAdaptation:(id)arg0;
- (double)maxAscender;
- (void)setMaxAscender:(double)arg0;
- (double)maxDescender;
- (void)setMaxDescender:(double)arg0;
- (double)maxXHeight;
- (void)setMaxXHeight:(double)arg0;
- (BOOL)isCalcVerticalAlignValue;
- (void)setIsCalcVerticalAlignValue:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setVerticalAlign:(id)arg0;
- (long long)overflow;
- (void)setOverflow:(long long)arg0;
- (id)textIndent;
- (void)setTextIndent:(id)arg0;
- (unsigned long long)whiteSpace;
- (void)setWhiteSpace:(unsigned long long)arg0;
- (void)setTextVerticalAlign:(long long)arg0;

@end
