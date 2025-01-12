//
//     Generated by private class-dump
//

@class IESECMatchPurchaseGoodsBuyView, UIImageView, IESECGradientView, UILabel, NSMutableArray, IESECMatchPurchaseModel;
@protocol IESECMatchPurchaseFullTableCellProtocol;

@interface IESECMatchPurchaseFullScreenCell : UITableViewCell {
    IESECMatchPurchaseModel *_model;
    IESECMatchPurchaseGoodsBuyView *_goodsBuyView;
    id<IESECMatchPurchaseFullTableCellProtocol> _delegate;
    UIImageView *_goodsImageView;
    UIImageView *_bgImageView;
    IESECGradientView *_goodImageMaskView;
    NSMutableArray *_anchorViews;
    NSMutableArray *_dotViews;
    UILabel *_matchPurchaseContentLabel;
    double _imgHeight;
}

@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) IESECGradientView *goodImageMaskView;
@property (retain, nonatomic) NSMutableArray *anchorViews;
@property (retain, nonatomic) NSMutableArray *dotViews;
@property (retain, nonatomic) UILabel *matchPurchaseContentLabel;
@property (nonatomic) double imgHeight;
@property (retain, nonatomic) IESECMatchPurchaseModel *model;
@property (readonly, nonatomic) IESECMatchPurchaseGoodsBuyView *goodsBuyView;
@property (weak, nonatomic) id<IESECMatchPurchaseFullTableCellProtocol> delegate;

- (id)goodsImageView;
- (void)setGoodsImageView:(id)arg0;
- (id)matchPurchaseContentLabel;
- (id)goodsBuyView;
- (id)goodImageMaskView;
- (void)setupAnchors;
- (void)setAnchorViews:(id)arg0;
- (id)anchorViews;
- (void)clickToGoodsDetail:(id)arg0;
- (void)setGoodImageMaskView:(id)arg0;
- (void)setMatchPurchaseContentLabel:(id)arg0;
- (void)setModel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)model;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setupUI;
- (id)dotViews;
- (void)setDotViews:(id)arg0;
- (double)imgHeight;
- (void)setBgImageView:(id)arg0;
- (id)bgImageView;
- (void)setImgHeight:(double)arg0;

@end
