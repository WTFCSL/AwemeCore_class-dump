//
//     Generated by private class-dump
//

@class LOTAnimationView, LOTComposition, NSMutableDictionary;

@interface LOTAnimatedControl : UIControl {
    unsigned long long _priorState;
    NSMutableDictionary *_layerMap;
    LOTAnimationView *_animationView;
}

@property (readonly, nonatomic) LOTAnimationView *animationView;
@property (retain, nonatomic) LOTComposition *animationComp;

- (void)checkStateChangedAndUpdate:(BOOL)arg0;
- (id)animationComp;
- (void)setAnimationComp:(id)arg0;
- (void)setLayerName:(id)arg0 forState:(unsigned long long)arg1;
- (void)_commonInit;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (void)setSelected:(BOOL)arg0;
- (id)initWithCoder:(id)arg0;
- (void)setEnabled:(BOOL)arg0;
- (void)touchesMoved:(id)arg0 withEvent:(id)arg1;
- (void)touchesCancelled:(id)arg0 withEvent:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg0;
- (BOOL)isAccessibilityElement;
- (id)animationView;

@end
