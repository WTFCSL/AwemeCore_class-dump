//
//     Generated by private class-dump
//

@class HTSLiveNativeAnimationUserEnterNode, IESLiveEffectPlayerView;

@interface IESLiveVideoLayerUserEnterView : IESLivePrivilegeEntryView {
    BOOL _resourceComplete;
    IESLiveEffectPlayerView *_playerView;
    HTSLiveNativeAnimationUserEnterNode *_node;
}

@property (retain, nonatomic) IESLiveEffectPlayerView *playerView;
@property (retain, nonatomic) HTSLiveNativeAnimationUserEnterNode *node;
@property (nonatomic) BOOL resourceComplete;

- (void)updateWithEnterMessageNode:(id)arg0;
- (void)reportError:(id)arg0 node:(id)arg1;
- (void)reportPerformanceWithNode:(id)arg0;
- (BOOL)resourceComplete;
- (void)setResourceComplete:(BOOL)arg0;
- (void)handleTapOnMasks:(id)arg0;
- (id)node;
- (void).cxx_destruct;
- (void)endAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)playerView;
- (void)dealloc;
- (void)setPlayerView:(id)arg0;
- (void)startAnimation;
- (void)setNode:(id)arg0;
- (void)setupUI;

@end