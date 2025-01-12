//
//     Generated by private class-dump
//

@class IESECLiveGradientView, IESECLiveGoodsModel, UIImageView, UILabel, UIView;
@protocol IESECLiveGoodsIntroducingBannerDelegate;

@interface IESECLiveGoodsIntroducingBanner : UIView {
    IESECLiveGoodsModel *_goodsModel;
    id<IESECLiveGoodsIntroducingBannerDelegate> _delegate;
    UIView *_containerView;
    IESECLiveGradientView *_indexGradientView;
    UILabel *_indexHeaderLabel;
    UILabel *_contentLabel;
    UILabel *_goodsTitleLabel;
    UIImageView *_arrorImgView;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) IESECLiveGradientView *indexGradientView;
@property (retain, nonatomic) UILabel *indexHeaderLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *goodsTitleLabel;
@property (retain, nonatomic) UIImageView *arrorImgView;
@property (retain, nonatomic) IESECLiveGoodsModel *goodsModel;
@property (weak, nonatomic) id<IESECLiveGoodsIntroducingBannerDelegate> delegate;

- (id)goodsModel;
- (void)setGoodsModel:(id)arg0;
- (id)goodsTitleLabel;
- (void)setGoodsTitleLabel:(id)arg0;
- (id)indexGradientView;
- (id)indexHeaderLabel;
- (id)arrorImgView;
- (void)clickBanner;
- (void)setIndexGradientView:(id)arg0;
- (void)setIndexHeaderLabel:(id)arg0;
- (void)setArrorImgView:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (id)containerView;
- (void)setDelegate:(id)arg0;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;

@end
