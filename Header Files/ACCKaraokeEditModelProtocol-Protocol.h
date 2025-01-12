//
//     Generated by private class-dump
//

@class NSArray, NSString;

@protocol ACCKaraokeEditModelProtocol <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *originalSongTimeList;
@property (copy, nonatomic) NSArray *accompanyTimeList;
@property (nonatomic) double vocalVolume;
@property (nonatomic) double bgmVolume;
@property (nonatomic) double vocalAlign;
@property (nonatomic) BOOL useRecommendVolume;
@property (nonatomic) BOOL useOriginalSong;
@property (nonatomic) BOOL useAudioTuning;
@property (nonatomic) unsigned long long accompanyIndex;
@property (nonatomic) unsigned long long originalSongIndex;
@property (nonatomic) unsigned long long audioTuningIndex;
@property (copy, nonatomic) NSString *lyricStyleId;
@property (copy, nonatomic) NSString *lyricInfoStyleId;
@property (copy, nonatomic) NSString *lyricFontId;
@property (copy, nonatomic) NSString *soundEffectId;
@property (copy, nonatomic) NSString *audioBGVideoId;
@property (copy, nonatomic) NSString *preloadVideoBGID;
@property (copy, nonatomic) NSArray *audioBGImages;
@property (copy, nonatomic) NSString *audioBGImagesPickerId;
@property (copy, nonatomic) NSArray *audioBGAssetModels;

- (void)setBgmVolume:(double)arg0;
- (double)bgmVolume;
- (id)preloadVideoBGID;
- (void)setAudioBGVideoId:(id)arg0;
- (void)setAudioBGImages:(id)arg0;
- (void)setUseRecommendVolume:(BOOL)arg0;
- (void)setVocalVolume:(double)arg0;
- (void)setVocalAlign:(double)arg0;
- (double)vocalVolume;
- (double)vocalAlign;
- (BOOL)useRecommendVolume;
- (BOOL)useOriginalSong;
- (id)originalSongTimeList;
- (id)audioBGImages;
- (void)setLyricStyleId:(id)arg0;
- (void)setLyricInfoStyleId:(id)arg0;
- (void)setLyricFontId:(id)arg0;
- (void)setAudioBGAssetModels:(id)arg0;
- (void)setUseOriginalSong:(BOOL)arg0;
- (void)setUseAudioTuning:(BOOL)arg0;
- (void)setSoundEffectId:(id)arg0;
- (void)setAccompanyIndex:(unsigned long long)arg0;
- (void)setOriginalSongIndex:(unsigned long long)arg0;
- (void)setAudioTuningIndex:(unsigned long long)arg0;
- (void)setOriginalSongTimeList:(id)arg0;
- (id)accompanyTimeList;
- (void)setAccompanyTimeList:(id)arg0;
- (BOOL)useAudioTuning;
- (unsigned long long)accompanyIndex;
- (unsigned long long)originalSongIndex;
- (unsigned long long)audioTuningIndex;
- (id)lyricStyleId;
- (id)lyricInfoStyleId;
- (id)lyricFontId;
- (id)soundEffectId;
- (id)audioBGVideoId;
- (void)setPreloadVideoBGID:(id)arg0;
- (id)audioBGImagesPickerId;
- (void)setAudioBGImagesPickerId:(id)arg0;
- (id)audioBGAssetModels;
- (void)reset;

@end
