//
//     Generated by private class-dump
//

@interface AWEIMSwiftImpl.QuestionsAndAnswersActivityGroupSubmitResponse : AWEBaseApiModel {
    void /* unknown type, empty encoding */ teamInfo;
    void /* unknown type, empty encoding */ matchInfo;
    void /* unknown type, empty encoding */ nextQuestionInfo;
    void /* unknown type, empty encoding */ answerIndex;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ teamInfo;
@property (nonatomic, retain) void /* unknown type, empty encoding */ matchInfo;
@property (nonatomic, retain) void /* unknown type, empty encoding */ nextQuestionInfo;
@property (nonatomic, retain) void /* unknown type, empty encoding */ answerIndex;

+ (id)teamInfoJSONTransformer;
+ (id)matchInfoJSONTransformer;
+ (id)nextQuestionInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)teamInfo;
- (void)setTeamInfo:(id)arg0;
- (id)nextQuestionInfo;
- (void)setNextQuestionInfo:(id)arg0;
- (id)answerIndex;
- (void)setAnswerIndex:(id)arg0;
- (id)matchInfo;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;
- (void)setMatchInfo:(id)arg0;

@end
