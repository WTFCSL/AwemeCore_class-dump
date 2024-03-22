//
//     Generated by private class-dump
//

@protocol ACCMusicTrimExpandClickViewDelegate;

@interface ACCMusicTrimExpandClickView : UIView {
    id<ACCMusicTrimExpandClickViewDelegate> _delegate;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _expandInsetResponseEdge;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } expandInsetResponseEdge;
@property (weak, nonatomic) id<ACCMusicTrimExpandClickViewDelegate> delegate;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })expandInsetResponseEdge;
- (void)setExpandInsetResponseEdge:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)accessibilityLabel;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (id)delegate;
- (void)accessibilityIncrement;
- (void)setDelegate:(id)arg0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;

@end