//
//     Generated by private class-dump
//

@class NSString, LOTAnimationView, AWEMusicCoverButton, UIViewController;

@interface AWEPlayInteractionShootMusicView : UIView <AWEPlayInteractionMusicViewProtocol> {
    AWEMusicCoverButton *_musicButton;
    LOTAnimationView *_enhanceMusicAnimationView;
    UIViewController *_viewController;
    id /* block */ _viewClickedBlock;
}

@property (weak, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) id /* block */ viewClickedBlock;
@property (retain, nonatomic) AWEMusicCoverButton *musicButton;
@property (retain, nonatomic) LOTAnimationView *enhanceMusicAnimationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playMusicAnimations;
- (void)stopMusicAnimations;
- (void)makeConstraints;
- (id)musicButton;
- (void)pauseMusicAnimations;
- (void)resumeMusicAnimations;
- (void)setMusicButton:(id)arg0;
- (void)setViewClickedBlock:(id /* block */)arg0;
- (id /* block */)viewClickedBlock;
- (id)enhanceMusicAnimationView;
- (void)setEnhanceMusicAnimationView:(id)arg0;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (id)initWithViewController:(id)arg0;

@end