//
//     Generated by private class-dump
//

@class AWEDetailCommerceChallengeModel, UIImageView, IESServiceProvider, UILabel;

@interface AWEDetailCommerceChallengeEntranceCell : UICollectionViewCell {
    UIImageView *_avatarImageView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIImageView *_arrowImageView;
    AWEDetailCommerceChallengeModel *_model;
    IESServiceProvider *_provider;
}

@property (retain, nonatomic) AWEDetailCommerceChallengeModel *model;
@property (retain, nonatomic) IESServiceProvider *provider;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (void)p_setupUI;
- (void)clickedChallengeEntrance:(id)arg0;
- (void)configWithModel:(id)arg0 serviceProvider:(id)arg1;
- (void)setModel:(id)arg0;
- (void)setProvider:(id)arg0;
- (id)provider;
- (void).cxx_destruct;
- (id)model;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (void)setDescriptionLabel:(id)arg0;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)descriptionLabel;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (void)touchesCancelled:(id)arg0 withEvent:(id)arg1;
- (void)setTitleLabel:(id)arg0;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end
