//
//     Generated by private class-dump
//

@class NLETrackMV_OC, NSString, NLETrack_OC, NSArray, IESMMMVModel;

@interface ACCEditMVModel : NSObject {
    BOOL _isMultiProjects;
    IESMMMVModel *_veMVModel;
    NSString *_draftFolder;
    NLETrackMV_OC *_mvTrack;
    NLETrack_OC *_algorithmTrack;
}

@property (retain, nonatomic) IESMMMVModel *veMVModel;
@property (copy, nonatomic) NSString *draftFolder;
@property (retain, nonatomic) NLETrackMV_OC *mvTrack;
@property (retain, nonatomic) NLETrack_OC *algorithmTrack;
@property (nonatomic) BOOL isMultiProjects;
@property (nonatomic) BOOL isAudioFitVideoDuration;
@property (readonly, nonatomic) NSArray *resources;

+ (BOOL)isEffectMusicMV:(id)arg0;
+ (id)nleAlgorithmResultWithVE:(id)arg0 draftFolder:(id)arg1;
+ (BOOL)p_isEffectMusicMV:(id)arg0;
+ (id)videoAssetsSelectedByUserFromVideoData:(id)arg0;

- (void)setExtraParams:(id)arg0;
- (id)draftFolder;
- (void)setDraftFolder:(id)arg0;
- (id)veMVModel;
- (void)setVeMVModel:(id)arg0;
- (void)setServerAlgorithmResults:(id)arg0;
- (void)setBeatTrackingAlgorithmData:(id)arg0;
- (void)userChangeMusic:(id)arg0 completion:(id /* block */)arg1;
- (void)userChangePictures:(id)arg0 newPictureUrls:(id)arg1 completion:(id /* block */)arg2;
- (void)clearAndAddBGMWithVideoData:(id)arg0 bgmAsset:(id)arg1 repository:(id)arg2;
- (void)replaceAudioWithVideoData:(id)arg0 repository:(id)arg1;
- (id)initWithDraftFolder:(id)arg0;
- (void)generateMVWithPath:(id)arg0 repository:(id)arg1 userResourses:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)isMultiProjects;
- (void)setIsMultiProjects:(BOOL)arg0;
- (void)generateMusicBeatsMVWithRepository:(id)arg0 userResourses:(id)arg1 completion:(id /* block */)arg2;
- (void)setIsAudioFitVideoDuration:(BOOL)arg0;
- (void)generateMVWithPath:(id)arg0 repository:(id)arg1 userResourses:(id)arg2 resourcesDuration:(id)arg3 videoData:(id)arg4 completion:(id /* block */)arg5;
- (void)generateMVWithPath:(id)arg0 repository:(id)arg1 userResourses:(id)arg2 videoData:(id)arg3 completion:(id /* block */)arg4;
- (id)mvTrack;
- (id)algorithmTrack;
- (void)p_addPlaceholderMVAudioTrackIfNeeded:(id)arg0 repository:(id)arg1;
- (void)p_removePlaceholderMVAudioTrackIfNeeded:(id)arg0 videoData:(id)arg1;
- (void)p_updateBGMSubtypeForDraftWithRepository:(id)arg0 videoData:(id)arg1;
- (id)p_bgmTrackWithRepository:(id)arg0 bgmAsset:(id)arg1 nle:(id)arg2;
- (unsigned long long)p_audioTypeInMV:(id)arg0;
- (void)setAlgorithmTrack:(id)arg0;
- (void)addBGMForDraftWithRepository:(id)arg0;
- (BOOL)isAudioFitVideoDuration;
- (void)setMvTrack:(id)arg0;
- (void)setResolution:(struct CGSize { double x0; double x1; })arg0;
- (id)resources;
- (void).cxx_destruct;

@end
