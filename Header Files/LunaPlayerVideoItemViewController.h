//
//     Generated by private class-dump
//

@class _TtC21AWEMusicStreamingImpl18LunaVideoSceneView;

@interface LunaPlayerVideoItemViewController : LunaPlayerBaseItemViewController {
    _TtC21AWEMusicStreamingImpl18LunaVideoSceneView *_videoSceneView;
}

@property (retain, nonatomic) _TtC21AWEMusicStreamingImpl18LunaVideoSceneView *videoSceneView;

- (void)musicService:(id)arg0 playStatusChanged:(long long)arg1;
- (void)musicServiceReadyToPlay:(id)arg0;
- (void)musicServiceMusicChanged:(id)arg0;
- (void)itemDidDisappear;
- (void)itemViewDidAppear;
- (void)mainFeed_viewDidAppear;
- (void)appLifeCycleNoti:(id)arg0;
- (id)videoSceneView;
- (void)attachVideView;
- (void)setVideoSceneView:(id)arg0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)updateUI;
- (id)sceneView;

@end
