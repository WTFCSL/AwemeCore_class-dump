//
//     Generated by private class-dump
//

@protocol IESLiveMultiKTVSingModeSwitch <NSObject>

@property (nonatomic) BOOL avatarGuideBubbleShown4Audience;
@property (nonatomic) int singMode;
@property (nonatomic) BOOL videoSingModeBannedByOther;
@property (nonatomic) BOOL stagedRealTimeAvatarEnabled;

- (BOOL)localAvatarResultModelExist;
- (void)prefetchAvatarResources;
- (void)resetPerLive;
- (BOOL)avatarGuideBubbleShown4Audience;
- (void)setAvatarGuideBubbleShown4Audience:(BOOL)arg0;
- (int)singMode;
- (void)setSingMode:(int)arg0;
- (BOOL)videoSingModeBannedByOther;
- (void)setVideoSingModeBannedByOther:(BOOL)arg0;
- (BOOL)stagedRealTimeAvatarEnabled;
- (void)setStagedRealTimeAvatarEnabled:(BOOL)arg0;

@end
