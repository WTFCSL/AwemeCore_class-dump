//
//     Generated by private class-dump
//

@protocol AWEUGPendantContentProtocol <NSObject>

@property (copy, nonatomic) id /* block */ contentTapHandler;
@property (copy, nonatomic) id /* block */ contentLottieSwitched;
@property (copy, nonatomic) id /* block */ animationFrameHandler;

- (id)contentBGView;
- (void)performUpdateFromState:(unsigned long long)arg0 toState:(unsigned long long)arg1 animated:(BOOL)arg2 animationStart:(id /* block */)arg3 animationEnd:(id /* block */)arg4;
- (id /* block */)contentTapHandler;
- (void)playAnimationFromFrame:(id)arg0 toFrame:(id)arg1 loop:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)setContentTapHandler:(id /* block */)arg0;
- (id /* block */)animationFrameHandler;
- (void)setAnimationFrameHandler:(id /* block */)arg0;
- (id)expandView;
- (void)playLoopAniamtion;
- (void)setContentLottieSwitched:(id /* block */)arg0;
- (id)foldView;
- (id /* block */)contentLottieSwitched;
- (void)pauseAnimation;
- (void)stopAnimation;

@optional

- (void)setContentPlaySuccessfullyHandler:(id /* block */)arg0;
- (void)setContentPlayFailedHandler:(id /* block */)arg0;
- (id /* block */)contentPlaySuccessfullyHandler;
- (id /* block */)contentPlayFailedHandler;
- (void)performRightsideUpdateFromState:(unsigned long long)arg0 toState:(unsigned long long)arg1 animated:(BOOL)arg2 animationStart:(id /* block */)arg3 animationEnd:(id /* block */)arg4;
- (void)performContentZoomAnimation:(BOOL)arg0;
- (void)performEdgeDraggingEndAnimation:(BOOL)arg0;

@end