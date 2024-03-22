//
//     Generated by private class-dump
//

@class MusicAnchorStructV2, NSString, CategoryCoverStructV2, UrlStructV2, SongStructV2, MusicImageBeatsStructV2, ChallengeStructV2, NSMutableArray, MatchedPGCSoundStructV2, ShareStructV2, MatchedSongStructV2, BranchBillboardWeeklyStructV2;

@interface MusicStructV2 : GPBMessage

@property (nonatomic) long long id_p;
@property (nonatomic) BOOL hasId_p;
@property (copy, nonatomic) NSString *idStr;
@property (nonatomic) BOOL hasIdStr;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasTitle;
@property (copy, nonatomic) NSString *author;
@property (nonatomic) BOOL hasAuthor;
@property (copy, nonatomic) NSString *album;
@property (nonatomic) BOOL hasAlbum;
@property (retain, nonatomic) UrlStructV2 *coverHd;
@property (nonatomic) BOOL hasCoverHd;
@property (retain, nonatomic) UrlStructV2 *coverLarge;
@property (nonatomic) BOOL hasCoverLarge;
@property (retain, nonatomic) UrlStructV2 *coverMedium;
@property (nonatomic) BOOL hasCoverMedium;
@property (retain, nonatomic) UrlStructV2 *coverThumb;
@property (nonatomic) BOOL hasCoverThumb;
@property (retain, nonatomic) UrlStructV2 *playURL;
@property (nonatomic) BOOL hasPlayURL;
@property (copy, nonatomic) NSString *schemaURL;
@property (nonatomic) BOOL hasSchemaURL;
@property (nonatomic) int sourcePlatform;
@property (nonatomic) BOOL hasSourcePlatform;
@property (nonatomic) int startTime;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) int endTime;
@property (nonatomic) BOOL hasEndTime;
@property (nonatomic) int duration;
@property (nonatomic) BOOL hasDuration;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;
@property (nonatomic) int userCount;
@property (nonatomic) BOOL hasUserCount;
@property (retain, nonatomic) NSMutableArray *positionArray;
@property (readonly, nonatomic) unsigned long long positionArray_Count;
@property (retain, nonatomic) ShareStructV2 *shareInfo;
@property (nonatomic) BOOL hasShareInfo;
@property (nonatomic) int collectStat;
@property (nonatomic) BOOL hasCollectStat;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (copy, nonatomic) NSString *offlineDesc;
@property (nonatomic) BOOL hasOfflineDesc;
@property (retain, nonatomic) UrlStructV2 *effectsData;
@property (nonatomic) BOOL hasEffectsData;
@property (copy, nonatomic) NSString *ownerId;
@property (nonatomic) BOOL hasOwnerId;
@property (copy, nonatomic) NSString *ownerNickname;
@property (nonatomic) BOOL hasOwnerNickname;
@property (copy, nonatomic) NSString *useCountDesc;
@property (nonatomic) BOOL hasUseCountDesc;
@property (retain, nonatomic) UrlStructV2 *audioTrack;
@property (nonatomic) BOOL hasAudioTrack;
@property (retain, nonatomic) UrlStructV2 *bodydanceURL;
@property (nonatomic) BOOL hasBodydanceURL;
@property (retain, nonatomic) ChallengeStructV2 *bodydanceChallenge;
@property (nonatomic) BOOL hasBodydanceChallenge;
@property (nonatomic) BOOL isOriginal;
@property (nonatomic) BOOL hasIsOriginal;
@property (retain, nonatomic) ChallengeStructV2 *challenge;
@property (nonatomic) BOOL hasChallenge;
@property (nonatomic) int billboardRank;
@property (nonatomic) BOOL hasBillboardRank;
@property (copy, nonatomic) NSString *mid;
@property (nonatomic) BOOL hasMid;
@property (retain, nonatomic) UrlStructV2 *bodydanceChallengeId;
@property (nonatomic) BOOL hasBodydanceChallengeId;
@property (nonatomic) long long bindedChallengeId;
@property (nonatomic) BOOL hasBindedChallengeId;
@property (nonatomic) BOOL redirect;
@property (nonatomic) BOOL hasRedirect;
@property (nonatomic) BOOL isRestricted;
@property (nonatomic) BOOL hasIsRestricted;
@property (nonatomic) BOOL authorDeleted;
@property (nonatomic) BOOL hasAuthorDeleted;
@property (nonatomic) BOOL isDelVideo;
@property (nonatomic) BOOL hasIsDelVideo;
@property (nonatomic) BOOL isVideoSelfSee;
@property (nonatomic) BOOL hasIsVideoSelfSee;
@property (copy, nonatomic) NSString *ownerHandle;
@property (nonatomic) BOOL hasOwnerHandle;
@property (retain, nonatomic) NSMutableArray *authorPositionArray;
@property (readonly, nonatomic) unsigned long long authorPositionArray_Count;
@property (nonatomic) BOOL preventDownload;
@property (nonatomic) BOOL hasPreventDownload;
@property (nonatomic) int musicBillboardType;
@property (nonatomic) BOOL hasMusicBillboardType;
@property (retain, nonatomic) BranchBillboardWeeklyStructV2 *musicBillboardWeeklyInfo;
@property (nonatomic) BOOL hasMusicBillboardWeeklyInfo;
@property (retain, nonatomic) CategoryCoverStructV2 *categoryCoverInfo;
@property (nonatomic) BOOL hasCategoryCoverInfo;
@property (nonatomic) BOOL isOnlyOwnerUse;
@property (nonatomic) BOOL hasIsOnlyOwnerUse;
@property (nonatomic) BOOL isVideoNotRecommend;
@property (nonatomic) BOOL hasIsVideoNotRecommend;
@property (retain, nonatomic) UrlStructV2 *strongBeatURL;
@property (nonatomic) BOOL hasStrongBeatURL;
@property (retain, nonatomic) NSMutableArray *unshelveCountriesArray;
@property (readonly, nonatomic) unsigned long long unshelveCountriesArray_Count;
@property (nonatomic) int preventItemDownloadStatus;
@property (nonatomic) BOOL hasPreventItemDownloadStatus;
@property (retain, nonatomic) NSMutableArray *externalSongInfoArray;
@property (readonly, nonatomic) unsigned long long externalSongInfoArray_Count;
@property (copy, nonatomic) NSString *secUid;
@property (nonatomic) BOOL hasSecUid;
@property (nonatomic) int lyricType;
@property (nonatomic) BOOL hasLyricType;
@property (copy, nonatomic) NSString *lyricURL;
@property (nonatomic) BOOL hasLyricURL;
@property (retain, nonatomic) UrlStructV2 *avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (retain, nonatomic) UrlStructV2 *avatarMedium;
@property (nonatomic) BOOL hasAvatarMedium;
@property (retain, nonatomic) UrlStructV2 *avatarLarge;
@property (nonatomic) BOOL hasAvatarLarge;
@property (nonatomic) double previewStartTime;
@property (nonatomic) BOOL hasPreviewStartTime;
@property (nonatomic) double previewEndTime;
@property (nonatomic) BOOL hasPreviewEndTime;
@property (nonatomic) long long clusterId;
@property (nonatomic) BOOL hasClusterId;
@property (nonatomic) BOOL muteShare;
@property (nonatomic) BOOL hasMuteShare;
@property (nonatomic) BOOL isAuthorArtist;
@property (nonatomic) BOOL hasIsAuthorArtist;
@property (nonatomic) BOOL isPgc;
@property (nonatomic) BOOL hasIsPgc;
@property (retain, nonatomic) MatchedPGCSoundStructV2 *matchedPgcSound;
@property (nonatomic) BOOL hasMatchedPgcSound;
@property (retain, nonatomic) MatchedSongStructV2 *matchedSong;
@property (nonatomic) BOOL hasMatchedSong;
@property (retain, nonatomic) MusicAnchorStructV2 *musicAnchor;
@property (nonatomic) BOOL hasMusicAnchor;
@property (nonatomic) int auditionDuration;
@property (nonatomic) BOOL hasAuditionDuration;
@property (nonatomic) int shootDuration;
@property (nonatomic) BOOL hasShootDuration;
@property (nonatomic) int videoDuration;
@property (nonatomic) BOOL hasVideoDuration;
@property (retain, nonatomic) SongStructV2 *song;
@property (nonatomic) BOOL hasSong;
@property (retain, nonatomic) NSMutableArray *artistUserInfosArray;
@property (readonly, nonatomic) unsigned long long artistUserInfosArray_Count;
@property (copy, nonatomic) NSString *musicTitle;
@property (nonatomic) BOOL hasMusicTitle;
@property (retain, nonatomic) MusicImageBeatsStructV2 *musicImageBeats;
@property (nonatomic) BOOL hasMusicImageBeats;
@property (nonatomic) BOOL isExemptForReply;
@property (nonatomic) BOOL hasIsExemptForReply;

