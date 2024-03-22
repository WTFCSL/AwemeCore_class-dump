//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEStudioMusicServiceDependencies;

@interface AWEVideoRouterMusicService : NSObject <AWEStudioMusicService> {
    id<AWEStudioMusicServiceDependencies> _dependencies;
}

@property (retain, nonatomic) id<AWEStudioMusicServiceDependencies> dependencies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createVideoWithMusic:(id)arg0 withInfo:(id)arg1;
- (BOOL)isVideoMusicSelectRoute;
- (id)createVideoWithMusic:(id)arg0 withInfo:(id)arg1 commercialAnchorModel:(id)arg2;
- (void)preloadHotMusic;
- (id)changeMusicWithSticker:(id)arg0 inputData:(id)arg1 originalMusicDownloadFailed:(BOOL)arg2;
- (id)jsonObjectDecoded:(id)arg0;
- (void).cxx_destruct;
- (id)dependencies;
- (void)setDependencies:(id)arg0;

@end