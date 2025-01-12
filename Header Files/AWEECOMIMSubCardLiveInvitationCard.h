//
//     Generated by private class-dump
//

@class UIControl, NSString, UIImageView, UIView, UILabel;

@interface AWEECOMIMSubCardLiveInvitationCard : UIView {
    id /* block */ _actionBlock;
    UIControl *_containerView;
    UIImageView *_goodsImageView;
    UIImageView *_shopLogeView;
    UIView *_liveShopLogeView;
    UILabel *_shopNameLabel;
    UIView *_liveStatusBkgView;
    UILabel *_liveStatusLabel;
    UIView *_liveIconBkgView;
    UIImageView *_liveIconView;
    UIImageView *_goodsImageGradientView;
    NSString *_cardUrl;
}

@property (retain, nonatomic) UIControl *containerView;
@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) UIImageView *shopLogeView;
@property (retain, nonatomic) UIView *liveShopLogeView;
@property (retain, nonatomic) UILabel *shopNameLabel;
@property (retain, nonatomic) UIView *liveStatusBkgView;
@property (retain, nonatomic) UILabel *liveStatusLabel;
@property (retain, nonatomic) UIView *liveIconBkgView;
@property (retain, nonatomic) UIImageView *liveIconView;
@property (retain, nonatomic) UIImageView *goodsImageGradientView;
@property (copy, nonatomic) NSString *cardUrl;
@property (copy, nonatomic) id /* block */ actionBlock;

+ (double)designHeight;

- (id)goodsImageView;
- (void)setGoodsImageView:(id)arg0;
- (id)cardUrl;
- (void)setCardUrl:(id)arg0;
- (void)tapCard;
- (id)liveStatusBkgView;
- (id)liveIconBkgView;
- (id)shopLogeView;
- (id)shopNameLabel;
- (id)liveStatusLabel;
- (id)liveShopLogeView;
- (void)setShopLogeView:(id)arg0;
- (void)setLiveShopLogeView:(id)arg0;
- (void)setShopNameLabel:(id)arg0;
- (void)setLiveStatusBkgView:(id)arg0;
- (void)setLiveStatusLabel:(id)arg0;
- (void)setLiveIconBkgView:(id)arg0;
- (id)liveIconView;
- (void)setLiveIconView:(id)arg0;
- (id)goodsImageGradientView;
- (void)setGoodsImageGradientView:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (void)updateWithData:(id)arg0;
- (id /* block */)actionBlock;
- (void)setupUI;
- (void)setActionBlock:(id /* block */)arg0;

@end
