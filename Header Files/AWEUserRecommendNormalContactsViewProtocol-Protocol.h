//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView, UIButton;
@protocol AWEUserRecommendFollowButtonProtocol;

@protocol AWEUserRecommendNormalContactsViewProtocol <NSObject>

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *centerView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton<AWEUserRecommendFollowButtonProtocol> *contactButton;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) unsigned long long accessoryType;

- (id)contactButton;
- (void)setContactButton:(id)arg0;
- (id)centerView;
- (void)setDescriptionLabel:(id)arg0;
- (void)setCenterView:(id)arg0;
- (id)descriptionLabel;
- (id)nameLabel;
- (unsigned long long)accessoryType;
- (void)setAccessoryType:(unsigned long long)arg0;
- (void)setNameLabel:(id)arg0;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end
