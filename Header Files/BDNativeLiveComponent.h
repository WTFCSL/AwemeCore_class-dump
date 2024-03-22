//
//     Generated by private class-dump
//

@class BDNativeLiveVideoView, NSString;

@interface BDNativeLiveComponent : BDNativeWebBaseComponent <BDNativeLiveVideoViewPlayerDelegate> {
    BOOL _autoPlay;
    BDNativeLiveVideoView *_videoView;
}

@property (nonatomic) BOOL autoPlay;
@property (weak, nonatomic) BDNativeLiveVideoView *videoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nativeTagName;
+ (id)nativeTagVersion;

- (void)didError:(id)arg0;
- (void)didStall;
- (void)didReady;
- (void)handleAutoplayWithVideoView:(id)arg0 params:(id)arg1;
- (void)handleSrcWithVideoView:(id)arg0 params:(id)arg1;
- (void)handleControlsWithVideoView:(id)arg0 params:(id)arg1;
- (void)handleVolumeWithVideoView:(id)arg0 params:(id)arg1;
- (void)handleMutedWithVideoView:(id)arg0 params:(id)arg1;
- (void)handlePoster:(id)arg0 params:(id)arg1;
- (void)handleObjectFitWithImageView:(id)arg0 params:(id)arg1;
- (void)handleCornerRadiusWithImageView:(id)arg0 params:(id)arg1;
- (void)didVideoSizChange:(struct CGSize { double x0; double x1; })arg0;
- (id)insertInNativeContainerObject:(id)arg0 params:(id)arg1;
- (void)updateInNativeContainerObject:(id)arg0 params:(id)arg1;
- (void)deleteInNativeContainerObject:(id)arg0 params:(id)arg1;
- (void).cxx_destruct;
- (void)didIdle;
- (void)setVideoView:(id)arg0;
- (id)videoView;
- (BOOL)autoPlay;
- (void)setAutoPlay:(BOOL)arg0;
- (void)didStop;
- (void)didPause;
- (void)didResume;
- (void)didPlay;

@end
