//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray;

@interface ACCRepoDynamicRecorderInfoModel : NSObject <AWERepositoryDraftProtocol, NSCopying> {
    BOOL _isDynamicRecorder;
    BOOL _showPublishEndPage;
    NSDictionary *_dynamicLynxData;
    NSString *_schemaModeId;
    NSDictionary *_originActivityInfo;
    NSString *_dynamicActivityID;
    NSDictionary *_lynxSchema;
    NSString *_dynamicRecordSchema;
    NSString *_activitySchema;
    long long _dynamicRecordTemplateType;
    long long _dynamicRecordFirstFrameStartTime;
    NSString *_activityAnchorItemId;
    NSArray *_dynamicRecorderMentionedUsers;
    NSArray *_dynamicRecorderHashTags;
    NSString *_poiID;
    NSString *_poiName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *dynamicLynxData;
@property (copy, nonatomic) NSString *schemaModeId;
@property (copy, nonatomic) NSDictionary *originActivityInfo;
@property (copy, nonatomic) NSString *dynamicActivityID;
@property (copy, nonatomic) NSDictionary *lynxSchema;
@property (copy, nonatomic) NSString *dynamicRecordSchema;
@property (copy, nonatomic) NSString *activitySchema;
@property (nonatomic) BOOL isDynamicRecorder;
@property (nonatomic) long long dynamicRecordTemplateType;
@property (nonatomic) long long dynamicRecordFirstFrameStartTime;
@property (copy, nonatomic) NSString *activityAnchorItemId;
@property (copy, nonatomic) NSArray *dynamicRecorderMentionedUsers;
@property (copy, nonatomic) NSArray *dynamicRecorderHashTags;
@property (nonatomic) BOOL showPublishEndPage;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *poiName;

- (id)poiName;
- (id)poiID;
- (id)lynxSchema;
- (BOOL)isDynamicRecorder;
- (void)setIsDynamicRecorder:(BOOL)arg0;
- (void)setPoiName:(id)arg0;
- (void)setPoiID:(id)arg0;
- (void)setLynxSchema:(id)arg0;
- (id)initWithDraft:(id)arg0;
- (id)activitySchema;
- (void)setActivitySchema:(id)arg0;
- (void)saveWithDraft:(id)arg0;
- (id)dynamicRecordSchema;
- (void)setDynamicRecordSchema:(id)arg0;
- (void)setOriginActivityInfo:(id)arg0;
- (void)setDynamicActivityID:(id)arg0;
- (void)setSchemaModeId:(id)arg0;
- (void)setShowPublishEndPage:(BOOL)arg0;
- (void)setDynamicLynxData:(id)arg0;
- (void)setDynamicRecorderHashTags:(id)arg0;
- (void)setDynamicRecorderMentionedUsers:(id)arg0;
- (void)setDynamicRecordFirstFrameStartTime:(long long)arg0;
- (void)setDynamicRecordTemplateType:(long long)arg0;
- (id)dynamicRecorderHashTags;
- (BOOL)showPublishEndPage;
- (id)dynamicActivityID;
- (void)setActivityAnchorItemId:(id)arg0;
- (id)dynamicLynxData;
- (id)schemaModeId;
- (id)originActivityInfo;
- (id)activityAnchorItemId;
- (id)dynamicRecorderMentionedUsers;
- (long long)dynamicRecordTemplateType;
- (long long)dynamicRecordFirstFrameStartTime;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;

@end
