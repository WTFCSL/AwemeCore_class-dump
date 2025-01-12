//
//     Generated by private class-dump
//

@class NSString, HTSLiveEpisode, PuzzleHybridContainer;

@interface IESLivePlaybackPayWallGuidePayView : UIView <IESHYHybridViewLifecycleProtocol, IESLivePluginLayoutViewAdapter> {
    BOOL _didLoad;
    HTSLiveEpisode *_episode;
    PuzzleHybridContainer *_hybridView;
    NSString *_url;
    NSString *_fallbackUrk;
}

@property (nonatomic) BOOL didLoad;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *fallbackUrk;
@property (retain, nonatomic) HTSLiveEpisode *episode;
@property (retain, nonatomic) PuzzleHybridContainer *hybridView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidFinishLoadWithURL:(id)arg0;
- (void)viewDidRecieveError:(id)arg0;
- (void)viewDidLoadFailedWithUrl:(id)arg0 error:(id)arg1;
- (id)hybridView;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)setHybridView:(id)arg0;
- (void)renderWithUrl:(id)arg0 fallbackUrl:(id)arg1;
- (void)notityLeftTime:(double)arg0;
- (void)setFallbackUrk:(id)arg0;
- (id)fallbackUrk;
- (void)customAutoHideAnimation:(BOOL)arg0 animation:(BOOL)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })hybridViewContentInsets;
- (double)hybridViewCustomAnimationTopOffset:(BOOL)arg0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (id)viewType;
- (id)url;
- (void)orientationChanged:(long long)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setEpisode:(id)arg0;
- (id)episode;
- (BOOL)didLoad;
- (void)setDidLoad:(BOOL)arg0;

@end
