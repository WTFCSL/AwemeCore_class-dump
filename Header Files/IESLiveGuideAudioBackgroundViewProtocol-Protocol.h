//
//     Generated by private class-dump
//

@protocol IESLiveGuideAudioBackgroundViewProtocol <NSObject>

- (void)bindViewModel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 dataSource:(id)arg1;

@optional

- (void)setStatusBarBackgroundColor:(id)arg0;
- (void)setAvatarHidden:(BOOL)arg0;
- (void)setAvatarAlpha:(double)arg0;
- (void)updateLayoutWithIsSquare:(BOOL)arg0;
- (void)relayoutSceneBackgroundViewIfNeeded;
- (void)setAvatarAnimationWithUrls:(id)arg0;
- (void)setContentBackgroundColor:(id)arg0;

@end
