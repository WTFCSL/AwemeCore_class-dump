//
//     Generated by private class-dump
//

@class UIColor, UIView;

@interface IESLivePlaybackCacheVideoProgressView : UIView {
    float _progress;
    UIColor *_filledColor;
    UIColor *_emptyColor;
    UIView *_filledView;
}

@property (retain, nonatomic) UIView *filledView;
@property (nonatomic) float progress;
@property (retain, nonatomic) UIColor *filledColor;
@property (retain, nonatomic) UIColor *emptyColor;

- (id)filledView;
- (void)setFilledView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (float)progress;
- (void)setProgress:(float)arg0;
- (id)filledColor;
- (void)setEmptyColor:(id)arg0;
- (void)setFilledColor:(id)arg0;
- (id)emptyColor;
- (void)p_commonInit;

@end
