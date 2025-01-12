//
//     Generated by private class-dump
//

@class IESECLLDCImageView, IESECGoodsDetailShopFloatEntryViewModel, UIView, UILabel, IESECGoodsDetailShopFloatEntryDataModel;

@interface IESECGoodsDetailShopFloatEntryView : UIView {
    IESECGoodsDetailShopFloatEntryViewModel *_viewModel;
    IESECGoodsDetailShopFloatEntryDataModel *_dataModel;
    UIView *_containerView;
    IESECLLDCImageView *_imageView;
    UILabel *_contentLabel;
}

@property (retain, nonatomic) IESECGoodsDetailShopFloatEntryViewModel *viewModel;
@property (retain, nonatomic) IESECGoodsDetailShopFloatEntryDataModel *dataModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) IESECLLDCImageView *imageView;
@property (retain, nonatomic) UILabel *contentLabel;

+ (struct CGSize { double x0; double x1; })sizeOfFloatEntry:(id)arg0;

- (void)updateContentWithViewModel:(id)arg0;
- (void)floatEntryDidTap;
- (void).cxx_destruct;
- (id)imageView;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (void)setImageView:(id)arg0;
- (id)containerView;
- (id)viewModel;
- (void)layoutSubviews;
- (id)dataModel;
- (void)setDataModel:(id)arg0;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;

@end
