//
//     Generated by private class-dump
//

@class AWEPublishVideoSyncContentViewItem, NSString;
@protocol ACCPublishRepository;

@interface AWEPublishVideoSyncDataModel : NSObject <ACCRepositoryContextDeprecated, ACCRepositoryRequestParamsDeprecated, AWERepositoryDraftProtocol> {
    BOOL _hasClaimOriginPermission;
    BOOL _isVideoExclusive;
    BOOL _hasRewardProjectAuthorBenefit;
    BOOL _isOpenSync;
    BOOL _isOpenOrigin;
    BOOL _isOpenVideoExclusive;
    BOOL _isLongVideo;
    BOOL _hasUploadParamsCache;
    BOOL _hasChangeVideoSync;
    id<ACCPublishRepository> repoDeprecated;
    unsigned long long _mediumVideoPlanUserStatus;
    long long _videoType;
    double _videoDuration;
    NSString *_creationID;
    NSString *_shootWay;
    NSString *_enterFrom;
    AWEPublishVideoSyncContentViewItem *_ulikeItem;
    AWEPublishVideoSyncContentViewItem *_syncItem;
    AWEPublishVideoSyncContentViewItem *_originItem;
    AWEPublishVideoSyncContentViewItem *_exclusiveItem;
    AWEPublishVideoSyncContentViewItem *_autoSyncItem;
}

@property (retain, nonatomic) AWEPublishVideoSyncContentViewItem *ulikeItem;
@property (retain, nonatomic) AWEPublishVideoSyncContentViewItem *syncItem;
@property (retain, nonatomic) AWEPublishVideoSyncContentViewItem *originItem;
@property (retain, nonatomic) AWEPublishVideoSyncContentViewItem *exclusiveItem;
@property (retain, nonatomic) AWEPublishVideoSyncContentViewItem *autoSyncItem;
@property (nonatomic) unsigned long long mediumVideoPlanUserStatus;
@property (nonatomic) BOOL hasClaimOriginPermission;
@property (nonatomic) BOOL isVideoExclusive;
@property (nonatomic) BOOL hasRewardProjectAuthorBenefit;
@property (nonatomic) BOOL isOpenSync;
@property (nonatomic) BOOL isOpenOrigin;
@property (nonatomic) BOOL isOpenVideoExclusive;
@property (nonatomic) long long videoType;
@property (nonatomic) BOOL isLongVideo;
@property (nonatomic) double videoDuration;
@property (nonatomic) BOOL hasUploadParamsCache;
@property (nonatomic) BOOL hasChangeVideoSync;
@property (copy, nonatomic) NSString *creationID;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)publishRequestSyncParamKeys;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setShootWay:(id)arg0;
- (id)originItem;
- (id)shootWay;
- (BOOL)isLandScape;
- (id)initWithDraft:(id)arg0;
- (BOOL)isLongVideo;
- (void)setIsLongVideo:(BOOL)arg0;
- (void)setOriginItem:(id)arg0;
- (id)creationID;
- (void)setCreationID:(id)arg0;
- (id)acc_publishRequestParams:(id)arg0;
- (void)saveWithDraft:(id)arg0;
- (id)repoDeprecated;
- (void)setRepoDeprecated:(id)arg0;
- (void)setIsOpenSync:(BOOL)arg0;
- (void)updateSyncVideoStatusSilent:(BOOL)arg0;
- (BOOL)hasChangeVideoSync;
- (BOOL)isOpenSync;
- (void)setHasUploadParamsCache:(BOOL)arg0;
- (unsigned long long)mediumVideoPlanUserStatus;
- (void)setMediumVideoPlanUserStatus:(unsigned long long)arg0;
- (BOOL)hasClaimOriginPermission;
- (void)setHasClaimOriginPermission:(BOOL)arg0;
- (BOOL)isVideoExclusive;
- (void)setIsVideoExclusive:(BOOL)arg0;
- (BOOL)hasRewardProjectAuthorBenefit;
- (void)setHasRewardProjectAuthorBenefit:(BOOL)arg0;
- (void)resetSwitchOpenStatusIfNeeded;
- (BOOL)isOpenOrigin;
- (id)trackValueForExclusiveStatus;
- (BOOL)hasUploadParamsCache;
- (BOOL)isOpenVideoExclusive;
- (id)videoSyncItemStatusText;
- (id)videoSyncContentViewItems;
- (id)trackInfoDicWith:(id)arg0;
- (void)setIsOpenOrigin:(BOOL)arg0;
- (void)setIsOpenVideoExclusive:(BOOL)arg0;
- (void)setHasChangeVideoSync:(BOOL)arg0;
- (id)autoSyncItem;
- (id)ulikeItem;
- (id)syncItem;
- (id)exclusiveItem;
- (void)setUlikeItem:(id)arg0;
- (void)setSyncItem:(id)arg0;
- (void)setExclusiveItem:(id)arg0;
- (void)setAutoSyncItem:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (long long)videoType;
- (double)videoDuration;
- (void)setVideoDuration:(double)arg0;
- (void)setVideoType:(long long)arg0;

@end