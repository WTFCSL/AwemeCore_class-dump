//
//     Generated by private class-dump
//

@class NSString, IESLivePlaybackCornerToastConfig, UILabel, UIView;

@interface IESLivePlaybackCornerToastFragment : IESLivePlaybackComponent <IESLivePlaybackOrientationActions, IESLivePlaybackCustomAutoHideAnimService, IESLivePlaybackCornerToastAction, IESLivePlaybackComponentLifeCycle> {
    BOOL _needLimitWidth;
    UIView *_container;
    UILabel *_label;
    UIView *_customView;
    id /* block */ _hideComponentTask;
    IESLivePlaybackCornerToastConfig *_config;
}

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *customView;
@property (copy, nonatomic) id /* block */ hideComponentTask;
@property (nonatomic) BOOL needLimitWidth;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } playFrame;
@property (retain, nonatomic) IESLivePlaybackCornerToastConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showText:(id)arg0;
- (void)componentDidMount;
- (void)componentBindService;
- (void)componentOrientationChanged:(long long)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playFrame;
- (id /* block */)hideComponentTask;
- (void)setHideComponentTask:(id /* block */)arg0;
- (void)landscapeViewsTransformToHidden:(BOOL)arg0;
- (void)portraitViewsTransformToHidden:(BOOL)arg0;
- (void)onOrientationTransitionEnd;
- (void)showText:(id)arg0 delayTime:(double)arg1;
- (void)showAttributeText:(id)arg0;
- (void)showAttributeText:(id)arg0 delayTime:(double)arg1 cutWidth:(BOOL)arg2;
- (void)showCustomSubview:(id)arg0 delayTime:(double)arg1;
- (void)showCustomSubview:(id)arg0 delayTime:(double)arg1 priority:(unsigned long long)arg2;
- (void)didUpdatePlaybackEpisode:(id)arg0;
- (void)showCustomSubview:(id)arg0;
- (void)setNeedLimitWidth:(BOOL)arg0;
- (BOOL)needLimitWidth;
- (void)showAndDelayToHideContainer:(double)arg0;
- (void)showAndDelayToHideContainer;
- (id)container;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)setContainer:(id)arg0;
- (void)setLabel:(id)arg0;
- (id)customView;
- (void)updateConstraints;
- (id)label;
- (void)setCustomView:(id)arg0;
- (void)setupView;
- (void)hideImmediately;
- (BOOL)showingToast;

@end
