//
//     Generated by private class-dump
//

@class UIImageView, UIView;

@interface AWESliderLeft : UIView {
    BOOL _lockThumb;
    BOOL _useEnhancedStyle;
    UIImageView *_sliderImageView;
    UIView *_verticalLine;
}

@property (retain, nonatomic) UIImageView *sliderImageView;
@property (retain, nonatomic) UIView *verticalLine;
@property (readonly, nonatomic) double visibleWidth;
@property (nonatomic) BOOL lockThumb;
@property (nonatomic) BOOL useEnhancedStyle;

- (id)verticalLine;
- (void)setVerticalLine:(id)arg0;
- (BOOL)useEnhancedStyle;
- (id)sliderImageView;
- (BOOL)lockThumb;
- (void)setLockThumb:(BOOL)arg0;
- (void)setUseEnhancedStyle:(BOOL)arg0;
- (void)setSliderImageView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)visibleWidth;

@end
