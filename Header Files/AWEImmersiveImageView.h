//
//     Generated by private class-dump
//

@class AWEBlurGradientView, UIImageView, AWEConcernGoodsCardBlurCommentView, NSString, AWEConcernGoodsLifeFeedSpu;

@interface AWEImmersiveImageView : UIView {
    UIImageView *_imageView;
    id /* block */ _merchantDetailBlock;
    AWEConcernGoodsCardBlurCommentView *_commentView;
    AWEBlurGradientView *_goodsImageSkeletonView;
    UIImageView *_goodsImageLoadFailedImageView;
    UIImageView *_topCoveredImageView;
    AWEBlurGradientView *_topCoveredPlaceholderView;
    UIImageView *_midCoveredImageView;
    AWEBlurGradientView *_midCoveredPlaceholderView;
    NSString *_goodsCardDetailSchema;
    AWEConcernGoodsLifeFeedSpu *_goodsModel;
}

@property (retain, nonatomic) AWEConcernGoodsCardBlurCommentView *commentView;
@property (retain, nonatomic) AWEBlurGradientView *goodsImageSkeletonView;
@property (retain, nonatomic) UIImageView *goodsImageLoadFailedImageView;
@property (retain, nonatomic) UIImageView *topCoveredImageView;
@property (retain, nonatomic) AWEBlurGradientView *topCoveredPlaceholderView;
@property (retain, nonatomic) UIImageView *midCoveredImageView;
@property (retain, nonatomic) AWEBlurGradientView *midCoveredPlaceholderView;
@property (copy, nonatomic) NSString *goodsCardDetailSchema;
@property (retain, nonatomic) AWEConcernGoodsLifeFeedSpu *goodsModel;
@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) id /* block */ merchantDetailBlock;

- (void)__setupUI;
- (id)goodsModel;
- (void)setGoodsModel:(id)arg0;
- (void)setCommentView:(id)arg0;
- (id)commentView;
- (void)setUpSkeletonView;
- (void)__buildUI;
- (void)setMerchantDetailBlock:(id /* block */)arg0;
- (void)startCardAnimation;
- (void)configWithCardModel:(id)arg0 goodsImageLoadCompletion:(id /* block */)arg1 topCoverImageLoadCompletion:(id /* block */)arg2 midCoverImageLoadCompletion:(id /* block */)arg3;
- (id /* block */)merchantDetailBlock;
- (void)setGoodsCardDetailSchema:(id)arg0;
- (id)goodsCardDetailSchema;
- (id)goodsImageLoadFailedImageView;
- (void)setGoodsImageLoadFailedImageView:(id)arg0;
- (void)setGoodsImageSkeletonView:(id)arg0;
- (void)setTopCoveredImageView:(id)arg0;
- (void)setTopCoveredPlaceholderView:(id)arg0;
- (void)setMidCoveredImageView:(id)arg0;
- (void)setMidCoveredPlaceholderView:(id)arg0;
- (id)goodsImageSkeletonView;
- (id)topCoveredImageView;
- (id)topCoveredPlaceholderView;
- (id)midCoveredImageView;
- (id)midCoveredPlaceholderView;
- (void)setUpImmersiveEffectWithCardModel:(id)arg0 topCoverImageLoadCompletion:(id /* block */)arg1 midCoverImageLoadCompletion:(id /* block */)arg2;
- (id)createGradientImageView;
- (void)setUpTopMaskViewWithCardModel:(id)arg0 topCoverImageLoadCompletion:(id /* block */)arg1;
- (void)setUpMidMaskViewWithCardModel:(id)arg0 midCoverImageLoadCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (void)layoutSubviews;

@end
