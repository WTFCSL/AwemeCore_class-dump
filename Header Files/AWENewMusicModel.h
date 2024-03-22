//
//     Generated by private class-dump
//

@class NSDictionary, AWEMusicNewPermissionModel, AWEMusicNewPreviewInfoModel, AWENewShareModel, AWENewURLModel, NSString, AWEMusicClimaxModel, AWEMusicNewAnchorModel, AWEMusicMatchedPGCSoundModel, AWEMusicNewMatchedSongModel, NSArray, AWECategoryCoverModel, AWEMusicLunaInfoModel, AWEHSVModel, AWEMusicNewImageBeatsModel, AWEKaraokeBaseModel, AWEMusicNewChallengeGuideModel, AWEMusicNewSongModel, AWEBranchBillboardWeeklyModel, NSNumber, AWEMusicDiversionModel;

@interface AWENewMusicModel : AWEBaseDataModel {
    BOOL _isOriginal;
    BOOL _redirect;
    BOOL _isRestricted;
    BOOL _isAuthorDeleted;
    BOOL _isDelVideo;
    BOOL _isVideoSelfSee;
    BOOL _preventDownload;
    BOOL _isOnlyOwnerUse;
    BOOL _isVideoNotRecommend;
    BOOL _isCommerceMusic;
    BOOL _isOriginalSound;
    BOOL _isAllowShoot;
    BOOL _shouldMuteShare;
    BOOL _vcdNotAuth;
    BOOL _dmvAutoShow;
    BOOL _isMusician;
    BOOL _isPGC;
    BOOL _isMatchedMetadata;
    BOOL _isAudioURLWithCookie;
    BOOL _canBackgroundPlay;
    BOOL _isExemptForReply;
    int _source;
    int _startTime;
    int _endTime;
    int _lyricType;
    int _musicStatus;
    long long _uselessModelId;
    NSString *_musicID;
    NSString *_musicName;
    NSString *_authorName;
    NSString *_album;
    AWENewURLModel *_hdURL;
    AWENewURLModel *_largeURL;
    AWENewURLModel *_mediumURL;
    AWENewURLModel *_thumbURL;
    AWENewURLModel *_playURL;
    NSString *_schemaUrl;
    NSNumber *_duration;
    NSString *_extra;
    NSNumber *_userCount;
    long long _collectStat;
    NSNumber *_status;
    NSString *_offlineDesc;
    AWENewURLModel *_effectsDataModel;
    NSString *_ownerId;
    NSString *_ownerNickname;
    NSString *_useCountDesc;
    AWENewURLModel *_audioTrackModel;
    AWENewURLModel *_bodydanceUrlModel;
    NSDictionary *_bodydanceChallenge;
    NSDictionary *_challenge;
    NSNumber *_billboardRank;
    NSString *_mid;
    AWENewURLModel *_bodydanceChallengeIdModel;
    long long _bindedChallengeId;
    NSString *_ownerHandle;
    long long _musicBillboardType;
    AWEBranchBillboardWeeklyModel *_billboardWeeklyInfo;
    AWENewURLModel *_strongBeatURL;
    NSArray *_unshelveCountriesArray;
    long long _preventItemDownloadStatus;
    NSString *_ownerSecUid;
    NSString *_lyricUrl;
    AWENewURLModel *_avatarThumb;
    AWENewURLModel *_avatarMedium;
    AWENewURLModel *_avatarLarge;
    double _previewStartTime;
    double _previewEndTime;
    long long _clusterId;
    NSString *_ownerBanToast;
    NSNumber *_auditionDuration;
    NSNumber *_shootDuration;
    long long _reasonType;
    NSArray *_onboardOwners;
    NSString *_shortLyric;
    NSArray *_musicTags;
    long long _matchedSoundId;
    NSString *_externalExclusiveSongSubtitle;
    AWEMusicMatchedPGCSoundModel *_matchedPgcSoundModel;
    AWEMusicNewMatchedSongModel *_matchedSongModel;
    NSArray *_musicChartRanks;
    AWEMusicClimaxModel *_climax;
    NSNumber *_videoDuration;
    AWEMusicNewAnchorModel *_musicAnchor;
    AWEKaraokeBaseModel *_karaoke;
    long long _pgcMusicType;
    AWEHSVModel *_coverColorHsv;
    NSString *_originalMusicianDisplayName;
    long long _authorStatus;
    NSString *_meta;
    AWEMusicNewPermissionModel *_permissionModel;
    NSDictionary *_searchImpr;
    AWEMusicNewSongModel *_song;
    NSArray *_artistUserInfos;
    long long _collectCount;
    NSDictionary *_audioKtv;
    AWEMusicNewPreviewInfoModel *_previewInfo;
    long long _dspStatus;
    NSArray *_musicianUserInfos;
    AWEMusicLunaInfoModel *_lunaUserInfo;
    AWENewURLModel *_ownerThumbModel;
    AWEMusicNewImageBeatsModel *_musicImageBeats;
    long long _diversionCode;
    AWEMusicDiversionModel *_diversionInfo;
}

