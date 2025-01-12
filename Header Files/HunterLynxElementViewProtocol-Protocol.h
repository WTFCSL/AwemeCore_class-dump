//
//     Generated by private class-dump
//

@protocol HunterLynxElementStatusDelegate;

@protocol HunterLynxElementViewProtocol <NSObject>

@property (weak, nonatomic) id<HunterLynxElementStatusDelegate> statusDelegate;

- (BOOL)isMediaSourceCard;
- (id)getLynxElementType;
- (id)transitionContext;
- (id)statusDelegate;
- (void)setStatusDelegate:(id)arg0;
- (id)videoView;

@optional

- (id)liveTransitionContext;
- (BOOL)shouldEnterFullScreenWithPlayer;
- (void)didBecomeActive;
- (void)didResignActive;
- (void)willEnterFullScreen;
- (id)transitionContextProvider;
- (id)livePlayer;

@end
