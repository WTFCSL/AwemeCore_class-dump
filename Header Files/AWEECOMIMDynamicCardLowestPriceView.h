//
//     Generated by private class-dump
//

@class BDPCDDynamicCardPriceView, UIImageView, UILabel, UIView;

@interface AWEECOMIMDynamicCardLowestPriceView : AWEECOMIMDynamicCardBaseElementView {
    UIImageView *_bgLeftImageView;
    UIImageView *_bgMiddleLeftImageView;
    UIImageView *_bgMiddleImageView;
    UIImageView *_bgMiddleRightImageView;
    UIImageView *_bgRightImageView;
    UILabel *_discountContentLabel;
    BDPCDDynamicCardPriceView *_discountPriceView;
    BDPCDDynamicCardPriceView *_originPriceView;
    UIView *_currentPriceViewContainer;
    BDPCDDynamicCardPriceView *_currentPriceView;
    UILabel *_restoreLabel;
}

@property (retain, nonatomic) UIImageView *bgLeftImageView;
@property (retain, nonatomic) UIImageView *bgMiddleLeftImageView;
@property (retain, nonatomic) UIImageView *bgMiddleImageView;
@property (retain, nonatomic) UIImageView *bgMiddleRightImageView;
@property (retain, nonatomic) UIImageView *bgRightImageView;
@property (retain, nonatomic) UILabel *discountContentLabel;
@property (retain, nonatomic) BDPCDDynamicCardPriceView *discountPriceView;
@property (retain, nonatomic) BDPCDDynamicCardPriceView *originPriceView;
@property (retain, nonatomic) UIView *currentPriceViewContainer;
@property (retain, nonatomic) BDPCDDynamicCardPriceView *currentPriceView;
@property (retain, nonatomic) UILabel *restoreLabel;

+ (BOOL)checkSupportSubElementViewWithElementModel:(id)arg0;
+ (BOOL)isVisible:(id)arg0;

- (void)setDiscountPriceView:(id)arg0;
- (id)discountPriceView;
- (void)setCurrentPriceView:(id)arg0;
- (id)currentPriceView;
- (double)widthWithElementModel:(id)arg0;
- (double)heightWithElementModel:(id)arg0;
- (void)updateWithElememtModel:(id)arg0;
- (void)setBgLeftImageView:(id)arg0;
- (id)bgLeftImageView;
- (void)setImage:(id)arg0 imageNamed:(id)arg1;
- (void)setBgMiddleLeftImageView:(id)arg0;
- (id)bgMiddleLeftImageView;
- (void)setBgMiddleRightImageView:(id)arg0;
- (id)bgMiddleRightImageView;
- (void)setBgRightImageView:(id)arg0;
- (id)bgRightImageView;
- (void)setBgMiddleImageView:(id)arg0;
- (id)bgMiddleImageView;
- (void)setDiscountContentLabel:(id)arg0;
- (id)discountContentLabel;
- (void)setOriginPriceView:(id)arg0;
- (id)originPriceView;
- (void)setCurrentPriceViewContainer:(id)arg0;
- (id)currentPriceViewContainer;
- (void)setRestoreLabel:(id)arg0;
- (id)restoreLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
