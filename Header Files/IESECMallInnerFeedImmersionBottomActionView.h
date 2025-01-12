//
//     Generated by private class-dump
//

@class UIView, NSString, IESECButton, IESECGradientView, IESECMallInnerFeedProductCommentInfoModel, UIImageView, IESECMallInnerFeedProductModel, LOTAnimationView, UILabel, IESECInnerScrollView;

@interface IESECMallInnerFeedImmersionBottomActionView : UIView {
    UIView *_shopView;
    IESECButton *_favoriteButton;
    IESECButton *_commentButton;
    IESECButton *_addCartButton;
    IESECButton *_buyButton;
    UIView *_contentView;
    UIImageView *_shopAvatarImageView;
    UILabel *_shopTitleLabel;
    UILabel *_shopSubTitleLabel;
    IESECInnerScrollView *_pageScrollView;
    UIImageView *_commentButtonImageView;
    UILabel *_commentCurrentLabel;
    UILabel *_commentForwardLabel;
    UIView *_rightContainerView;
    IESECGradientView *_buyButtonGradientView;
    NSString *_shopURLString;
    IESECMallInnerFeedProductCommentInfoModel *_commentInfo;
    LOTAnimationView *_shopLivingAnimationView;
    UIImageView *_shopLivingImageView;
    IESECMallInnerFeedProductModel *_productModel;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *shopView;
@property (retain, nonatomic) UIImageView *shopAvatarImageView;
@property (retain, nonatomic) UILabel *shopTitleLabel;
@property (retain, nonatomic) UILabel *shopSubTitleLabel;
@property (retain, nonatomic) IESECButton *favoriteButton;
@property (retain, nonatomic) IESECButton *commentButton;
@property (retain, nonatomic) IESECInnerScrollView *pageScrollView;
@property (retain, nonatomic) UIImageView *commentButtonImageView;
@property (retain, nonatomic) UILabel *commentCurrentLabel;
@property (retain, nonatomic) UILabel *commentForwardLabel;
@property (retain, nonatomic) UIView *rightContainerView;
@property (retain, nonatomic) IESECButton *addCartButton;
@property (retain, nonatomic) IESECButton *buyButton;
@property (retain, nonatomic) IESECGradientView *buyButtonGradientView;
@property (copy, nonatomic) NSString *shopURLString;
@property (retain, nonatomic) IESECMallInnerFeedProductCommentInfoModel *commentInfo;
@property (retain, nonatomic) LOTAnimationView *shopLivingAnimationView;
@property (retain, nonatomic) UIImageView *shopLivingImageView;
@property (retain, nonatomic) IESECMallInnerFeedProductModel *productModel;

- (id)productModel;
- (id)rightContainerView;
- (void)setCommentInfo:(id)arg0;
- (void)setProductModel:(id)arg0;
- (id)commentButton;
- (id)buyButton;
- (void)setBuyButton:(id)arg0;
- (void)setCommentButton:(id)arg0;
- (void)setRightContainerView:(id)arg0;
- (id)buyButtonGradientView;
- (void)setBuyButtonGradientView:(id)arg0;
- (id)shopView;
- (id)shopTitleLabel;
- (id)shopAvatarImageView;
- (id)shopLivingAnimationView;
- (id)shopLivingImageView;
- (id)shopSubTitleLabel;
- (void)shopButtonClick;
- (id)addCartButton;
- (id)commentButtonImageView;
- (id)commentCurrentLabel;
- (id)commentForwardLabel;
- (void)setShopURLString:(id)arg0;
- (void)responseWithEventType:(unsigned long long)arg0 sender:(id)arg1 userInfo:(id)arg2;
- (id)shopURLString;
- (void)responseWithEventType:(unsigned long long)arg0;
- (void)commentButtonClick;
- (void)favoriteButtonClick:(id)arg0;
- (void)addCartButtonClick:(id)arg0;
- (void)buyButtonClick;
- (void)startCommentTextAutoPage;
- (void)startLivingAnimation;
- (void)stopLivingAnimation;
- (void)setShopView:(id)arg0;
- (void)setAddCartButton:(id)arg0;
- (void)setShopAvatarImageView:(id)arg0;
- (void)setShopTitleLabel:(id)arg0;
- (void)setShopSubTitleLabel:(id)arg0;
- (void)setCommentButtonImageView:(id)arg0;
- (void)setCommentCurrentLabel:(id)arg0;
- (void)setCommentForwardLabel:(id)arg0;
- (void)setShopLivingAnimationView:(id)arg0;
- (void)setShopLivingImageView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (void)setContentView:(id)arg0;
- (id)pageScrollView;
- (void)setPageScrollView:(id)arg0;
- (void)setupUI;
- (void)updateWithNewModel:(id)arg0;
- (id)buttonTitleColor;
- (id)favoriteButton;
- (void)setFavoriteButton:(id)arg0;
- (id)buttonTitleFont;
- (id)commentInfo;

@end
