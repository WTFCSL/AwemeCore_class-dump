//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEIMSwiftImpl.QuestionsAndAnswersActivityQuestionInfo : MTLModel <MTLJSONSerializing> {
    void /* unknown type, empty encoding */ questionId;
    void /* unknown type, empty encoding */ questionContent;
    void /* unknown type, empty encoding */ answerContentList;
    void /* unknown type, empty encoding */ sponsorIcon;
    void /* unknown type, empty encoding */ sponsorDesc;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ questionId;
@property (nonatomic, copy) NSString *questionContent;
@property (nonatomic, copy) NSArray *answerContentList;
@property (nonatomic, copy) NSString *sponsorIcon;
@property (nonatomic, copy) NSString *sponsorDesc;

+ (id)JSONKeyPathsByPropertyKey;

- (id)questionId;
- (void)setQuestionId:(id)arg0;
- (id)questionContent;
- (void)setQuestionContent:(id)arg0;
- (id)answerContentList;
- (void)setAnswerContentList:(id)arg0;
- (id)sponsorIcon;
- (void)setSponsorIcon:(id)arg0;
- (id)sponsorDesc;
- (void)setSponsorDesc:(id)arg0;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;

@end
