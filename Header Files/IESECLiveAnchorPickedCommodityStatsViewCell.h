//
//     Generated by private class-dump
//

@class IESECLiveGoodsModel, UIImageView, UIView, UILabel;

@interface IESECLiveAnchorPickedCommodityStatsViewCell : UITableViewCell {
    IESECLiveGoodsModel *_goodsModel;
    UIImageView *_thumbnail;
    UIView *_thumbnailMask;
    UILabel *_amountLabel;
    UILabel *_orderLabel;
    UILabel *_buyerLabel;
}

@property (retain, nonatomic) IESECLiveGoodsModel *goodsModel;
@property (retain, nonatomic) UIImageView *thumbnail;
@property (retain, nonatomic) UIView *thumbnailMask;
@property (retain, nonatomic) UILabel *amountLabel;
@property (retain, nonatomic) UILabel *orderLabel;
@property (retain, nonatomic) UILabel *buyerLabel;

+ (id)identity;
+ (double)cellHeight;

- (id)goodsModel;
- (void)setGoodsModel:(id)arg0;
- (id)valueText:(id)arg0;
- (id)orderLabel;
- (void)setOrderLabel:(id)arg0;
- (id)buyerLabel;
- (void)setBuyerLabel:(id)arg0;
- (void)updateLabel:(id)arg0 text:(id)arg1;
- (id)thumbnailMask;
- (void)setThumbnailMask:(id)arg0;
- (void)setThumbnail:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)thumbnail;
- (void)setupUI;
- (id)amountLabel;
- (void)setAmountLabel:(id)arg0;

@end
