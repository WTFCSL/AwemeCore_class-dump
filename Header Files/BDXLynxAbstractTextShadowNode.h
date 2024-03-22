//
//     Generated by private class-dump
//

@class NSString, BDXLynxRichTextStyle;

@interface BDXLynxAbstractTextShadowNode : LynxShadowNode <LynxFontFaceObserver, BDXLynxInlineElement> {
    BOOL _dirty;
    BDXLynxRichTextStyle *_textStyle;
}

@property (retain, nonatomic) BDXLynxRichTextStyle *textStyle;
@property (nonatomic) BOOL dirty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__lynx_prop_config__210;
+ (id)__lynx_prop_config__351;
+ (id)__lynx_prop_config__402;
+ (id)__lynx_prop_config__483;
+ (id)__lynx_prop_config__614;
+ (id)__lynx_prop_config__945;
+ (id)__lynx_prop_config__1056;
+ (id)__lynx_prop_config__1157;
+ (id)__lynx_prop_config__1248;
+ (id)__lynx_prop_config__1319;
+ (id)__lynx_prop_config__14310;
+ (id)__lynx_prop_config__16511;
+ (id)__lynx_prop_config__18512;
+ (id)__lynx_prop_config__19413;
+ (id)__lynx_prop_config__20314;
+ (id)__lynx_prop_config__20815;
+ (id)__lynx_prop_config__21816;
+ (id)__lynx_prop_config__23317;
+ (id)__lynx_prop_config__24718;

- (void)setFontSize:(double)arg0 requestReset:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg0 requestReset:(BOOL)arg1;
- (void)onFontFaceLoad;
- (void)setFontWeight:(unsigned long long)arg0 requestReset:(BOOL)arg1;
- (void)setFontFamily:(id)arg0 requestReset:(BOOL)arg1;
- (void)setTextAlign:(unsigned long long)arg0 requestReset:(BOOL)arg1;
- (void)setLetterSpacing:(double)arg0 requestReset:(BOOL)arg1;
- (void)setLineSpacing:(double)arg0 requestReset:(BOOL)arg1;
- (void)setFontStyle:(unsigned long long)arg0 requestReset:(BOOL)arg1;
- (void)setLineHeight:(double)arg0 requestReset:(BOOL)arg1;
- (void)setDirection:(unsigned long long)arg0 requestReset:(BOOL)arg1;
- (void)setTextDecoration:(unsigned long long)arg0 requestReset:(BOOL)arg1;
- (void)setTextShadow:(id)arg0 requestReset:(BOOL)arg1;
- (void)setTextStrokeWidth:(double)arg0 requestReset:(BOOL)arg1;
- (void)setTextStrokeColor:(id)arg0 requestReset:(BOOL)arg1;
- (void)setEnableLanguageAlignment:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)resetFontWithTextStyle;
- (void)resetParagraphStyle:(id /* block */)arg0;
- (id)inlineAttributeString;
- (void)color:(id)arg0 requestReset:(BOOL)arg1;
- (void)noTrim:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)numberOfLines:(long long)arg0 requestReset:(BOOL)arg1;
- (void)ellipsizeMode:(id)arg0 requestReset:(BOOL)arg1;
- (id)textStyle;
- (void)setDirty:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)dirty;
- (void)setTextStyle:(id)arg0;

@end