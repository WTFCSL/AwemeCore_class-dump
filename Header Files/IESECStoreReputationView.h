//
//     Generated by private class-dump
//

@class IESECStoreSelfSupportView, UIImageView, IESECStoreReputationScoreView, IESECStoreHeartDiamondCrownView, IESECShopSellingPointTagView, UILabel;

@interface IESECStoreReputationView : UIStackView {
    UIImageView *_brandImageView;
    IESECStoreHeartDiamondCrownView *_heartDiamondCrownView;
    IESECStoreReputationScoreView *_scoreView;
    IESECStoreSelfSupportView *_selfSupportView;
    IESECShopSellingPointTagView *_sellingPointTagView;
    UILabel *_saleCountLabel;
}

@property (retain, nonatomic) UIImageView *brandImageView;
@property (retain, nonatomic) IESECStoreHeartDiamondCrownView *heartDiamondCrownView;
@property (retain, nonatomic) IESECStoreReputationScoreView *scoreView;
@property (retain, nonatomic) IESECStoreSelfSupportView *selfSupportView;
@property (retain, nonatomic) IESECShopSellingPointTagView *sellingPointTagView;
@property (retain, nonatomic) UILabel *saleCountLabel;

- (id)brandImageView;
- (void)setBrandImageView:(id)arg0;
- (id)scoreView;
- (void)setScoreView:(id)arg0;
- (id)saleCountLabel;
- (void)setSaleCountLabel:(id)arg0;
- (void)updateReputationViewWithPercent:(double)arg0;
- (void)updateReputationViewWithStyle:(unsigned long long)arg0;
- (void)updateReputationViewWithModel:(id)arg0;
- (id)heartDiamondCrownView;
- (id)selfSupportView;
- (id)sellingPointTagView;
- (void)setHeartDiamondCrownView:(id)arg0;
- (void)setSelfSupportView:(id)arg0;
- (void)setSellingPointTagView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (void)setupViews;

@end
