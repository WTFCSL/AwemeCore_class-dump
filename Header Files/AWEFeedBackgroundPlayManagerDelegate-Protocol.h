//
//     Generated by private class-dump
//

@protocol AWEFeedBackgroundPlayManagerDelegate <NSObject>

- (void)backgroundPlay;
- (void)backgroundPause;
- (void)backgroundPlayNextByClick:(BOOL)arg0;
- (void)backgroundPlayAutoNext;
- (id)backgroundCurrentItemID;
- (BOOL)backgroundCanPlayNext;
- (BOOL)backgroundCanPlayPrevious;
- (void)backgroundPlayPrevious;
- (BOOL)backgroundIsPlaying;
- (double)backgroundVideoDuration;
- (double)backgroundCurrentPlaybackTime;
- (void)backgroundPlayerSeekTime:(double)arg0;

@end