//
//     Generated by private class-dump
//

@interface ACCMusicTrimAudioWaveUIConfig : NSObject

+ (double)musicTrimPanelHeight;
+ (double)imageTrimHandlerHorizontalGap;
+ (double)selectedAudioWaveViewHeight;
+ (double)maximumAudioPointHeight;
+ (double)calculateSelectedAudioWaveViewMaximumWidthForImageAlbum;
+ (double)audioWaveViewLeftGapForImageAlbum;
+ (double)audioPointGap;
+ (double)audioPointWidth;
+ (id)convertFromNormalizationAudioWavePointsToRealAudioWavePoints:(id)arg0;
+ (double)minimumAudioPointHeight;
+ (double)videoTrimHandlerHorizontalGap;
+ (double)videoTrimBoundingWidth;
+ (id)configAudioWavePointsWithAudioURL:(id)arg0 duration:(double)arg1 audioPointsCount:(long long)arg2 isDefault:(BOOL *)arg3;
+ (void)configAudioWavePointsAsyncWithAudioURL:(id)arg0 duration:(double)arg1 audioPointsCount:(long long)arg2 callback:(id /* block */)arg3;
+ (id)defaultAudioPointsArrayWithAudioPointsCount:(long long)arg0;
+ (double)calculateSelectedAudioWaveViewMaximumWidthForVideo;
+ (double)audioWaveViewLeftGapForVideo;
+ (double)audioWaveAndHandlerLeftGap;

@end
