//
//     Generated by private class-dump
//

@class UIStackView, IESECLongContentLabelView, IESECGoodsDetailDetailTopInfoViewModel, IESECButton, IESECGoodsDetailDetailTopInfoMetaModel, IESECGoodsDetailDetailTopInfoDataModel, UILabel, IESECGoodsDetailDetailPropertySKUFlowView;

@interface IESECGoodsDetailDetailPropertyView : UIView {
    BOOL _hasSetupSubviews;
    IESECGoodsDetailDetailTopInfoViewModel *_viewModel;
    IESECGoodsDetailDetailTopInfoDataModel *_dataModel;
    IESECGoodsDetailDetailTopInfoMetaModel *_metaModel;
    UILabel *_topLabel;
    IESECGoodsDetailDetailPropertySKUFlowView *_propertySKUFlowView;
    IESECLongContentLabelView *_subProductLabel;
    UIStackView *_propertyStackView;
    IESECButton *_morePropertyButton;
}

@property (retain, nonatomic) IESECGoodsDetailDetailTopInfoViewModel *viewModel;
@property (retain, nonatomic) IESECGoodsDetailDetailTopInfoDataModel *dataModel;
@property (retain, nonatomic) IESECGoodsDetailDetailTopInfoMetaModel *metaModel;
@property (retain, nonatomic) UILabel *topLabel;
@property (retain, nonatomic) IESECGoodsDetailDetailPropertySKUFlowView *propertySKUFlowView;
@property (retain, nonatomic) IESECLongContentLabelView *subProductLabel;
@property (retain, nonatomic) UIStackView *propertyStackView;
@property (retain, nonatomic) IESECButton *morePropertyButton;
@property (nonatomic) BOOL hasSetupSubviews;

- (void)iesec_respondEvent:(id)arg0;
- (void)configWithViewModel:(id)arg0;
- (void)setupSubviewsIfNeeded;
- (id)metaModel;
- (void)setMetaModel:(id)arg0;
- (id)propertySKUFlowView;
- (id)subProductLabel;
- (id)propertyStackView;
- (id)morePropertyButton;
- (void)updateStackView;
- (void)didClickShowMoreProperty;
- (void)setPropertySKUFlowView:(id)arg0;
- (void)setSubProductLabel:(id)arg0;
- (void)setPropertyStackView:(id)arg0;
- (void)setMorePropertyButton:(id)arg0;
- (BOOL)hasSetupSubviews;
- (void)setHasSetupSubviews:(BOOL)arg0;
- (void)updateContent;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (id)dataModel;
- (void)setDataModel:(id)arg0;
- (void)setupUI;
- (id)topLabel;
- (void)setTopLabel:(id)arg0;

@end