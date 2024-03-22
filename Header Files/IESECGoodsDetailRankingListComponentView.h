//
//     Generated by private class-dump
//

@class IESECGoodsDetailModel, UILabel, UIImageView;

@interface IESECGoodsDetailRankingListComponentView : IESECGoodsDetailBaseComponentView {
    IESECGoodsDetailModel *_goodsModel;
    UILabel *_rankLabel;
    UIImageView *_rankBrandImageView;
    UIImageView *_rankingIconImageView;
    UIImageView *_rightArrowImageView;
    UILabel *_topLabel;
}

@property (retain, nonatomic) IESECGoodsDetailModel *goodsModel;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UIImageView *rankBrandImageView;
@property (retain, nonatomic) UIImageView *rankingIconImageView;
@property (retain, nonatomic) UIImageView *rightArrowImageView;
@property (retain, nonatomic) UILabel *topLabel;

+ (BOOL)componentViewShouldShow:(id)arg0 style:(long long)arg1;
+ (double)componentViewHeight:(id)arg0 style:(long long)arg1;

- (id)goodsModel;
- (void)setGoodsModel:(id)arg0;
- (void)updateWithParameters:(id)arg0;
- (void)setRightArrowImageView:(id)arg0;
- (id)rightArrowImageView;
- (id)initWithParameters:(id)arg0 style:(long long)arg1 tracker:(id)arg2;
- (void)openRankList;
- (id)rankBrandImageView;
- (id)rankingIconImageView;
- (void)updateUIWithRankModel:(id)arg0;
- (void)setRankBrandImageView:(id)arg0;
- (void)setRankingIconImageView:(id)arg0;
- (void).cxx_destruct;
- (void)setupUI;
- (id)topLabel;
- (void)setTopLabel:(id)arg0;
- (id)rankLabel;
- (void)setRankLabel:(id)arg0;

@end