@property (readonly, nonatomic) AWECategoryCoverModel *discoverCoverModel;
@property (readonly, copy, nonatomic) NSArray *externalMusicModelArray;
@property (readonly, nonatomic) AWEMusicNewChallengeGuideModel *challengeGuide;
@property (readonly, copy, nonatomic) NSArray *position;
@property (readonly, copy, nonatomic) NSArray *authorPosition;
@property (readonly, copy, nonatomic) NSArray *shortLyricHighlights;
@property (readonly, nonatomic) AWENewShareModel *shareInfo;
@property (nonatomic) long long uselessModelId;
@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSString *musicName;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *album;
@property (retain, nonatomic) AWENewURLModel *hdURL;
@property (retain, nonatomic) AWENewURLModel *largeURL;
@property (retain, nonatomic) AWENewURLModel *mediumURL;
@property (retain, nonatomic) AWENewURLModel *thumbURL;
@property (retain, nonatomic) AWENewURLModel *playURL;
@property (copy, nonatomic) NSString *schemaUrl;
@property (nonatomic) int source;
@property (nonatomic) int startTime;
@property (nonatomic) int endTime;
@property (retain, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) NSNumber *userCount;
@property (nonatomic) long long collectStat;
@property (retain, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSString *offlineDesc;
@property (retain, nonatomic) AWENewURLModel *effectsDataModel;
@property (copy, nonatomic) NSString *ownerId;
@property (copy, nonatomic) NSString *ownerNickname;
@property (copy, nonatomic) NSString *useCountDesc;
@property (retain, nonatomic) AWENewURLModel *audioTrackModel;
@property (retain, nonatomic) AWENewURLModel *bodydanceUrlModel;
@property (copy, nonatomic) NSDictionary *bodydanceChallenge;
@property (nonatomic) BOOL isOriginal;
@property (copy, nonatomic) NSDictionary *challenge;
@property (retain, nonatomic) NSNumber *billboardRank;
@property (copy, nonatomic) NSString *mid;
@property (retain, nonatomic) AWENewURLModel *bodydanceChallengeIdModel;
@property (nonatomic) long long bindedChallengeId;
@property (nonatomic) BOOL redirect;
@property (nonatomic) BOOL isRestricted;
@property (nonatomic) BOOL isAuthorDeleted;
@property (nonatomic) BOOL isDelVideo;
@property (nonatomic) BOOL isVideoSelfSee;
@property (copy, nonatomic) NSString *ownerHandle;
@property (nonatomic) BOOL preventDownload;
@property (nonatomic) long long musicBillboardType;
@property (retain, nonatomic) AWEBranchBillboardWeeklyModel *billboardWeeklyInfo;
@property (nonatomic) BOOL isOnlyOwnerUse;
@property (nonatomic) BOOL isVideoNotRecommend;
@property (retain, nonatomic) AWENewURLModel *strongBeatURL;
@property (copy, nonatomic) NSArray *unshelveCountriesArray;
@property (nonatomic) long long preventItemDownloadStatus;
@property (copy, nonatomic) NSString *ownerSecUid;
@property (nonatomic) int lyricType;
@property (copy, nonatomic) NSString *lyricUrl;
@property (retain, nonatomic) AWENewURLModel *avatarThumb;
@property (retain, nonatomic) AWENewURLModel *avatarMedium;
@property (retain, nonatomic) AWENewURLModel *avatarLarge;
@property (nonatomic) double previewStartTime;
@property (nonatomic) double previewEndTime;
@property (nonatomic) long long clusterId;
@property (nonatomic) BOOL isCommerceMusic;
@property (nonatomic) BOOL isOriginalSound;
@property (copy, nonatomic) NSString *ownerBanToast;
@property (retain, nonatomic) NSNumber *auditionDuration;
@property (retain, nonatomic) NSNumber *shootDuration;
@property (nonatomic) BOOL isAllowShoot;
@property (nonatomic) long long reasonType;
@property (copy, nonatomic) NSArray *onboardOwners;
@property (copy, nonatomic) NSString *shortLyric;
@property (nonatomic) BOOL shouldMuteShare;
@property (nonatomic) BOOL vcdNotAuth;
@property (copy, nonatomic) NSArray *musicTags;
@property (nonatomic) BOOL dmvAutoShow;
@property (nonatomic) BOOL isMusician;
@property (nonatomic) BOOL isPGC;
@property (nonatomic) long long matchedSoundId;
@property (nonatomic) BOOL isMatchedMetadata;
@property (nonatomic) BOOL isAudioURLWithCookie;
@property (copy, nonatomic) NSString *externalExclusiveSongSubtitle;
@property (retain, nonatomic) AWEMusicMatchedPGCSoundModel *matchedPgcSoundModel;
@property (retain, nonatomic) AWEMusicNewMatchedSongModel *matchedSongModel;
@property (copy, nonatomic) NSArray *musicChartRanks;
@property (nonatomic) BOOL canBackgroundPlay;
@property (retain, nonatomic) AWEMusicClimaxModel *climax;
@property (nonatomic) int musicStatus;
@property (retain, nonatomic) NSNumber *videoDuration;
@property (retain, nonatomic) AWEMusicNewAnchorModel *musicAnchor;
@property (retain, nonatomic) AWEKaraokeBaseModel *karaoke;
@property (nonatomic) long long pgcMusicType;
@property (retain, nonatomic) AWEHSVModel *coverColorHsv;
@property (copy, nonatomic) NSString *originalMusicianDisplayName;
@property (nonatomic) long long authorStatus;
@property (copy, nonatomic) NSString *meta;
@property (retain, nonatomic) AWEMusicNewPermissionModel *permissionModel;
@property (copy, nonatomic) NSDictionary *searchImpr;
@property (retain, nonatomic) AWEMusicNewSongModel *song;
@property (copy, nonatomic) NSArray *artistUserInfos;
@property (nonatomic) long long collectCount;
@property (copy, nonatomic) NSDictionary *audioKtv;
@property (retain, nonatomic) AWEMusicNewPreviewInfoModel *previewInfo;
@property (nonatomic) long long dspStatus;
@property (copy, nonatomic) NSArray *musicianUserInfos;
@property (retain, nonatomic) AWEMusicLunaInfoModel *lunaUserInfo;
@property (retain, nonatomic) AWENewURLModel *ownerThumbModel;
@property (retain, nonatomic) AWEMusicNewImageBeatsModel *musicImageBeats;
@property (nonatomic) long long diversionCode;
@property (nonatomic) BOOL isExemptForReply;
@property (retain, nonatomic) AWEMusicDiversionModel *diversionInfo;

+ (id)propertyToOptionsMap;
+ (id)propertyToModelClassInArrayMap;
+ (id)AWENewMusicModel_Discover_JSONKeyPathsByPropertyKey;
+ (id)AWENewMusicModel_Discover_propertyToModelClassInArrayMap;
+ (id)AWENewMusicModel_POI_JSONKeyPathsByPropertyKey;
+ (id)AWENewMusicModel_POI_propertyToModelClassInArrayMap;
+ (id)AWENewMusicModel_UG_JSONKeyPathsByPropertyKey;
+ (id)JSONKeyPathsByPropertyKey;

- (id)avatarThumb;
- (void)setExtra:(id)arg0;
- (id)avatarMedium;
- (id)avatarLarge;
- (long long)musicBillboardType;
- (id)musicID;
- (void)setAvatarThumb:(id)arg0;
- (id)ownerId;
- (id)musicName;
- (id)ownerNickname;
- (id)schemaUrl;
- (void)setCanBackgroundPlay:(BOOL)arg0;
- (void)setIsOriginal:(BOOL)arg0;
- (int)lyricType;
- (void)setLyricType:(int)arg0;
- (id)matchedPgcSoundModel;
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
- (void)setMid:(id)arg0;
- (BOOL)isAudioURLWithCookie;
- (void)setAuditionDuration:(id)arg0;
- (BOOL)vcdNotAuth;
- (long long)collectCount;
- (void)setCollectCount:(long long)arg0;
- (BOOL)preventDownload;
- (void)setPreventDownload:(BOOL)arg0;
- (id)discoverCoverModel;
- (void)setDiscoverCoverModel:(id)arg0;
- (id)billboardRank;
- (void)setBillboardRank:(id)arg0;
- (id)diversionInfo;
- (void)setDiversionInfo:(id)arg0;
- (void)setSchemaUrl:(id)arg0;
- (id)externalExclusiveSongSubtitle;
- (long long)pgcMusicType;
- (id)shootDuration;
- (id)karaoke;
- (id)offlineDesc;
- (id)hdURL;
- (id)largeURL;
- (id)strongBeatURL;
- (void)setExternalMusicModelArray:(id)arg0;
- (void)setMusicBillboardType:(long long)arg0;
- (id)billboardWeeklyInfo;
- (void)setBillboardWeeklyInfo:(id)arg0;
- (void)setAvatarMedium:(id)arg0;
- (BOOL)isAuthorDeleted;
- (void)setIsAuthorDeleted:(BOOL)arg0;
- (long long)collectStat;
- (void)setCollectStat:(long long)arg0;
- (BOOL)isExemptForReply;
- (void)setIsExemptForReply:(BOOL)arg0;
- (void)setOfflineDesc:(id)arg0;
- (void)setOwnerId:(id)arg0;
- (id)ownerSecUid;
- (void)setOwnerSecUid:(id)arg0;
- (void)setOwnerNickname:(id)arg0;
- (id)ownerBanToast;
- (void)setOwnerBanToast:(id)arg0;
- (id)onboardOwners;
- (void)setOnboardOwners:(id)arg0;
- (id)authorPosition;
- (void)setAuthorPosition:(id)arg0;
- (BOOL)isMatchedMetadata;
- (void)setIsMatchedMetadata:(BOOL)arg0;
- (void)setIsAudioURLWithCookie:(BOOL)arg0;
- (BOOL)isMusician;
- (void)setIsMusician:(BOOL)arg0;
- (BOOL)isCommerceMusic;
- (void)setIsCommerceMusic:(BOOL)arg0;
- (BOOL)isOriginalSound;
- (void)setIsOriginalSound:(BOOL)arg0;
- (BOOL)shouldMuteShare;
- (void)setShouldMuteShare:(BOOL)arg0;
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
- (void)setVcdNotAuth:(BOOL)arg0;
- (void)setMusicTags:(id)arg0;
- (id)challengeGuide;
- (void)setChallengeGuide:(id)arg0;
- (id)musicChartRanks;
- (void)setMusicChartRanks:(id)arg0;
- (id)climax;
- (void)setClimax:(id)arg0;
- (id)coverColorHsv;
- (void)setCoverColorHsv:(id)arg0;
- (id)permissionModel;
- (void)setPermissionModel:(id)arg0;
- (id)musicAnchor;
- (void)setMusicAnchor:(id)arg0;
- (void)setKaraoke:(id)arg0;
- (id)audioKtv;
- (void)setAudioKtv:(id)arg0;
- (id)originalMusicianDisplayName;
- (void)setOriginalMusicianDisplayName:(id)arg0;
- (long long)authorStatus;
- (void)setAuthorStatus:(long long)arg0;
- (id)lunaUserInfo;
- (void)setLunaUserInfo:(id)arg0;
- (long long)diversionCode;
- (void)setDiversionCode:(long long)arg0;
- (id)musicImageBeats;
- (void)setMusicImageBeats:(id)arg0;
- (void)setPgcMusicType:(long long)arg0;
- (id)artistUserInfos;
- (void)setArtistUserInfos:(id)arg0;
- (id)musicianUserInfos;
- (void)setMusicianUserInfos:(id)arg0;
- (void)setAvatarLarge:(id)arg0;
- (id)searchImpr;
- (id)useCountDesc;
- (id)bodydanceChallenge;
- (long long)bindedChallengeId;
- (BOOL)isDelVideo;
- (BOOL)isVideoSelfSee;
- (BOOL)isOnlyOwnerUse;
- (BOOL)isVideoNotRecommend;
- (id)unshelveCountriesArray;
- (long long)preventItemDownloadStatus;
- (long long)uselessModelId;
- (void)setUselessModelId:(long long)arg0;
- (void)setMusicName:(id)arg0;
- (void)setHdURL:(id)arg0;
- (void)setLargeURL:(id)arg0;
- (void)setMediumURL:(id)arg0;
- (void)setThumbURL:(id)arg0;
- (id)effectsDataModel;
- (void)setEffectsDataModel:(id)arg0;
- (void)setUseCountDesc:(id)arg0;
- (id)audioTrackModel;
- (void)setAudioTrackModel:(id)arg0;
- (id)bodydanceUrlModel;
- (void)setBodydanceUrlModel:(id)arg0;
- (void)setBodydanceChallenge:(id)arg0;
- (id)bodydanceChallengeIdModel;
- (void)setBodydanceChallengeIdModel:(id)arg0;
- (void)setBindedChallengeId:(long long)arg0;
- (void)setIsDelVideo:(BOOL)arg0;
- (void)setIsVideoSelfSee:(BOOL)arg0;
- (void)setIsOnlyOwnerUse:(BOOL)arg0;
- (void)setIsVideoNotRecommend:(BOOL)arg0;
- (void)setStrongBeatURL:(id)arg0;
- (void)setUnshelveCountriesArray:(id)arg0;
- (void)setPreventItemDownloadStatus:(long long)arg0;
- (void)setShootDuration:(id)arg0;
- (BOOL)isAllowShoot;
- (void)setIsAllowShoot:(BOOL)arg0;
- (long long)matchedSoundId;
- (void)setMatchedSoundId:(long long)arg0;
- (void)setExternalExclusiveSongSubtitle:(id)arg0;
- (void)setMatchedPgcSoundModel:(id)arg0;
- (id)matchedSongModel;
- (void)setMatchedSongModel:(id)arg0;
- (int)musicStatus;
- (void)setMusicStatus:(int)arg0;
- (void)setSearchImpr:(id)arg0;
- (id)ownerThumbModel;
- (void)setOwnerThumbModel:(id)arg0;
- (long long)reasonType;
- (void)setReasonType:(long long)arg0;
- (BOOL)isRestricted;
- (id)album;
- (void)setMeta:(id)arg0;
- (id)meta;
- (void)setStartTime:(int)arg0;
- (int)source;
- (void).cxx_destruct;
- (id)status;
- (id)challenge;
- (id)position;
- (void)setPosition:(id)arg0;
- (id)extra;
- (id)shareInfo;
- (id)duration;
- (void)setChallenge:(id)arg0;
- (int)endTime;
- (void)setShareInfo:(id)arg0;
- (void)setStatus:(id)arg0;
- (int)startTime;
- (void)setSource:(int)arg0;
- (id)videoDuration;
- (void)setEndTime:(int)arg0;
- (void)setDuration:(id)arg0;
- (void)setAlbum:(id)arg0;
- (void)setIsRestricted:(BOOL)arg0;
- (id)authorName;
- (id)userCount;
- (void)setUserCount:(id)arg0;
- (void)setAuthorName:(id)arg0;
- (BOOL)redirect;
- (void)setRedirect:(BOOL)arg0;
- (id)song;
- (void)setSong:(id)arg0;
- (void)setVideoDuration:(id)arg0;
- (id)ownerHandle;
- (void)setOwnerHandle:(id)arg0;
- (long long)clusterId;
- (void)setClusterId:(long long)arg0;
- (long long)dspStatus;
- (void)setDspStatus:(long long)arg0;
- (id)playURL;
- (void)setPlayURL:(id)arg0;
- (BOOL)isOriginal;
- (id)previewInfo;
- (void)setPreviewInfo:(id)arg0;
- (id)mid;

@end
