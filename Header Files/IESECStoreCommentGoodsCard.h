//
//     Generated by private class-dump
//

@class IESECGoodsPriceLabel, UIImageView, IESECCommentGoodsInfoModel, UILabel;

@interface IESECStoreCommentGoodsCard : UIView {
    IESECCommentGoodsInfoModel *_data;
    UIImageView *_mainPic;
    UILabel *_titleLabel;
    IESECGoodsPriceLabel *_priceLabel;
    UILabel *_praiseRate;
    UILabel *_stateLabel;
}

@property (retain, nonatomic) IESECCommentGoodsInfoModel *data;
@property (retain, nonatomic) UIImageView *mainPic;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;
@property (retain, nonatomic) UILabel *praiseRate;
@property (retain, nonatomic) UILabel *stateLabel;

+ (double)cardHeightWithDetail:(id)arg0;

- (id)mainPic;
- (id)praiseRate;
- (void)setMainPic:(id)arg0;
- (void)setPraiseRate:(id)arg0;
- (id)init;
- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (id)titleLabel;
- (void)setContent:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg0;
- (id)stateLabel;
- (void)setStateLabel:(id)arg0;

@end
