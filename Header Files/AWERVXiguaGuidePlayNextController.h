//
//     Generated by private class-dump
//

@class UIVisualEffectView, AWELongVideoXiguaGuidePlayNextVideoView;

@interface AWERVXiguaGuidePlayNextController : AWEVideoPlayControlBaseController {
    AWELongVideoXiguaGuidePlayNextVideoView *_xiguaPlayNextVideoView;
    UIVisualEffectView *_glassmorphismView;
}

@property (retain, nonatomic) AWELongVideoXiguaGuidePlayNextVideoView *xiguaPlayNextVideoView;
@property (retain, nonatomic) UIVisualEffectView *glassmorphismView;

- (void)setHide:(BOOL)arg0;
- (void)bindEvent;
- (id)glassmorphismView;
- (void)setGlassmorphismView:(id)arg0;
- (id)xiguaPlayNextVideoView;
- (void)hiddenPlayDoneXiguaGuideView;
- (void)showPlayDoneXiguaGuideViewWithTitle:(id)arg0 coverUrl:(id)arg1 isForceGuide:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setXiguaPlayNextVideoView:(id)arg0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
