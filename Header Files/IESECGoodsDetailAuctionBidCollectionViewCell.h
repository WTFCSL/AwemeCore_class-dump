//
//     Generated by private class-dump
//

@class UIStackView, IESECGoodsDetailAuctionBidMetaModel, IESECGoodsDetailAuctionBidModel, IESECLongContentLabelView;

@interface IESECGoodsDetailAuctionBidCollectionViewCell : UICollectionViewCell {
    UIStackView *_stackView;
    IESECLongContentLabelView *_headerView;
    IESECGoodsDetailAuctionBidModel *_dataModel;
    IESECGoodsDetailAuctionBidMetaModel *_metaModel;
    double _margin;
    double _padding;
}

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) IESECLongContentLabelView *headerView;
@property (retain, nonatomic) IESECGoodsDetailAuctionBidModel *dataModel;
@property (retain, nonatomic) IESECGoodsDetailAuctionBidMetaModel *metaModel;
@property (nonatomic) double margin;
@property (nonatomic) double padding;

- (id)metaModel;
- (void)openAuctionHistory:(id)arg0;
- (void)setMetaModel:(id)arg0;
- (void)updateStackViewContainerWithArray:(id)arg0;
- (void)updateStackViewWithArray:(id)arg0;
- (void)addArrangedSubviewToStackViewContainer:(id)arg0;
- (void)setSeparateLineHidden:(BOOL)arg0 OfSubview:(id)arg1;
- (void)updateWithAuctionBidModel:(id)arg0 metaModel:(id)arg1;
- (double)margin;
- (void)setPadding:(double)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setHeaderView:(id)arg0;
- (id)stackView;
- (void)setMargin:(double)arg0;
- (void)setStackView:(id)arg0;
- (double)padding;
- (id)headerView;
- (id)dataModel;
- (void)setDataModel:(id)arg0;
- (void)setupUI;

@end
