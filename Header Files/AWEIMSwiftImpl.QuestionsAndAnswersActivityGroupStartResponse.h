//
//     Generated by private class-dump
//

@interface AWEIMSwiftImpl.QuestionsAndAnswersActivityGroupStartResponse : AWEBaseApiModel {
    void /* unknown type, empty encoding */ teamInfo;
    void /* unknown type, empty encoding */ matchInfo;
    void /* unknown type, empty encoding */ questionInfo;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ teamInfo;
@property (nonatomic, retain) void /* unknown type, empty encoding */ matchInfo;
@property (nonatomic, retain) void /* unknown type, empty encoding */ questionInfo;

+ (id)teamInfoJSONTransformer;
+ (id)questionInfoJSONTransformer;
+ (id)nextQuestionInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)teamInfo;
- (void)setTeamInfo:(id)arg0;
- (id)questionInfo;
- (void)setQuestionInfo:(id)arg0;
- (id)matchInfo;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;
- (void)setMatchInfo:(id)arg0;

@end