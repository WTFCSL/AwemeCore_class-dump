//
//     Generated by private class-dump
//

@interface AWEMVCardActionButton : UIButton {
    BOOL _needImageAnimation;
    BOOL _needWholeAnimation;
    double _iconSizeLength;
    double _textLength;
    id /* block */ _touchUpInsideBlock;
}

@property (nonatomic) double iconSizeLength;
@property (nonatomic) double textLength;
@property (nonatomic) BOOL needImageAnimation;
@property (nonatomic) BOOL needWholeAnimation;
@property (copy, nonatomic) id /* block */ touchUpInsideBlock;

- (void)setTouchUpInsideBlock:(id /* block */)arg0;
- (double)iconSizeLength;
- (void)setIconSizeLength:(double)arg0;
- (BOOL)needImageAnimation;
- (BOOL)needWholeAnimation;
- (void)setNeedImageAnimation:(BOOL)arg0;
- (void)setNeedWholeAnimation:(BOOL)arg0;
- (void)onTouchUpInsideLocation:(struct CGPoint { double x0; double x1; })arg0;
- (void)configActionStyle:(long long)arg0 size:(struct CGSize { double x0; double x1; })arg1 selected:(BOOL)arg2;
- (void)setTextLength:(double)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)init;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (double)textLength;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (void)touchesCancelled:(id)arg0 withEvent:(id)arg1;
- (id /* block */)touchUpInsideBlock;

@end
