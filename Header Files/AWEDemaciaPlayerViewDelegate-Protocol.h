//
//     Generated by private class-dump
//

@protocol AWEDemaciaPlayerViewDelegate <NSObject, AWEDemaciaPlayerControlViewDelegate, IESCommonVideoPlayerDelegate>

@optional

- (void)demaciaPlayerViewDidEnterQuietMode:(BOOL)arg0;
- (void)demaciaPlayerPlayTime:(double)arg0 canPlayTime:(double)arg1 totalTime:(double)arg2;
- (void)demaciaPlayerDisplayLinkPlayProgress:(double)arg0;
- (void)videoResourceDidRecallInPlayerView:(id)arg0;

@end
