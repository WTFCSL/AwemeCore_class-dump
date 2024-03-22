//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, AWEUserRecommendButton, AWEFilterDetail;

@interface AWEFilterDetailTipView : UIView <AWEUserMessage, AWEFilterDetailTipViewProtocol> {
    UIImageView *_tipImageView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIImageView *_badgeImageView;
    UILabel *_nameLabel;
    AWEUserRecommendButton *_followBtn;
    AWEFilterDetail *_filterDetail;
}

@property (retain, nonatomic) UIImageView *tipImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *badgeImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) AWEUserRecommendButton *followBtn;
@property (retain, nonatomic) AWEFilterDetail *filterDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)updateByModel:(id)arg0;
- (void)unfollowUser;
- (void)setTipImageView:(id)arg0;
- (id)tipImageView;
- (id)filterDetail;
- (void)setFilterDetail:(id)arg0;
- (void)p_setupAuthorSecretUI;
- (void)updateFollowBtn;
- (void)p_setupCommonUI;
- (id)followBtn;
- (void)p_showAuthorSecretUI:(BOOL)arg0;
- (void)followUser;
- (void)didTapFollowBtn;
- (void)setFollowBtn:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)nameLabel;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (void)setNameLabel:(id)arg0;
- (id)badgeImageView;
- (void)setBadgeImageView:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (void)initUI;

@end
