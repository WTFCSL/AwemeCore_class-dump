//
//     Generated by private class-dump
//

@class UIViewController, UIView;
@protocol AWEPlayVideoDelegate, AWEAwemeBizPlayVideoProtocol, AWEPlayVideoViewControllerContainerProtocol, AFDSlidesViewProtocol, AWEAwemePlayVideoViewControllerProtocol, AWEPlayVideoViewControllerDelegate;

@protocol AFDRichAwemeViewControllerProtocol <AWEAwemeDisplayViewController, AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoTrackProtocol>

@property (nonatomic, readonly) UIViewController<AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoViewControllerProtocol> *videoController;
@property (nonatomic, weak) id<AWEPlayVideoDelegate, AWEPlayVideoViewControllerContainerProtocol, AWEPlayVideoViewControllerDelegate> playerDelegate;
@property (nonatomic) struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *audioWrapper;
@property (nonatomic) struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *videoWrapper;
@property (nonatomic, weak) id<AWEPlayVideoViewControllerContainerProtocol> container;
@property (nonatomic) BOOL isInFullPageTransition;
@property (nonatomic) BOOL isSliderZooming;
@property (nonatomic) BOOL isInStoryContainer;
@property (nonatomic, retain) UIView<AFDSlidesViewProtocol> *imageSliderView;

- (void)buildInteractionControllerIfNeeded:(id)arg0;
- (BOOL)edgePan:(id)arg0;
- (void)setPlayerDelegate:(id)arg0;
- (id)playerDelegate;
- (struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *)audioWrapper;
- (void)setAudioWrapper:(struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *)arg0;
- (struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *)videoWrapper;
- (void)setVideoWrapper:(struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *)arg0;
- (BOOL)isInFullPageTransition;
- (void)setIsInFullPageTransition:(BOOL)arg0;
- (BOOL)isSliderZooming;
- (void)setIsSliderZooming:(BOOL)arg0;
- (BOOL)isInStoryContainer;
- (void)setIsInStoryContainer:(BOOL)arg0;
- (id)imageSliderView;
- (void)setImageSliderView:(id)arg0;
- (void)updateWithImageSliderView:(id)arg0;
- (void)updateWithImageSliderView:(id)arg0;
- (void)resetProgressOfCurrentImage;
- (void)showImageSlidesViewGradientLayer;
- (void)hideImageSlidesViewGradientLayer;
- (void)setupAndPlayTimer;
- (id)container;
- (id)transitionContext;
- (void)setContainer:(id)arg0;
- (id)videoController;

@end
