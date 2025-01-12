//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary, NSNumber;
@protocol AWEIMQuestionsAndAnswersActivityStageProtocol;

@interface AWEIMSwiftImpl.QuestionsAndAnswersActivitySession : NSObject <AWEIMQuestionsAndAnswersActivitySessionProtocol> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ _teamId;
    void /* unknown type, empty encoding */ _shortId;
    void /* unknown type, empty encoding */ _activityId;
    void /* unknown type, empty encoding */ _matchId;
    void /* unknown type, empty encoding */ _type;
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ _preparingState;
    void /* unknown type, empty encoding */ _finishedState;
    void /* unknown type, empty encoding */ _users;
    void /* unknown type, empty encoding */ _maxStageCount;
    void /* unknown type, empty encoding */ _startTimeCountdown;
    void /* unknown type, empty encoding */ $__lazy_storage_$_currentStage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nextStage;
    void /* unknown type, empty encoding */ ext;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataController;
    void /* unknown type, empty encoding */ singleToken;
    void /* unknown type, empty encoding */ $__lazy_storage_$_currentUid;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ _startTimestamp;
    void /* unknown type, empty encoding */ _lastUpdateMatchInfoTime;
    void /* unknown type, empty encoding */ _dissolveRetryInfo;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, retain) NSNumber *teamId;
@property (nonatomic, retain) NSNumber *shortId;
@property (nonatomic, copy) NSString *activityId;
@property (nonatomic, retain) NSNumber *matchId;
@property (nonatomic) long long type;
@property (nonatomic) long long state;
@property (nonatomic) long long preparingState;
@property (nonatomic) long long finishedState;
@property (nonatomic, copy) NSArray *users;
@property (nonatomic, retain) NSNumber *maxStageCount;
@property (nonatomic, retain) NSNumber *startTimeCountdown;
@property (nonatomic, retain) id<AWEIMQuestionsAndAnswersActivityStageProtocol> currentStage;
@property (nonatomic, retain) id<AWEIMQuestionsAndAnswersActivityStageProtocol> nextStage;
@property (nonatomic, copy) NSDictionary *ext;

- (id)shortId;
- (id)matchId;
- (void)setMatchId:(id)arg0;
- (void)setCurrentStage:(id)arg0;
- (id)nextStage;
- (void)setNextStage:(id)arg0;
- (void)setPreparingState:(long long)arg0;
- (void)setMaxStageCount:(id)arg0;
- (id)maxStageCount;
- (id)startTimeCountdown;
- (void)setStartTimeCountdown:(id)arg0;
- (void)renderWithConfiguration:(id)arg0;
- (void)invokeWithAction:(id)arg0;
- (void)updateExtWithKey:(id)arg0 value:(id)arg1;
- (void)setShortId:(id)arg0;
- (void)setExt:(id)arg0;
- (long long)preparingState;
- (id)users;
- (id)init;
- (void).cxx_destruct;
- (long long)state;
- (void)fire;
- (void)setState:(long long)arg0;
- (long long)type;
- (void)setTeamId:(id)arg0;
- (void)setType:(long long)arg0;
- (id)delegate;
- (id)teamId;
- (void)setDelegate:(id)arg0;
- (void)setUsers:(id)arg0;
- (id)activityId;
- (void)setActivityId:(id)arg0;
- (id)currentStage;
- (long long)finishedState;
- (void)setFinishedState:(long long)arg0;
- (id)ext;

@end
