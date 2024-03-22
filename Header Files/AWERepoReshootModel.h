//
//     Generated by private class-dump
//

@class NSString, NSArray, NSValue, NSData, NSMutableArray;
@protocol ACCPublishRepository;

@interface AWERepoReshootModel : NSObject <AWERepositoryDraftProtocol, ACCRepositoryDraftContextDeprecated, ACCRepoRegister, ACCRepositoryRequestParamsDeprecated, ACCRepositoryContextDeprecated, ACCRepoReshootData, NSCopying> {
    BOOL _isReshoot;
    id<ACCPublishRepository> _repoDeprecated;
    NSString *_fromCreateId;
    NSString *_fromTaskId;
    NSValue *_recordVideoClipRange;
    double _durationBeforeReshoot;
    double _durationAfterReshoot;
    NSArray *_markedTimes;
    NSMutableArray *_fullRangeFragmentInfo;
    NSData *_recordVideoClipRangeJson;
    NSData *_fullRangeFragmentInfoJson;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isReshoot;
@property (retain, nonatomic) NSString *fromCreateId;
@property (retain, nonatomic) NSString *fromTaskId;
@property (retain, nonatomic) NSValue *recordVideoClipRange;
@property (nonatomic) double durationBeforeReshoot;
@property (nonatomic) double durationAfterReshoot;
@property (copy, nonatomic) NSArray *markedTimes;
@property (retain, nonatomic) NSMutableArray *fullRangeFragmentInfo;
@property (retain, nonatomic) NSData *recordVideoClipRangeJson;
@property (retain, nonatomic) NSData *fullRangeFragmentInfoJson;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

+ (id)repo_dataProtocol;

- (BOOL)isReshoot;
- (void)setIsReshoot:(BOOL)arg0;
- (id)initWithDraft:(id)arg0;
- (id)acc_publishRequestParams:(id)arg0;
- (void)saveWithDraft:(id)arg0;
- (id)repoDeprecated;
- (void)draftWillBeSavedWithID:(id)arg0;
- (void)modelDidRetrievedFromDraftWithID:(id)arg0;
- (void)setRepoDeprecated:(id)arg0;
- (id)repoVideoInfo;
- (id)markedTimes;
- (unsigned long long)getStickerSavePhotoCount;
- (BOOL)hasVideoClipEdits;
- (id)recordVideoClipRange;
- (void)removeVideoClipEdits;
- (void)setFromTaskId:(id)arg0;
- (void)setDurationBeforeReshoot:(double)arg0;
- (void)setDurationAfterReshoot:(double)arg0;
- (id)fullRangeFragmentInfo;
- (void)setRecordVideoClipRange:(id)arg0;
- (void)setFullRangeFragmentInfo:(id)arg0;
- (id)fullRangeFragmentInfoJson;
- (void)setFullRangeFragmentInfoJson:(id)arg0;
- (id)recordVideoClipRangeJson;
- (id)fromTaskId;
- (void)setRecordVideoClipRangeJson:(id)arg0;
- (id)fromCreateId;
- (double)durationBeforeReshoot;
- (double)durationAfterReshoot;
- (void)setMarkedTimes:(id)arg0;
- (void)setFromCreateId:(id)arg0;
- (void)p_removeReshootStickerSavePhotos;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;

@end