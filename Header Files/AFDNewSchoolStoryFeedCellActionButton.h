//
//     Generated by private class-dump
//

@interface AFDNewSchoolStoryFeedCellActionButton : UIButton {
    BOOL _needImageAnimation;
    BOOL _needWholeAnimation;
    id /* block */ _touchUpInsideBlock;
    id /* block */ _didBecomeVoiceOverFocused;
}

@property (nonatomic) BOOL needImageAnimation;
@property (nonatomic) BOOL needWholeAnimation;
@property (copy, nonatomic) id /* block */ touchUpInsideBlock;
@property (copy, nonatomic) id /* block */ didBecomeVoiceOverFocused;

- (void)setTouchUpInsideBlock:(id /* block */)arg0;
- (void)onTouchUpInside;
- (BOOL)needImageAnimation;
- (BOOL)needWholeAnimation;
- (id /* block */)didBecomeVoiceOverFocused;
- (void)setNeedImageAnimation:(BOOL)arg0;
- (void)setNeedWholeAnimation:(BOOL)arg0;
- (void)setDidBecomeVoiceOverFocused:(id /* block */)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)init;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (void)touchesCancelled:(id)arg0 withEvent:(id)arg1;
- (void)layoutSubviews;
- (void)accessibilityElementDidBecomeFocused;
- (id /* block */)touchUpInsideBlock;

@end
