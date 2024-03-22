//
//     Generated by private class-dump
//

@class AFDCloseFriendsBlurMaskView, UIImageView, UIView, AFDCloseFriendsExchangeBlurMaskView, UIButton;

@protocol AFDCloseFriendsMomentFeedCardCellProtocol <AFDMomentCellSnapshot>

@property (retain, nonatomic) UIButton *moreBtn;
@property (retain, nonatomic) UIView *momentMediaView;
@property (retain, nonatomic) UIView *titleLabel;
@property (retain, nonatomic) UIView *authorView;
@property (readonly, nonatomic) UIImageView *snapShootView;
@property (readonly, nonatomic) AFDCloseFriendsBlurMaskView *blurMaskView;
@property (readonly, nonatomic) AFDCloseFriendsExchangeBlurMaskView *exchangeBlurMaskView;

- (id)momentMediaView;
- (id)blurMaskView;
- (void)setMoreBtn:(id)arg0;
- (id)moreBtn;
- (id)authorView;
- (void)setAuthorView:(id)arg0;
- (id)exchangeBlurMaskView;
- (void)setMomentMediaView:(id)arg0;
- (id)snapShootView;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (void)updateHeaderView;

@end
