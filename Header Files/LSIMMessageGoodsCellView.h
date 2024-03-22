//
//     Generated by private class-dump
//

@class UIImageView, LSIMMessageCardGoodsCellVM, UILabel, UIView;

@interface LSIMMessageGoodsCellView : LSIMChatDetailBaseCellView {
    UIView *_cardView;
    UIImageView *_mainImageView;
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    UILabel *_countLabel;
}

@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) UIImageView *mainImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) LSIMMessageCardGoodsCellVM *cellVM;

- (id)mainImageView;
- (void)setMainImageView:(id)arg0;
- (void)setupContainerView;
- (void)handleContainerTapGesture:(id)arg0;
- (void)configWithCellVM:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)cardView;
- (void)setCardView:(id)arg0;
- (void)updateImageView;
- (id)countLabel;
- (void)setCountLabel:(id)arg0;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg0;

@end
