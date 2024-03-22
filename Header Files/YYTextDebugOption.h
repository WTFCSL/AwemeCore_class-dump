//
//     Generated by private class-dump
//

@class UIColor;

@interface YYTextDebugOption : NSObject <NSCopying> {
    UIColor *_baselineColor;
    UIColor *_CTFrameBorderColor;
    UIColor *_CTFrameFillColor;
    UIColor *_CTLineBorderColor;
    UIColor *_CTLineFillColor;
    UIColor *_CTLineNumberColor;
    UIColor *_CTRunBorderColor;
    UIColor *_CTRunFillColor;
    UIColor *_CTRunNumberColor;
    UIColor *_CGGlyphBorderColor;
    UIColor *_CGGlyphFillColor;
}

@property (retain, nonatomic) UIColor *baselineColor;
@property (retain, nonatomic) UIColor *CTFrameBorderColor;
@property (retain, nonatomic) UIColor *CTFrameFillColor;
@property (retain, nonatomic) UIColor *CTLineBorderColor;
@property (retain, nonatomic) UIColor *CTLineFillColor;
@property (retain, nonatomic) UIColor *CTLineNumberColor;
@property (retain, nonatomic) UIColor *CTRunBorderColor;
@property (retain, nonatomic) UIColor *CTRunFillColor;
@property (retain, nonatomic) UIColor *CTRunNumberColor;
@property (retain, nonatomic) UIColor *CGGlyphBorderColor;
@property (retain, nonatomic) UIColor *CGGlyphFillColor;

+ (id)sharedDebugOption;
+ (void)addDebugTarget:(id)arg0;
+ (void)removeDebugTarget:(id)arg0;
+ (void)setSharedDebugOption:(id)arg0;

- (BOOL)needDrawDebug;
- (void)setBaselineColor:(id)arg0;
- (void)setCTFrameBorderColor:(id)arg0;
- (void)setCTLineFillColor:(id)arg0;
- (void)setCGGlyphBorderColor:(id)arg0;
- (void)setCTFrameFillColor:(id)arg0;
- (void)setCTLineBorderColor:(id)arg0;
- (void)setCTLineNumberColor:(id)arg0;
- (void)setCTRunBorderColor:(id)arg0;
- (void)setCTRunFillColor:(id)arg0;
- (void)setCTRunNumberColor:(id)arg0;
- (void)setCGGlyphFillColor:(id)arg0;
- (id)CTFrameBorderColor;
- (id)CTFrameFillColor;
- (id)CTLineFillColor;
- (id)CTLineBorderColor;
- (id)baselineColor;
- (id)CTLineNumberColor;
- (id)CTRunFillColor;
- (id)CTRunBorderColor;
- (id)CTRunNumberColor;
- (id)CGGlyphFillColor;
- (id)CGGlyphBorderColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)clear;

@end