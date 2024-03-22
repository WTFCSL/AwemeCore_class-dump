//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel, AWEQuestionnaireResponse, AWEQuestionnaire;
@protocol AWEFrequencyControlStrategyProtocol;

@interface AWEReportAfterInteractionViewModel : NSObject {
    BOOL _isRequesting;
    BOOL _hasRequest;
    BOOL _isRequestingDoubleColumnSurvey;
    BOOL _hasRequestDoubleColumnSurvey;
    AWEQuestionnaireResponse *_cachedModel;
    NSString *_taskId;
    AWEAwemeModel *_currentModel;
    AWEQuestionnaire *_currentQuestionnaire;
    NSString *_currentRule;
    AWEQuestionnaireResponse *_questionnaireDoubleColumn;
    id<AWEFrequencyControlStrategyProtocol> _frequencyControl;
}

@property (retain, nonatomic) id<AWEFrequencyControlStrategyProtocol> frequencyControl;
@property (retain, nonatomic) AWEQuestionnaireResponse *cachedModel;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) AWEQuestionnaire *currentQuestionnaire;
@property (copy, nonatomic) NSString *currentRule;
@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL hasRequest;
@property (nonatomic) BOOL isRequestingDoubleColumnSurvey;
@property (nonatomic) BOOL hasRequestDoubleColumnSurvey;
@property (retain, nonatomic) AWEQuestionnaireResponse *questionnaireDoubleColumn;

+ (id)sharedInstance;

- (void)setIsRequesting:(BOOL)arg0;
- (BOOL)isRequesting;
- (void)trackWithEvent:(id)arg0 params:(id)arg1;
- (id)frequencyControl;
- (void)setFrequencyControl:(id)arg0;
- (id)questionnaireDoubleColumn;
- (void)requestDoubleColumnModelInfoIfNeed:(id)arg0 completion:(id /* block */)arg1;
- (id)currentQuestionnaire;
- (void)requestModelInfoIfNeed:(id)arg0;
- (void)requestModelInfo:(id /* block */)arg0;
- (BOOL)isRequestingDoubleColumnSurvey;
- (BOOL)hasRequestDoubleColumnSurvey;
- (void)setQuestionnaireDoubleColumn:(id)arg0;
- (void)requestModelInfoWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)setCurrentRule:(id)arg0;
- (void)setCurrentQuestionnaire:(id)arg0;
- (id)currentRule;
- (void)setIsRequestingDoubleColumnSurvey:(BOOL)arg0;
- (void)setHasRequestDoubleColumnSurvey:(BOOL)arg0;
- (BOOL)hasRequest;
- (void).cxx_destruct;
- (id)taskId;
- (void)setTaskId:(id)arg0;
- (id)cachedModel;
- (void)setCachedModel:(id)arg0;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;
- (void)setHasRequest:(BOOL)arg0;
- (void)cleanData;

@end