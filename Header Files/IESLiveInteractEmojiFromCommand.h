//
//     Generated by private class-dump
//

@class UIImageView, IESLiveInteractGiftAnimationInfo, NSMutableSet;
@protocol IESLiveWebPPlayer;

@interface IESLiveInteractEmojiFromCommand : IESLiveInteractEmojiBaseCommand {
    id /* block */ _transitionAnimation;
    UIImageView<IESLiveWebPPlayer> *_effectView;
    IESLiveInteractGiftAnimationInfo *_animationInfo;
    NSMutableSet *_occupiedUsers;
}

@property (copy, nonatomic) id /* block */ transitionAnimation;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *effectView;
@property (retain, nonatomic) IESLiveInteractGiftAnimationInfo *animationInfo;
@property (retain, nonatomic) NSMutableSet *occupiedUsers;

- (void)batchDispatch:(id)arg0 effect:(id)arg1 to:(id)arg2;
- (void)transitionAnimation:(id)arg0 effect:(id)arg1 completed:(id /* block */)arg2;
- (id)occupiedUsers;
- (void)setTransitionAnimation:(id /* block */)arg0;
- (void)dispatch:(id)arg0 from:(struct CGPoint { double x0; double x1; })arg1 to:(id)arg2;
- (void)setOccupiedUsers:(id)arg0;
- (void)cancelTask:(id)arg0;
- (id)effectView;
- (void).cxx_destruct;
- (void)setEffectView:(id)arg0;
- (void)removeAnimation:(id)arg0;
- (id /* block */)transitionAnimation;
- (id)animationInfo;
- (void)setAnimationInfo:(id)arg0;

@end