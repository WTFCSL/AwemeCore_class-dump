//
//     Generated by private class-dump
//

@class UILabel, AWEUserDetailIconView;

@interface AWEUserDetailTitleView : UIView {
    BOOL _isFromFamiliar;
    BOOL _isLoginUser;
    id /* block */ _clickFollowCallBack;
    id /* block */ _clickMessageCallBack;
    long long _followStatus;
    long long _followerStatus;
    UILabel *_titleLabel;
    AWEUserDetailIconView *_iconView;
}

@property (nonatomic) BOOL isLoginUser;
@property (nonatomic) long long followStatus;
@property (nonatomic) long long followerStatus;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEUserDetailIconView *iconView;
@property (copy, nonatomic) id /* block */ clickFollowCallBack;
@property (copy, nonatomic) id /* block */ clickMessageCallBack;
@property (nonatomic) BOOL isFromFamiliar;

- (long long)followStatus;
- (void)setFollowStatus:(long long)arg0;
- (long long)followerStatus;
- (void)setFollowerStatus:(long long)arg0;
- (void)refreshWithUser:(id)arg0;
- (BOOL)isFromFamiliar;
- (void)setIsFromFamiliar:(BOOL)arg0;
- (void)updateSubviewStatus;
- (id /* block */)clickFollowCallBack;
- (id /* block */)clickMessageCallBack;
- (void)clickSelf;
- (void)setClickFollowCallBack:(id /* block */)arg0;
- (void)setClickMessageCallBack:(id /* block */)arg0;
- (void)setIsLoginUser:(BOOL)arg0;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (BOOL)isLoginUser;

@end
