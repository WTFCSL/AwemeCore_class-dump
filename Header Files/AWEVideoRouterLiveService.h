//
//     Generated by private class-dump
//

@class AWEStudioSoloKTVPublishServiceImpl, NSString, ACCEditorSilentPublisher, AWEStudioTask, AWEStudioSoloKTVAlbumServiceImpl;
@protocol AWEStudioLiveServiceDependencies;

@interface AWEVideoRouterLiveService : NSObject <AWEStudioLiveService> {
    id<AWEStudioLiveServiceDependencies> _dependencies;
    ACCEditorSilentPublisher *_silentPublisher;
    AWEStudioTask *_ktvSaveDraftTask;
    AWEStudioSoloKTVAlbumServiceImpl *_albumServiceImpl;
    AWEStudioSoloKTVPublishServiceImpl *_publishServiceImpl;
}

@property (retain, nonatomic) ACCEditorSilentPublisher *silentPublisher;
@property (retain, nonatomic) AWEStudioTask *ktvSaveDraftTask;
@property (retain, nonatomic) AWEStudioSoloKTVAlbumServiceImpl *albumServiceImpl;
@property (retain, nonatomic) AWEStudioSoloKTVPublishServiceImpl *publishServiceImpl;
@property (retain, nonatomic) id<AWEStudioLiveServiceDependencies> dependencies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)startVideoClipViewControllerWithModel:(id)arg0 liveModel:(id)arg1 extraDict:(id)arg2;
- (void)saveDraftWithSegmentedClipModel:(id)arg0 liveModel:(id)arg1 missionModel:(id)arg2 extraDict:(id)arg3 completion:(id /* block */)arg4;
- (id)startPublishLiveVideoWithModel:(id)arg0 liveModel:(id)arg1 extraDict:(id)arg2;
- (void)downloadVideoAndSaveDraft:(id)arg0 liveModel:(id)arg1 progress:(id /* block */)arg2 extraDict:(id)arg3 completion:(id /* block */)arg4 cancelBlockPasser:(id /* block */)arg5;
- (id)soloKTVAlbumService;
- (id)soloKTVPublishService;
- (void)openEditorViewWithStickerConfig:(id)arg0 image:(id)arg1 targetTime:(double)arg2 trackParams:(id)arg3 completion:(id /* block */)arg4;
- (void)setSilentPublisher:(id)arg0;
- (id)silentPublisher;
- (void)handlestartOpenLiveSchema:(id)arg0 completion:(id /* block */)arg1;
- (void)startPublishLivePlaybackVideoWithModel:(id)arg0 liveModel:(id)arg1 completion:(id /* block */)arg2;
- (void)startPublishLiveHighlightVideoWithModel:(id)arg0 liveModel:(id)arg1 extraDict:(id)arg2 completion:(id /* block */)arg3;
- (id)publishServiceImpl;
- (void)setPublishServiceImpl:(id)arg0;
- (id)albumServiceImpl;
- (void)setAlbumServiceImpl:(id)arg0;
- (id)ktvSaveDraftTask;
- (void)setKtvSaveDraftTask:(id)arg0;
- (void).cxx_destruct;
- (id)dependencies;
- (void)setDependencies:(id)arg0;

@end
