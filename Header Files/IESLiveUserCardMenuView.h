//
//     Generated by private class-dump
//

@class LOTAnimationView, IESLiveUserPreviewLikeDigAnimationView, IESLiveUserCardStore, UIView;

@interface IESLiveUserCardMenuView : UIView {
    IESLiveUserPreviewLikeDigAnimationView *_animationContain;
    IESLiveUserCardStore *_store;
    double _viewWidth;
    LOTAnimationView *_adventureInviteLottieView;
    UIView *_adventureInviteTagView;
}

@property (retain, nonatomic) IESLiveUserPreviewLikeDigAnimationView *animationContain;
@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (nonatomic) double viewWidth;
@property (retain, nonatomic) LOTAnimationView *adventureInviteLottieView;
@property (retain, nonatomic) UIView *adventureInviteTagView;

- (void)setViewWidth:(double)arg0;
- (void)cofingWithStore:(id)arg0;
- (void)configWithActions:(id)arg0;
- (double)widthOfMenuView;
- (void)addAllActionsToMore:(id)arg0;
- (id)renderActionItem:(id)arg0 tag:(long long)arg1;
- (void)addAdventureInviteLottieView:(id)arg0 rightView:(id)arg1 actionButton:(id)arg2 isMoreButton:(BOOL)arg3;
- (id)createSeperatorView;
- (void)onMoreTapped:(id)arg0;
- (id)createActionButton:(id)arg0 tag:(long long)arg1;
- (BOOL)showLikeButtonWithConfig:(id)arg0;
- (void)renderLiekButton:(id)arg0;
- (BOOL)actionsContainGame:(id)arg0;
- (void)onMoreTappedWhenRelationEntranceShow:(id)arg0;
- (void)setAdventureInviteLottieView:(id)arg0;
- (id)adventureInviteLottieView;
- (id)adventureInviteTagView;
- (void)setAnimationContain:(id)arg0;
- (id)animationContain;
- (void)onItemSelected:(id)arg0;
- (void)setAdventureInviteTagView:(id)arg0;
- (void).cxx_destruct;
- (id)store;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setStore:(id)arg0;
- (void)layoutSubviews;
- (double)viewWidth;

@end