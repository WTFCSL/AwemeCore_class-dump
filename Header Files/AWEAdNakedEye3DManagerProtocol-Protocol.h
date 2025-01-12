//
//     Generated by private class-dump
//

@class UIViewController;
@protocol AWEPlayInteractionViewControllerProtocol, AWEPlayVideoViewControllerProtocol;

@protocol AWEAdNakedEye3DManagerProtocol <NSObject>

@property (nonatomic, weak) UIViewController<AWEPlayInteractionViewControllerProtocol> *playInteractionViewController;
@property (nonatomic, weak) UIViewController<AWEPlayVideoViewControllerProtocol> *playVideoViewController;

- (id)initWithAweme:(id)arg0;
- (id)playInteractionViewController;
- (void)setPlayInteractionViewController:(id)arg0;
- (id)playVideoViewController;
- (void)setPlayVideoViewController:(id)arg0;
- (void)onPlayerWillLoopPlaying:(id)arg0;
- (void)prepareForPlaying;
- (void)reset;

@end
