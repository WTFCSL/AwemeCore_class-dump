//
//     Generated by private class-dump
//

@class AWEVideoDraftPrivacyExtraModel, NSString, AWERepoAuthorityContext, NSNumber, AWEVideoDraftExclusionModel;
@protocol ACCPublishRepository;

@interface AWERepoAuthorityModel : NSObject <AWERepositoryDraftProtocol, ACCRepositoryDraftContextDeprecated, ACCRepositoryReeditContextProtocol, ACCRepositoryCompareProtocol, ACCRepositoryContextDeprecated, ACCRepositoryTrackContextDeprecated, ACCRepositoryRequestParamsDeprecated> {
    BOOL _shouldShowGrant;
    BOOL _isXiguaStarAtlasVideo;
    id<ACCPublishRepository> repoDeprecated;
    long long _itemComment;
    long long _itemDanmaku;
    long long _itemDownload;
    NSNumber *_itemDuet;
    NSNumber *_itemReact;
    AWEVideoDraftExclusionModel *_exclusionModel;
    AWEVideoDraftPrivacyExtraModel *_privacyExtraModel;
    NSNumber *_downloadType;
    NSNumber *_itemShare;
    AWERepoAuthorityContext *_authorityContext;
    unsigned long long _privacyType;
    long long _xiguaPrivacyType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long privacyType;
@property (nonatomic) long long itemComment;
@property (nonatomic) long long itemDanmaku;
@property (nonatomic) long long itemDownload;
@property (retain, nonatomic) NSNumber *itemDuet;
@property (retain, nonatomic) NSNumber *itemReact;
@property (readonly, nonatomic) BOOL isPrivate;
@property (readonly, nonatomic) BOOL isOnlyPrivate;
@property (readonly, nonatomic) BOOL isCloseFriends;
@property (readonly, nonatomic) BOOL isPartOfVisible;
@property (retain, nonatomic) AWEVideoDraftExclusionModel *exclusionModel;
@property (retain, nonatomic) AWEVideoDraftPrivacyExtraModel *privacyExtraModel;
@property (nonatomic) BOOL shouldShowGrant;
@property (retain, nonatomic) NSNumber *downloadType;
@property (retain, nonatomic) NSNumber *itemShare;
@property (retain, nonatomic) AWERepoAuthorityContext *authorityContext;
@property (nonatomic) long long xiguaPrivacyType;
@property (nonatomic) BOOL isXiguaStarAtlasVideo;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descWithPrivacyType:(unsigned long long)arg0;
+ (id)privacyTraceMap;

- (unsigned long long)privacyType;
- (void)setItemDuet:(id)arg0;
- (long long)itemComment;
- (void)setItemComment:(long long)arg0;
- (long long)itemDownload;
- (void)setItemDownload:(long long)arg0;
- (id)itemDuet;
- (id)itemReact;
- (void)setItemReact:(id)arg0;
- (id)itemShare;
- (void)setItemShare:(id)arg0;
- (long long)itemDanmaku;
- (void)setItemDanmaku:(long long)arg0;
- (id)initWithDraft:(id)arg0;
- (BOOL)isPartOfVisible;
- (BOOL)isCloseFriends;
- (void)setPrivacyType:(unsigned long long)arg0;
- (long long)xiguaPrivacyType;
- (void)setXiguaPrivacyType:(long long)arg0;
- (BOOL)isXiguaStarAtlasVideo;
- (void)setIsXiguaStarAtlasVideo:(BOOL)arg0;
- (id)acc_publishRequestParams:(id)arg0;
- (void)saveWithDraft:(id)arg0;
- (id)acc_publishTrackEventParams:(id)arg0;
- (id)repoDeprecated;
- (void)draftWillBeSavedWithID:(id)arg0;
- (void)modelDidRetrievedFromDraftWithID:(id)arg0;
- (void)setRepoDeprecated:(id)arg0;
- (void)updateFromAweme:(id)arg0;
- (BOOL)isOnlyPrivate;
- (id)privacyExtraModel;
- (id)exclusionModel;
- (void)setExclusionModel:(id)arg0;
- (void)setPrivacyExtraModel:(id)arg0;
- (void)updatePrivacyType:(unsigned long long)arg0 identifier:(id)arg1;
- (id)authorityContext;
- (id)commentPermissionTextDictEnglish;
- (BOOL)isModifiedComparesToModel:(id)arg0;
- (id)isModifiedTrackInfoComparesToModel:(id)arg0;
- (long long)defaultXiguaPrivacyTypeWithIsPrivateAccount:(BOOL)arg0;
- (void)setShouldShowGrant:(BOOL)arg0;
- (void)setAuthorityContext:(id)arg0;
- (BOOL)shouldShowGrant;
- (id)customEidtStatusCompareParams:(id)arg0 scene:(long long)arg1;
- (BOOL)isPrivate;
- (id)downloadType;
- (void).cxx_destruct;
- (void)setDownloadType:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (BOOL)isEqualToObject:(id)arg0;

@end
