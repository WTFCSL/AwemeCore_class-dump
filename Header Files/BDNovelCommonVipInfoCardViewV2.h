//
//     Generated by private class-dump
//

@class UIImageView, UILabel, BDNovelCommonVipCenterPageData;

@interface BDNovelCommonVipInfoCardViewV2 : UIView {
    UIImageView *_vipCardView;
    UILabel *_vipExpireLabel;
    UIImageView *_userImageView;
    UILabel *_userNameLabel;
    BDNovelCommonVipCenterPageData *_pageData;
}

@property (retain, nonatomic) UIImageView *vipCardView;
@property (retain, nonatomic) UILabel *vipExpireLabel;
@property (retain, nonatomic) UIImageView *userImageView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) BDNovelCommonVipCenterPageData *pageData;

- (BOOL)isVip;
- (id)userNameLabel;
- (id)vipExpireLabel;
- (id)vipCardView;
- (id)userImageView;
- (void)setVipCardView:(id)arg0;
- (void)setVipExpireLabel:(id)arg0;
- (void)setExpireLabelText;
- (void)setUserImageView:(id)arg0;
- (void)setUserNameLabel:(id)arg0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1;
- (id)pageData;
- (void)setPageData:(id)arg0;

@end
