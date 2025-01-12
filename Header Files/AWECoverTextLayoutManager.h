//
//     Generated by private class-dump
//

@class AWECoverTextConfig, UITextView;

@interface AWECoverTextLayoutManager : NSLayoutManager {
    BOOL _placeHolder;
    AWECoverTextConfig *_textConfig;
    UITextView *_textView;
    id /* block */ _beforeShowGlyhpBlock;
    id /* block */ _afterShowGlyphBlock;
}

@property (copy, nonatomic) id /* block */ beforeShowGlyhpBlock;
@property (copy, nonatomic) id /* block */ afterShowGlyphBlock;
@property (nonatomic) BOOL placeHolder;
@property (retain, nonatomic) AWECoverTextConfig *textConfig;
@property (weak, nonatomic) UITextView *textView;

- (id)textConfig;
- (void)setTextConfig:(id)arg0;
- (id /* block */)beforeShowGlyhpBlock;
- (id /* block */)afterShowGlyphBlock;
- (id)p_drawText:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 point:(struct CGPoint { double x0; double x1; })arg2;
- (void)p_drawImageWithContext:(struct CGContext { } *)arg0 image:(id)arg1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2;
- (id)p_drawCoverText:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 point:(struct CGPoint { double x0; double x1; })arg2;
- (id)p_drawStrokeText:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 point:(struct CGPoint { double x0; double x1; })arg2;
- (id)p_drawShadowWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0 point:(struct CGPoint { double x0; double x1; })arg1 shadowColor:(id)arg2 offset:(struct CGSize { double x0; double x1; })arg3 radius:(double)arg4 textColor:(id)arg5;
- (id /* block */)p_fillContextBlockWithColor:(id)arg0;
- (void)setBeforeShowGlyhpBlock:(id /* block */)arg0;
- (id /* block */)p_restoreContextBlock;
- (void)setAfterShowGlyphBlock:(id /* block */)arg0;
- (id)p_drawGradientColorWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0 point:(struct CGPoint { double x0; double x1; })arg1 startColor:(id)arg2 endColor:(id)arg3 horizontal:(BOOL)arg4;
- (id /* block */)p_strokeContextBlockWithWidth:(double)arg0 color:(id)arg1 join:(int)arg2;
- (id /* block */)p_shadowContextBlockWithShadowColor:(id)arg0 offset:(struct CGSize { double x0; double x1; })arg1 radius:(double)arg2 textColor:(id)arg3;
- (id)textView;
- (void).cxx_destruct;
- (void)setTextView:(id)arg0;
- (void)drawGlyphsForGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0 atPoint:(struct CGPoint { double x0; double x1; })arg1;
- (void)showCGGlyphs:(const unsigned short *)arg0 positions:(const struct CGPoint { double x0; double x1; } *)arg1 count:(unsigned long long)arg2 font:(id)arg3 matrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg4 attributes:(id)arg5 inContext:(struct CGContext { } *)arg6;
- (BOOL)placeHolder;
- (void)setPlaceHolder:(BOOL)arg0;

@end
