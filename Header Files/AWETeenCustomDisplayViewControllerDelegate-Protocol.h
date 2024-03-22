//
//     Generated by private class-dump
//

@protocol AWETeenCustomDisplayViewControllerDelegate <NSObject>

@optional

- (void)playerWillLoopPlayingWithAwemeID:(id)arg0 videoID:(id)arg1 currentTime:(double)arg2;
- (void)syncPlayTimeWithAwemeModel:(id)arg0 playedDuration:(double)arg1 totalDuration:(double)arg2;
- (void)interactionStickerCardClicked:(id)arg0;
- (void)interactionSelectAlbumClicked;
- (void)interactionEnterLandscapeClicked;
- (void)interactionExitLandscapeClicked;
- (void)interactionNextEpisodeButtonClicked;
- (void)interactionPlayButtonClicked:(BOOL)arg0;
- (void)interactionScreenCastButtonClicked;
- (void)interactionViewImmersiveStatusChanged:(unsigned long long)arg0;
- (void)interactionMorePanelShow:(BOOL)arg0;
- (void)interactionReportSubmit;
- (BOOL)interactionCanShowEyeProtectionRemind;

@end
