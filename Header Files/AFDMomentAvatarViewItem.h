//
//     Generated by private class-dump
//

@class UIViewPropertyAnimator;

@interface AFDMomentAvatarViewItem : NSObject {
    UIViewPropertyAnimator *_animator;
}

@property (retain, nonatomic) UIViewPropertyAnimator *animator;

+ (void)trackMomentNoticeWithEvent:(unsigned long long)arg0 sourceFrom:(unsigned long long)arg1;

- (id)setupMomentAvatarViewWithContainerView:(id)arg0 listIconView:(id)arg1 sourceFrom:(unsigned long long)arg2 avatarViewDidTapBlock:(id /* block */)arg3;
- (id)avatarViewBindDataWithAvatarView:(id)arg0 listIconView:(id)arg1;
- (id)avatarViewBindAnimationWithAvatarView:(id)arg0 listIconView:(id)arg1;
- (id)avatarViewIMBindAnimationWithAvatarView:(id)arg0 listIconView:(id)arg1;
- (void)trackMomentNoticeShowWithAvatarView:(id)arg0;
- (void)animationWithAvatarView:(id)arg0 listIconView:(id)arg1 isSkylightAppearing:(BOOL)arg2 animated:(BOOL)arg3;
- (void)animationWithAvatarView:(id)arg0 listIconView:(id)arg1 isSkylightAppearing:(BOOL)arg2 animated:(BOOL)arg3 completionBlock:(id /* block */)arg4;
- (void)p_animationWithAvatarView:(id)arg0 listIconView:(id)arg1 isSkylightAppearing:(BOOL)arg2 animated:(BOOL)arg3 completionBlock:(id /* block */)arg4;
- (id)animator;
- (void).cxx_destruct;
- (void)setAnimator:(id)arg0;

@end
