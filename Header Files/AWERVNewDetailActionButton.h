//
//     Generated by private class-dump
//

@interface AWERVNewDetailActionButton : UIButton {
    BOOL _needImageAnimation;
    id /* block */ _touchUpInsideBlock;
}

@property (nonatomic) BOOL needImageAnimation;
@property (copy, nonatomic) id /* block */ touchUpInsideBlock;

- (void)setTouchUpInsideBlock:(id /* block */)arg0;
- (BOOL)needImageAnimation;
- (void)_onTouchUpInside;
- (void)setNeedImageAnimation:(BOOL)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)init;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (void)touchesCancelled:(id)arg0 withEvent:(id)arg1;
- (id /* block */)touchUpInsideBlock;

@end
