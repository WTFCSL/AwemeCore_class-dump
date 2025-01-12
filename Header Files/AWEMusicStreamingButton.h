//
//     Generated by private class-dump
//

@interface AWEMusicStreamingButton : UIButton {
    BOOL _isAnimating;
    float _oriAlpha;
    double _selectedAlpha;
}

@property (nonatomic) float oriAlpha;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) double selectedAlpha;

- (void)setSelectedAlpha:(double)arg0;
- (double)selectedAlpha;
- (void)setOriAlpha:(float)arg0;
- (float)oriAlpha;
- (BOOL)isAnimating;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setHighlighted:(BOOL)arg0;
- (void)setIsAnimating:(BOOL)arg0;

@end
