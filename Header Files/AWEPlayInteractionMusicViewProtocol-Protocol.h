//
//     Generated by private class-dump
//

@class AWEMusicCoverButton, LOTAnimationView;

@protocol AWEPlayInteractionMusicViewProtocol <NSObject>

@property (retain, nonatomic) AWEMusicCoverButton *musicButton;
@property (retain, nonatomic) LOTAnimationView *enhanceMusicAnimationView;

- (void)playMusicAnimations;
- (void)stopMusicAnimations;
- (id)musicButton;
- (void)pauseMusicAnimations;
- (void)resumeMusicAnimations;
- (void)setMusicButton:(id)arg0;
- (id)enhanceMusicAnimationView;
- (void)setEnhanceMusicAnimationView:(id)arg0;
- (id)initWithViewController:(id)arg0;

@end
