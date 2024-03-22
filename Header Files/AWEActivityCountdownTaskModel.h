//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEActivityCountdownTaskModel : MTLModel <MTLJSONSerializing> {
    BOOL _needCheckUID;
    NSString *_activityID;
    NSString *_token;
    long long _countdown;
    unsigned long long _taskType;
    double _startTime;
    double _endTime;
    NSArray *_supportScene;
    NSString *_taskUID;
    NSString *_taskKey;
}

@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) long long countdown;
@property (nonatomic) unsigned long long taskType;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSArray *supportScene;
@property (nonatomic) BOOL needCheckUID;
@property (copy, nonatomic) NSString *taskUID;
@property (copy, nonatomic) NSString *taskKey;
@property (readonly, copy, nonatomic) NSString *taskIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)taskKey;
- (void)setTaskKey:(id)arg0;
- (BOOL)needCheckUID;
- (id)taskUID;
- (id)supportScene;
- (void)setSupportScene:(id)arg0;
- (void)setNeedCheckUID:(BOOL)arg0;
- (void)setTaskUID:(id)arg0;
- (unsigned long long)taskType;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (void)setToken:(id)arg0;
- (double)endTime;
- (id)token;
- (double)startTime;
- (id)taskIdentifier;
- (void)setEndTime:(double)arg0;
- (void)setTaskType:(unsigned long long)arg0;
- (long long)countdown;
- (void)setCountdown:(long long)arg0;
- (id)activityID;
- (void)setActivityID:(id)arg0;

@end