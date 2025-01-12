//
//     Generated by private class-dump
//

@class NSString, UIView;

@interface AWEUGPendantContentBaseView : UIView <AWEUGPendantContentProtocol> {
    id /* block */ contentTapHandler;
    id /* block */ animationFrameHandler;
    id /* block */ contentLottieSwitched;
    unsigned long long _state;
    UIView *_contentView;
}

@property (nonatomic) unsigned long long state;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic, getter=isFolded) BOOL folded;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ contentTapHandler;
@property (copy, nonatomic) id /* block */ contentLottieSwitched;
@property (copy, nonatomic) id /* block */ animationFrameHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentBGView;
- (void)performUpdateFromState:(unsigned long long)arg0 toState:(unsigned long long)arg1 animated:(BOOL)arg2 animationStart:(id /* block */)arg3 animationEnd:(id /* block */)arg4;
- (id /* block */)contentTapHandler;
- (void)contentTapped;
- (void)playAnimationFromFrame:(id)arg0 toFrame:(id)arg1 loop:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)setFolded:(BOOL)arg0;
- (void)setContentTapHandler:(id /* block */)arg0;
- (id /* block */)animationFrameHandler;
- (void)setAnimationFrameHandler:(id /* block */)arg0;
- (id)expandView;
- (void)playLoopAniamtion;
- (void)setContentLottieSwitched:(id /* block */)arg0;
- (id)foldView;
- (id /* block */)contentLottieSwitched;
- (void)updateUIWithExpandLottie:(id)arg0 foldLottie:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg0;
- (void)pauseAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isExpanded;
- (id)contentView;
- (void)setExpanded:(BOOL)arg0;
- (void)dealloc;
- (void)stopAnimation;
- (void)setContentView:(id)arg0;
- (void)setupUI;
- (BOOL)isFolded;

@end
