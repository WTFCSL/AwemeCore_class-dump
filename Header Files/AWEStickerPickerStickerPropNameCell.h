//
//     Generated by private class-dump
//

@class AWEScrollStringLabel, CAGradientLayer;

@interface AWEStickerPickerStickerPropNameCell : AWEStickerPickerStickerCell {
    AWEScrollStringLabel *_propNameLabel;
    CAGradientLayer *_propNameGradientLayer;
}

@property (retain, nonatomic) AWEScrollStringLabel *propNameLabel;
@property (retain, nonatomic) CAGradientLayer *propNameGradientLayer;

- (void)setStickerSelected:(BOOL)arg0 animated:(BOOL)arg1;
- (id)propNameLabel;
- (id)propNameGradientLayer;
- (double)propNameFontSize;
- (void)setPropNameLabel:(id)arg0;
- (void)setPropNameGradientLayer:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setSticker:(id)arg0;

@end