+ (id)descriptor;

- (id)musicImageBeats;
- (BOOL)isExemptForReply;
- (id)song;
- (id)matchedSong;
- (id)matchedPgcSound;
- (id)strongBeatURL;
- (int)videoDuration;
- (int)shootDuration;
- (int)auditionDuration;
- (BOOL)isPgc;
- (BOOL)isAuthorArtist;
- (BOOL)muteShare;
- (double)previewEndTime;
- (double)previewStartTime;
- (id)avatarLarge;
- (id)avatarMedium;
- (id)avatarThumb;
- (id)secUid;
- (int)preventItemDownloadStatus;
- (BOOL)preventDownload;
- (id)ownerHandle;
- (BOOL)isVideoSelfSee;
- (BOOL)isDelVideo;
- (BOOL)authorDeleted;
- (BOOL)isRestricted;
- (BOOL)redirect;
- (long long)bindedChallengeId;
- (id)mid;
- (BOOL)isOriginal;
- (id)ownerNickname;
- (id)ownerId;
- (id)offlineDesc;
- (int)status;
- (int)collectStat;
- (int)userCount;
- (id)extra;
- (int)duration;
- (int)endTime;
- (int)startTime;
- (int)sourcePlatform;
- (id)schemaURL;
- (id)playURL;
- (id)coverThumb;
- (id)coverMedium;
- (id)coverLarge;
- (id)coverHd;
- (id)album;
- (id)author;
- (id)title;
- (id)idStr;
- (long long)id_p;

@end