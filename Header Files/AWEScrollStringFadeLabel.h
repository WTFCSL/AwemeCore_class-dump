//
//     Generated by private class-dump
//

@class CAGradientLayer;

@interface AWEScrollStringFadeLabel : AWEScrollStringLabel {
    CAGradientLayer *_fadeLayer;
    double _fadeLayerWidth;
}

@property (retain, nonatomic) CAGradientLayer *fadeLayer;
@property (nonatomic) double fadeLayerWidth;

- (void)updateFadeLayerColorWithCurrent:(BOOL)arg0;
- (void)setFadeLayerWidth:(double)arg0;
- (double)fadeLayerWidth;
- (id)initWithHeight:(double)arg0 fadeLayerWidth:(double)arg1;
- (void).cxx_destruct;
- (id)fadeLayer;
- (void)setFadeLayer:(id)arg0;

@end
