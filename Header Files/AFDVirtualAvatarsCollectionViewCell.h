//
//     Generated by private class-dump
//

@class NSString, AFDVirtualAvatarsItemUserModel, UIView, BDImageView;

@interface AFDVirtualAvatarsCollectionViewCell : UICollectionViewCell <AFDVirtualAvatarMessage> {
    NSString *_pageIdentifier;
    BDImageView *_circleAvatarView;
    BDImageView *_animationAvatarView;
    AFDVirtualAvatarsItemUserModel *_model;
    NSString *_uniqueFlag;
    UIView *_centeredShadowView;
}

@property (retain, nonatomic) BDImageView *circleAvatarView;
@property (retain, nonatomic) BDImageView *animationAvatarView;
@property (retain, nonatomic) AFDVirtualAvatarsItemUserModel *model;
@property (copy, nonatomic) NSString *uniqueFlag;
@property (retain, nonatomic) UIView *centeredShadowView;
@property (copy, nonatomic) NSString *pageIdentifier;

- (void)showAnimation;
- (void)p_setupUI;
- (id)uniqueFlag;
- (void)setUniqueFlag:(id)arg0;
- (void)didFinishRequestCreateOrEditVirtualAvatarIsFirstTime:(BOOL)arg0 emotionText:(id)arg1 emotionIcon:(id)arg2;
- (void)didUpdateVirtualAvatarWithNewUserModel:(id)arg0;
- (void)updateAvatarFromRemoteWithModel:(id)arg0;
- (void)resetCenter;
- (id)centeredShadowView;
- (id)circleAvatarView;
- (id)animationAvatarView;
- (void)renderWithModel:(id)arg0;
- (void)becomeCenter;
- (void)setCircleAvatarView:(id)arg0;
- (void)setAnimationAvatarView:(id)arg0;
- (void)setCenteredShadowView:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareForReuse;
- (void)dealloc;
- (id)pageIdentifier;
- (void)setPageIdentifier:(id)arg0;

@end
