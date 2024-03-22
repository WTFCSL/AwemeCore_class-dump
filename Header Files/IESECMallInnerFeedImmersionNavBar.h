//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIButton;

@interface IESECMallInnerFeedImmersionNavBar : UIView <IESECMallInnerFeedNavBarDelegate> {
    id /* block */ _backBlock;
    id /* block */ _shareBlock;
    id /* block */ _cartBlock;
    UIButton *_backButton;
    UIImageView *_backButtonImageView;
    UIImageView *_titleIcon;
    UIButton *_shareButton;
    UIImageView *_shareButtonImageView;
    UIButton *_cartButton;
    UIImageView *_cartButtonImageView;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIImageView *backButtonImageView;
@property (retain, nonatomic) UIImageView *titleIcon;
@property (retain, nonatomic) UIButton *shareButton;
@property (retain, nonatomic) UIImageView *shareButtonImageView;
@property (retain, nonatomic) UIButton *cartButton;
@property (retain, nonatomic) UIImageView *cartButtonImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ backBlock;
@property (copy, nonatomic) id /* block */ shareBlock;
@property (copy, nonatomic) id /* block */ cartBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBackBlock:(id /* block */)arg0;
- (id /* block */)backBlock;
- (void)setShareBlock:(id /* block */)arg0;
- (id /* block */)shareBlock;
- (id)cartButton;
- (void)setCartButton:(id)arg0;
- (void)setShareButtonImageView:(id)arg0;
- (id)shareButtonImageView;
- (void)setIsInnerTheme:(BOOL)arg0;
- (id)navCartButton;
- (void)setCartBlock:(id /* block */)arg0;
- (id)backButtonImageView;
- (id)cartButtonImageView;
- (id /* block */)cartBlock;
- (void)backButtonDidTap:(id)arg0;
- (void)shareButtonDidTap:(id)arg0;
- (void)cartButtonDidTap:(id)arg0;
- (void)setBackButtonImageView:(id)arg0;
- (void)setCartButtonImageView:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (void)setupUI;
- (id)titleIcon;
- (void)setTitleIcon:(id)arg0;
- (id)shareButton;
- (void)setShareButton:(id)arg0;
- (void)updateTitle:(id)arg0;

@end
