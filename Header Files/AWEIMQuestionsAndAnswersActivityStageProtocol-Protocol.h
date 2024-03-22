//
//     Generated by private class-dump
//

@class NSNumber, NSArray;
@protocol AWEIMQuestionsAndAnswersActivityQuestionProtocol;

@protocol AWEIMQuestionsAndAnswersActivityStageProtocol <NSObject>

@property (nonatomic, readonly) NSNumber *stageIndex;
@property (nonatomic, readonly) NSNumber *stageStartTime;
@property (nonatomic, readonly) NSNumber *answeringDuration;
@property (nonatomic, readonly) NSNumber *waitingDuration;
@property (nonatomic, readonly) NSNumber *answeringCountdown;
@property (nonatomic, readonly) NSNumber *submitAnswerIndex;
@property (nonatomic, readonly) NSArray *selectionInfos;
@property (nonatomic, readonly) id<AWEIMQuestionsAndAnswersActivityQuestionProtocol> question;

- (id)stageStartTime;
- (id)waitingDuration;
- (id)answeringDuration;
- (id)answeringCountdown;
- (id)submitAnswerIndex;
- (id)selectionInfos;
- (id)question;
- (id)stageIndex;

@end