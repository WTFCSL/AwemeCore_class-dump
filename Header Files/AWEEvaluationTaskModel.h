//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray;

@interface AWEEvaluationTaskModel : MTLModel <MTLJSONSerializing> {
    BOOL _isSyncToMobile;
    long long _taskID;
    NSString *_taskStatus;
    NSString *_taskCreateDate;
    NSString *_taskUpdateDate;
    NSString *_taskName;
    NSString *_taskStartTime;
    NSString *_taskMeasurement;
    long long _taskType;
    long long _taskMode;
    NSDictionary *_taskModeDetail;
    long long _taskDisplayMode;
    long long _taskImageHandleMode;
    NSString *_taskDescription;
    NSString *_taskDisplayScreen;
    NSString *_taskCreator;
    NSDictionary *_taskSettings;
    NSDictionary *_taskMetaParsed;
    NSString *_taskURL;
    NSArray *_taskData;
}

@property (nonatomic) long long taskID;
@property (copy, nonatomic) NSString *taskStatus;
@property (copy, nonatomic) NSString *taskCreateDate;
@property (copy, nonatomic) NSString *taskUpdateDate;
@property (copy, nonatomic) NSString *taskName;
@property (copy, nonatomic) NSString *taskStartTime;
@property (copy, nonatomic) NSString *taskMeasurement;
@property (nonatomic) long long taskType;
@property (nonatomic) long long taskMode;
@property (copy, nonatomic) NSDictionary *taskModeDetail;
@property (nonatomic) long long taskDisplayMode;
@property (nonatomic) BOOL isSyncToMobile;
@property (nonatomic) long long taskImageHandleMode;
@property (copy, nonatomic) NSString *taskDescription;
@property (copy, nonatomic) NSString *taskDisplayScreen;
@property (copy, nonatomic) NSString *taskCreator;
@property (copy, nonatomic) NSDictionary *taskSettings;
@property (copy, nonatomic) NSDictionary *taskMetaParsed;
@property (copy, nonatomic) NSString *taskURL;
@property (copy, nonatomic) NSArray *taskData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setTaskStatus:(id)arg0;
- (id)taskData;
- (void)setTaskData:(id)arg0;
- (long long)taskDisplayMode;
- (id)taskCreateDate;
- (void)setTaskCreateDate:(id)arg0;
- (id)taskUpdateDate;
- (void)setTaskUpdateDate:(id)arg0;
- (id)taskMeasurement;
- (void)setTaskMeasurement:(id)arg0;
- (void)setTaskMode:(long long)arg0;
- (id)taskModeDetail;
- (void)setTaskModeDetail:(id)arg0;
- (void)setTaskDisplayMode:(long long)arg0;
- (BOOL)isSyncToMobile;
- (void)setIsSyncToMobile:(BOOL)arg0;
- (long long)taskImageHandleMode;
- (void)setTaskImageHandleMode:(long long)arg0;
- (id)taskDisplayScreen;
- (void)setTaskDisplayScreen:(id)arg0;
- (id)taskCreator;
- (void)setTaskCreator:(id)arg0;
- (id)taskSettings;
- (void)setTaskSettings:(id)arg0;
- (id)taskMetaParsed;
- (void)setTaskMetaParsed:(id)arg0;
- (id)taskURL;
- (void)setTaskURL:(id)arg0;
- (long long)taskType;
- (void).cxx_destruct;
- (id)taskStartTime;
- (void)setTaskDescription:(id)arg0;
- (id)taskDescription;
- (long long)taskID;
- (void)setTaskID:(long long)arg0;
- (id)taskName;
- (long long)taskMode;
- (void)setTaskStartTime:(id)arg0;
- (void)setTaskName:(id)arg0;
- (void)setTaskType:(long long)arg0;
- (id)taskStatus;

@end
