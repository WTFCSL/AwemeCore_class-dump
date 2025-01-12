//
//     Generated by private class-dump
//

@interface CJPayLineUtil : NSObject

+ (id)addBottomLineToView:(id)arg0 marginLeft:(double)arg1 marginRight:(double)arg2 marginBottom:(double)arg3;
+ (void)cj_drawLines:(unsigned long long)arg0 withRoundedCorners:(unsigned long long)arg1 radius:(double)arg2 viewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg3 color:(id)arg4;
+ (void)removeTopLineFromView:(id)arg0;
+ (id)addTopLineToView:(id)arg0 marginLeft:(double)arg1 marginRight:(double)arg2 marginTop:(double)arg3 color:(id)arg4;
+ (id)addTopLineToView:(id)arg0 marginLeft:(double)arg1 marginRight:(double)arg2 marginTop:(double)arg3;
+ (id)addRightLineToView:(id)arg0 marginTop:(double)arg1 marginBottom:(double)arg2 marginRight:(double)arg3;
+ (id)addBottomLineToView:(id)arg0 marginLeft:(double)arg1 marginRight:(double)arg2 marginBottom:(double)arg3 color:(id)arg4;
+ (id)addBottomLineToView:(id)arg0 lineHeight:(double)arg1 marginLeft:(double)arg2 marginRight:(double)arg3 marginBottom:(double)arg4 color:(id)arg5;
+ (void)removeBottomLineFromView:(id)arg0;
+ (id)addRightLineToView:(id)arg0 marginTop:(double)arg1 marginBottom:(double)arg2 marginRight:(double)arg3 color:(id)arg4;
+ (void)cj_drawLines:(unsigned long long)arg0 withRoundedCorners:(unsigned long long)arg1 radius:(double)arg2 viewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg3;
+ (double)lineHeight;

@end
