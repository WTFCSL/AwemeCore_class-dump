//
//     Generated by private class-dump
//

@class IESECGoodsDetailLongTitleTagInfoView, UIStackView, IESECGoodsDetailHaiNanTaxViewMetaModel, IESECGoodsDetailHaiNanTaxDataModel;

@interface IESECGoodsDetailHaiNanTaxCollectionViewCell : UICollectionViewCell {
    IESECGoodsDetailLongTitleTagInfoView *_titleTagInfoView;
    UIStackView *_groupTabItemStackView;
    UIStackView *_container;
    IESECGoodsDetailHaiNanTaxDataModel *_hainanTaxDataModel;
    IESECGoodsDetailHaiNanTaxViewMetaModel *_metaModel;
}

@property (retain, nonatomic) IESECGoodsDetailLongTitleTagInfoView *titleTagInfoView;
@property (retain, nonatomic) UIStackView *groupTabItemStackView;
@property (retain, nonatomic) UIStackView *container;
@property (retain, nonatomic) IESECGoodsDetailHaiNanTaxDataModel *hainanTaxDataModel;
@property (retain, nonatomic) IESECGoodsDetailHaiNanTaxViewMetaModel *metaModel;

- (id)metaModel;
- (void)setMetaModel:(id)arg0;
- (id)titleTagInfoView;
- (id)groupTabItemStackView;
- (void)setHainanTaxDataModel:(id)arg0;
- (id)createHeadButtonWithElement:(id)arg0;
- (void)tapTabButton:(id)arg0;
- (id)hainanTaxDataModel;
- (void)openDeliveryDesc:(id)arg0;
- (void)configureHaiNanTaxCellWithDataModel:(id)arg0 metaModel:(id)arg1;
- (void)setTitleTagInfoView:(id)arg0;
- (void)setGroupTabItemStackView:(id)arg0;
- (id)container;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareForReuse;
- (void)setupUI;

@end