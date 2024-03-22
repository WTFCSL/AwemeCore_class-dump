//
//     Generated by private class-dump
//

@class IESECSKUNewPriceView;

@interface IESECSKUTopPriceContainer : UIView {
    IESECSKUNewPriceView *_mainPrice;
    IESECSKUNewPriceView *_subPrice;
}

@property (retain, nonatomic) IESECSKUNewPriceView *mainPrice;
@property (retain, nonatomic) IESECSKUNewPriceView *subPrice;

+ (id)priceSizesAndDiscountTypeFromViewModel:(id)arg0;
+ (struct CGSize { double x0; double x1; })priceSizeFromSizeParams:(id)arg0;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)arg0 MaxWidth:(double)arg1;

- (id)subPrice;
- (id)mainPrice;
- (void)updateWithViewModel:(id)arg0 MaxWidth:(double)arg1;
- (void)setMainPrice:(id)arg0;
- (void)setSubPrice:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end