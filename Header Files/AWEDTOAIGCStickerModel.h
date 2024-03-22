//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDTOAIGCStickerModel : MTLModel <MTLJSONSerializing> {
    NSString *_taskId;
    long long _taskStatus;
    NSString *_draftId;
    NSString *_srcPath;
    NSString *_coverPath;
    long long _errorCode;
    NSString *_errorMsg;
    NSString *_propSelectedFrom;
    long long _createdTime;
    NSString *_stickerId;
    NSString *_finalGenerator;
    NSString *_effectName;
}

@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) long long taskStatus;
@property (copy, nonatomic) NSString *draftId;
@property (copy, nonatomic) NSString *srcPath;
@property (copy, nonatomic) NSString *coverPath;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSString *propSelectedFrom;
@property (nonatomic) long long createdTime;
@property (copy, nonatomic) NSString *stickerId;
@property (copy, nonatomic) NSString *finalGenerator;
@property (copy, nonatomic) NSString *effectName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setErrorMsg:(id)arg0;
- (void)setStickerId:(id)arg0;
- (id)errorMsg;
- (void)setTaskStatus:(long long)arg0;
- (id)draftId;
- (void)setDraftId:(id)arg0;
- (id)srcPath;
- (void)setSrcPath:(id)arg0;
- (id)coverPath;
- (void)setCoverPath:(id)arg0;
- (id)propSelectedFrom;
- (void)setPropSelectedFrom:(id)arg0;
- (id)finalGenerator;
- (void)setFinalGenerator:(id)arg0;
- (id)stickerId;
- (void).cxx_destruct;
- (void)setErrorCode:(long long)arg0;
- (long long)errorCode;
- (long long)createdTime;
- (void)setCreatedTime:(long long)arg0;
- (id)taskId;
- (id)effectName;
- (void)setEffectName:(id)arg0;
- (void)setTaskId:(id)arg0;
- (long long)taskStatus;

@end
