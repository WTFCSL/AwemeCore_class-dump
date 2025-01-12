//
//     Generated by private class-dump
//

@class UITapGestureRecognizer, UIView;

@interface DUXActionTag : DUXTag {
    BOOL _adaptBigFont;
    long long _style;
    long long _sizeStyle;
    long long _fontWeight;
    id /* block */ _tapAction;
    UITapGestureRecognizer *_tapGesture;
    UIView *_interactionMaskView;
}

@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIView *interactionMaskView;
@property (nonatomic) long long style;
@property (nonatomic) long long sizeStyle;
@property (nonatomic) long long fontWeight;
@property (nonatomic) BOOL adaptBigFont;
@property (copy, nonatomic) id /* block */ tapAction;

- (id)initWithStyle:(long long)arg0 sizeStyle:(long long)arg1;
- (void)setAdaptBigFont:(BOOL)arg0;
- (id)initWithStyle:(long long)arg0 sizeStyle:(long long)arg1 title:(id)arg2;
- (BOOL)adaptBigFont;
- (void)setSizeStyle:(long long)arg0;
- (void)tapGestureAction;
- (void)intrinsicActionSizeStyle;
- (void)intrinsicActionStyle;
- (void)intrinsicIconImage;
- (double)intrinsicIconSize;
- (id)interactionMaskView;
- (double)p_intrinsicContentHeight;
- (void)setInteractionMaskView:(id)arg0;
- (long long)style;
- (void).cxx_destruct;
- (long long)fontWeight;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)tapGesture;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (void)setFontWeight:(long long)arg0;
- (void)touchesCancelled:(id)arg0 withEvent:(id)arg1;
- (void)setStyle:(long long)arg0;
- (void)setTapGesture:(id)arg0;
- (id /* block */)tapAction;
- (long long)sizeStyle;
- (void)setTapAction:(id /* block */)arg0;

@end
