//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCPublishRepository;

@interface AWERepoLastGroupTrackModel : NSObject <ACCRepoRegister, ACCRepositoryClipContextProtocol, ACCRepositoryTrackContextDeprecated, AWERepositoryDraftProtocol, ACCRepoLastGroupTrackData, ACCRepoLastGroupTrackModelProtocol, ACCRepositoryContextDeprecated, NSCopying, NSCoding> {
    NSString *_fromGroupID;
    NSString *_reviseFromGroupID;
    NSString *_reviseBackFromGroupID;
    NSString *_lastGIDFrom;
    NSString *_lastGroupID;
    long long _originalGidDistance;
    NSString *_originalGroupID;
    NSString *_aiUploadFromGroupId;
    NSString *_aiUploadLastGroupId;
    NSString *_aiUploadFromTemplateId;
    NSString *_aiUploadLastTemplateId;
    NSString *_lastGroupMusicId;
    NSString *_lastGroupPropIds;
    long long _lastGroupAwemeType;
    id<ACCPublishRepository> repoDeprecated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *fromGroupID;
@property (copy, nonatomic) NSString *reviseFromGroupID;
@property (copy, nonatomic) NSString *reviseBackFromGroupID;
@property (copy, nonatomic) NSString *lastGroupID;
@property (copy, nonatomic) NSString *lastGIDFrom;
@property (copy, nonatomic) NSString *originalGroupID;
@property (nonatomic) long long originalGidDistance;
@property (copy, nonatomic) NSString *aiUploadFromGroupId;
@property (copy, nonatomic) NSString *aiUploadLastGroupId;
@property (copy, nonatomic) NSString *aiUploadFromTemplateId;
@property (copy, nonatomic) NSString *aiUploadLastTemplateId;
@property (copy, nonatomic) NSString *lastGroupMusicId;
@property (copy, nonatomic) NSString *lastGroupPropIds;
@property (nonatomic) long long lastGroupAwemeType;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

+ (id)repo_dataProtocol;

- (id)lastGroupMusicId;
- (void)setLastGroupMusicId:(id)arg0;
- (id)lastGroupPropIds;
- (void)setLastGroupPropIds:(id)arg0;
- (long long)lastGroupAwemeType;
- (void)setLastGroupAwemeType:(long long)arg0;
- (id)aiUploadFromGroupId;
- (void)setAiUploadFromGroupId:(id)arg0;
- (id)aiUploadLastGroupId;
- (void)setAiUploadLastGroupId:(id)arg0;
- (id)aiUploadFromTemplateId;
- (void)setAiUploadFromTemplateId:(id)arg0;
- (id)aiUploadLastTemplateId;
- (void)setAiUploadLastTemplateId:(id)arg0;
- (id)initWithDraft:(id)arg0;
- (void)willEnterEditPageFromClipPage:(id)arg0 originalPublishModel:(id)arg1;
- (void)saveWithDraft:(id)arg0;
- (id)acc_publishTrackEventParams:(id)arg0;
- (id)repoDeprecated;
- (void)setRepoDeprecated:(id)arg0;
- (id)acc_referExtraParams;
- (id)fromGroupID;
- (void)setFromGroupID:(id)arg0;
- (id)originalGroupInfo;
- (id)reviseFromGroupID;
- (void)setReviseFromGroupID:(id)arg0;
- (id)reviseBackFromGroupID;
- (void)setReviseBackFromGroupID:(id)arg0;
- (id)lastGroupID;
- (void)setLastGroupID:(id)arg0;
- (id)lastGIDFrom;
- (void)setLastGIDFrom:(id)arg0;
- (long long)originalGidDistance;
- (void)setOriginalGidDistance:(long long)arg0;
- (id)fromGroupIDValue;
- (id)reviseBackFromGroupIDValue;
- (id)lastGroupIDValue;
- (id)lastGIDFromValue;
- (id)originalGroupIDValue;
- (long long)originalGidDistanceValue;
- (id)reviseFromGroupIDValue;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)originalGroupID;
- (void)setOriginalGroupID:(id)arg0;

@end