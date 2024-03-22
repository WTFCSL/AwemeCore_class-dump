//
//     Generated by private class-dump
//

@class NSString;

@interface AWECodeGenWannaJumpCardModel : AWEBaseDataModel {
    NSString *_jumpSchema;
    NSString *_lightCoverUrl;
    NSString *_darkCoverUrl;
    NSString *_projectId;
    NSString *_parentId;
    NSString *_taskId;
    long long _index;
    long long _startTime;
    long long _endTime;
    NSString *_modelID;
}

@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSString *lightCoverUrl;
@property (copy, nonatomic) NSString *darkCoverUrl;
@property (copy, nonatomic) NSString *projectId;
@property (copy, nonatomic) NSString *parentId;
@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) long long index;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *modelID;

+ (id)JSONKeyPathsByPropertyKey;

- (id)jumpSchema;
- (id)darkCoverUrl;
- (id)lightCoverUrl;
- (void)setJumpSchema:(id)arg0;
- (void)setLightCoverUrl:(id)arg0;
- (void)setDarkCoverUrl:(id)arg0;
- (void)setModelID:(id)arg0;
- (void)setProjectId:(id)arg0;
- (void)setIndex:(long long)arg0;
- (void)setStartTime:(long long)arg0;
- (void).cxx_destruct;
- (long long)endTime;
- (long long)index;
- (long long)startTime;
- (id)projectId;
- (id)modelID;
- (void)setEndTime:(long long)arg0;
- (id)taskId;
- (void)setTaskId:(id)arg0;
- (id)parentId;
- (void)setParentId:(id)arg0;

@end