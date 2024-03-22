//
//     Generated by private class-dump
//

@class UIImageView, UILabel, IESECGoodsPriceLabel;

@interface AWEGoodsFavoriteTableViewCell : UITableViewCell {
    UIImageView *_coverImageView;
    UILabel *_goodsTitleLabel;
    UILabel *_descriptionLabel;
    IESECGoodsPriceLabel *_priceLabel;
    UILabel *_typeLabel;
    UILabel *_invalidLabel;
    UILabel *_oringinalPriceLabel;
}

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *goodsTitleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;
@property (retain, nonatomic) UILabel *typeLabel;
@property (retain, nonatomic) UILabel *invalidLabel;
@property (retain, nonatomic) UILabel *oringinalPriceLabel;

+ (id)convertFenToYuan:(id)arg0;
+ (id)makeAttributedStringWithGoodsPrice:(id)arg0;

- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)goodsTitleLabel;
- (void)setGoodsTitleLabel:(id)arg0;
- (id)invalidLabel;
- (id)oringinalPriceLabel;
- (void)setInvalidLabel:(id)arg0;
- (void)setOringinalPriceLabel:(id)arg0;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)setDescriptionLabel:(id)arg0;
- (id)descriptionLabel;
- (id)typeLabel;
- (void)setTypeLabel:(id)arg0;
- (void)updateWithModel:(id)arg0;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg0;

@end
