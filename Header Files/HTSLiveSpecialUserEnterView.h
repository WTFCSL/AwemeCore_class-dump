//
//     Generated by private class-dump
//

@class HTSLiveScorllLabelView, HTSLiveNativeAnimationUserEnterNode, FLAnimatedImageView;

@interface HTSLiveSpecialUserEnterView : IESLivePrivilegeEntryView {
    HTSLiveScorllLabelView *_contentView;
    FLAnimatedImageView *_contentBackgroundView;
    HTSLiveNativeAnimationUserEnterNode *_enterNode;
}

@property (retain, nonatomic) HTSLiveScorllLabelView *contentView;
@property (retain, nonatomic) FLAnimatedImageView *contentBackgroundView;
@property (retain, nonatomic) HTSLiveNativeAnimationUserEnterNode *enterNode;

- (void)p_startAnimation;
- (void)renderUI;
- (void)updateWithEnterMessageNode:(id)arg0;
- (void)startShowingAnimation;
- (id)enterNode;
- (void)setEnterNode:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)startAnimation;
- (void)stopAnimation;
- (void)setContentView:(id)arg0;
- (id)contentBackgroundView;
- (void)setContentBackgroundView:(id)arg0;

@end
