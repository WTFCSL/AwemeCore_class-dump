//
//     Generated by private class-dump
//

@protocol AWEStudioLiveService <NSObject>

- (id)startVideoClipViewControllerWithModel:(id)arg0 liveModel:(id)arg1 extraDict:(id)arg2;
- (void)saveDraftWithSegmentedClipModel:(id)arg0 liveModel:(id)arg1 missionModel:(id)arg2 extraDict:(id)arg3 completion:(id /* block */)arg4;
- (id)startPublishLiveVideoWithModel:(id)arg0 liveModel:(id)arg1 extraDict:(id)arg2;
- (void)downloadVideoAndSaveDraft:(id)arg0 liveModel:(id)arg1 progress:(id /* block */)arg2 extraDict:(id)arg3 completion:(id /* block */)arg4 cancelBlockPasser:(id /* block */)arg5;
- (id)soloKTVAlbumService;
- (id)soloKTVPublishService;
- (void)openEditorViewWithStickerConfig:(id)arg0 image:(id)arg1 targetTime:(double)arg2 trackParams:(id)arg3 completion:(id /* block */)arg4;
- (void)handlestartOpenLiveSchema:(id)arg0 completion:(id /* block */)arg1;

@end