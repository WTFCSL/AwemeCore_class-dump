//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSURL, NSArray, NSNumber, ACCMusicRecommendModel;
@protocol ACCMusicSongModelProtocol, ACCMusicMatchedSongModelProtocol, ACCMusicClimaxModelProtocol, ACCMusicExtraModelProtocol, ACCChallengeModelProtocol;

@protocol ACCMusicModelProtocol <NSCoding, MTLJSONSerializing>

@property (copy, nonatomic) NSString *musicID;
@property (retain, nonatomic) NSURL *localURL;
@property (retain, nonatomic) NSURL *loaclAssetUrl;
@property (retain, nonatomic) NSURL *originLocalAssetUrl;
@property (retain, nonatomic) NSURL *localStrongBeatURL;
@property (nonatomic) BOOL isExemptForReply;
@property (nonatomic) double previewStartTime;
@property (nonatomic) double previewEndTime;
@property (copy, nonatomic) NSString *lyricUrl;
@property (copy, nonatomic) NSString *shortLyric;
@property (nonatomic) unsigned long long lyricType;
@property (copy, nonatomic) NSString *musicSelectedFrom;
@property (copy, nonatomic) NSString *awe_selectPageName;
@property (nonatomic) BOOL isPGC;
@property (nonatomic) BOOL isFavorite;
@property (nonatomic) BOOL preventDownload;
@property (nonatomic) BOOL isOriginal;
@property (nonatomic) BOOL isCommerceMusic;
@property (nonatomic) BOOL isOriginalSound;
@property (nonatomic) BOOL isFromImportVideo;
@property (nonatomic) BOOL isDownloading;
@property (nonatomic) BOOL didUsePlayerCache;
@property (nonatomic) BOOL showRecommendLabel;
@property (nonatomic) BOOL canBackgroundPlay;
@property (copy, nonatomic) NSDictionary *lunaColor;
@property (copy, nonatomic) NSString *ownerNickname;
@property (nonatomic) BOOL dmvAutoShow;
@property (copy, nonatomic) NSString *categoryId;
@property (retain, nonatomic) id<ACCMusicClimaxModelProtocol> climax;
@property (retain, nonatomic) id<ACCMusicSongModelProtocol> song;
@property (retain, nonatomic) id<ACCMusicMatchedSongModelProtocol> matchedSong;
@property (retain, nonatomic) id<ACCChallengeModelProtocol> challenge;
@property (retain, nonatomic) id<ACCMusicExtraModelProtocol> extraModel;
@property (copy, nonatomic) NSArray *externalMusicModelArray;
@property (copy, nonatomic) NSArray *musicTags;
@property (copy, nonatomic) NSArray *shortLyricHighlights;
@property (retain, nonatomic) NSNumber *collectStat;
@property (retain, nonatomic) NSNumber *userCount;
@property (copy, nonatomic) NSString *matchedPGCMixedAuthor;
@property (retain, nonatomic) NSNumber *videoDuration;
@property (retain, nonatomic) ACCMusicRecommendModel *recommendInfo;
@property (nonatomic) BOOL isFromiTunes;
@property (nonatomic) BOOL isLocalScannedMedia;

- (id)extraModel;
- (void)setExtraModel:(id)arg0;
- (id)musicID;
- (BOOL)isOffLine;
- (id)musicName;
- (id)ownerNickname;
- (id)lunaColor;
- (void)setCanBackgroundPlay:(BOOL)arg0;
- (void)setIsOriginal:(BOOL)arg0;
- (unsigned long long)lyricType;
- (void)setLyricType:(unsigned long long)arg0;
- (id)musicTags;
- (id)mediumURL;
- (id)thumbURL;
- (id)externalMusicModelArray;
- (BOOL)isPGC;
- (id)auditionDuration;
- (BOOL)canBackgroundPlay;
- (void)setMusicID:(id)arg0;
- (double)previewStartTime;
- (void)setPreviewStartTime:(double)arg0;
- (BOOL)preventDownload;
- (void)setPreventDownload:(BOOL)arg0;
- (id)recommendInfo;
- (void)setRecommendInfo:(id)arg0;
- (void)setLunaColor:(id)arg0;
- (id)awe_matchedPGCMusicInfoStringWithPrefix;
- (id)musicSelectedFrom;
- (id)awe_selectPageName;
- (void)setMusicSelectedFrom:(id)arg0;
- (void)setAwe_selectPageName:(id)arg0;
- (id)originLocalAssetUrl;
- (void)setOriginLocalAssetUrl:(id)arg0;
- (id)localStrongBeatURL;
- (void)setLocalStrongBeatURL:(id)arg0;
- (id)shootDuration;
- (id)offlineDesc;
- (id)hdURL;
- (id)largeURL;
- (id)strongBeatURL;
- (void)setExternalMusicModelArray:(id)arg0;
- (id)loaclAssetUrl;
- (void)setLoaclAssetUrl:(id)arg0;
- (id)collectStat;
- (void)setCollectStat:(id)arg0;
- (BOOL)isExemptForReply;
- (void)setIsExemptForReply:(BOOL)arg0;
- (void)setOwnerNickname:(id)arg0;
- (BOOL)isFromImportVideo;
- (void)setIsFromImportVideo:(BOOL)arg0;
- (id)matchedPGCMixedAuthor;
- (void)setMatchedPGCMixedAuthor:(id)arg0;
- (BOOL)isCommerceMusic;
- (void)setIsCommerceMusic:(BOOL)arg0;
- (BOOL)isOriginalSound;
- (void)setIsOriginalSound:(BOOL)arg0;
- (id)lyricUrl;
- (void)setLyricUrl:(id)arg0;
- (double)previewEndTime;
- (void)setPreviewEndTime:(double)arg0;
- (id)shortLyric;
- (void)setShortLyric:(id)arg0;
- (id)shortLyricHighlights;
- (void)setShortLyricHighlights:(id)arg0;
- (BOOL)dmvAutoShow;
- (void)setDmvAutoShow:(BOOL)arg0;
- (void)setIsPGC:(BOOL)arg0;
- (void)setMusicTags:(id)arg0;
- (id)matchedSong;
- (void)setMatchedSong:(id)arg0;
- (id)climax;
- (void)setClimax:(id)arg0;
- (BOOL)didUsePlayerCache;
- (void)setDidUsePlayerCache:(BOOL)arg0;
- (BOOL)showRecommendLabel;
- (void)setShowRecommendLabel:(BOOL)arg0;
- (BOOL)isDownloading;
- (id)copy;
- (id)challenge;
- (id)duration;
- (void)setChallenge:(id)arg0;
- (void)setIsDownloading:(BOOL)arg0;
- (BOOL)isFavorite;
- (id)videoDuration;
- (id)authorName;
- (id)categoryId;
- (void)setIsFavorite:(BOOL)arg0;
- (id)userCount;
- (void)setUserCount:(id)arg0;
- (id)localURL;
- (void)setLocalURL:(id)arg0;
- (id)song;
- (void)setSong:(id)arg0;
- (void)setVideoDuration:(id)arg0;
- (id)playURL;
- (void)setCategoryId:(id)arg0;
- (BOOL)isOriginal;

@optional

- (BOOL)isLocalScannedMedia;
- (BOOL)isFromiTunes;
- (void)setIsFromiTunes:(BOOL)arg0;
- (void)setIsLocalScannedMedia:(BOOL)arg0;
- (id)awe_matchedPGCMusicStringWithSimplifyPrefix;
- (id)awe_matchedPGCMusicStringWithSimplifyPrefixForSpecificScene;

@end
