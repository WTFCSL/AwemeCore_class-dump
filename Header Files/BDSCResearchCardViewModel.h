//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary, UIImage, BDByteScreenCastTracker, BDSCResearchCardQuestion;

@interface BDSCResearchCardViewModel : NSObject {
    BOOL _xsgOnly;
    BOOL _isLandscape;
    BOOL _isShowSolution;
    BOOL _isSkip;
    BOOL _isOpenTV;
    BOOL _isOpenXsg;
    BOOL _isConnectWiFi;
    BOOL _isOpenSinkApp;
    BOOL _isOtherAppCanSearch;
    BOOL _didTriggerFeedbackRequest;
    unsigned long long _type;
    BDByteScreenCastTracker *_tracker;
    long long _currentIndex;
    id /* block */ _didUseCardBlock;
    NSArray *_questionArray;
    NSMutableDictionary *_questionAnswerInfo;
    UIImage *_refreshImage;
}

@property (copy, nonatomic) NSArray *questionArray;
@property (nonatomic) BOOL isSkip;
@property (nonatomic) BOOL isOpenTV;
@property (nonatomic) BOOL isOpenXsg;
@property (nonatomic) BOOL isConnectWiFi;
@property (nonatomic) BOOL isOpenSinkApp;
@property (nonatomic) BOOL isOtherAppCanSearch;
@property (retain, nonatomic) NSMutableDictionary *questionAnswerInfo;
@property (nonatomic) long long currentIndex;
@property (nonatomic) BOOL isShowSolution;
@property (retain, nonatomic) UIImage *refreshImage;
@property (nonatomic) BOOL didTriggerFeedbackRequest;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL xsgOnly;
@property (nonatomic) BOOL isLandscape;
@property (retain, nonatomic) BDByteScreenCastTracker *tracker;
@property (readonly, nonatomic) long long questionCount;
@property (readonly, nonatomic) BDSCResearchCardQuestion *currentQuestion;
@property (copy, nonatomic) id /* block */ didUseCardBlock;

- (BOOL)isSkip;
- (void)setIsSkip:(BOOL)arg0;
- (id)questionArray;
- (void)setQuestionArray:(id)arg0;
- (void)setXsgOnly:(BOOL)arg0;
- (id)initWithType:(unsigned long long)arg0 xsgOnly:(BOOL)arg1;
- (void)setDidUseCardBlock:(id /* block */)arg0;
- (id)handleSchemeString:(id)arg0;
- (void)buildQuestions;
- (BOOL)isShowSolution;
- (id)currentQuestion;
- (id)buildSolutions;
- (id)buildFeedbackSolution;
- (void)nextQuestion;
- (long long)questionCount;
- (void)questionChoose:(unsigned long long)arg0;
- (BOOL)xsgOnly;
- (void)setIsShowSolution:(BOOL)arg0;
- (void)setIsOpenTV:(BOOL)arg0;
- (id)stringValueForChoose:(unsigned long long)arg0;
- (id)questionAnswerInfo;
- (void)setIsOpenXsg:(BOOL)arg0;
- (void)setIsConnectWiFi:(BOOL)arg0;
- (void)setIsOpenSinkApp:(BOOL)arg0;
- (void)setIsOtherAppCanSearch:(BOOL)arg0;
- (void)trackResearchActionWithChoose:(unsigned long long)arg0;
- (void)skipQuestion;
- (id /* block */)didUseCardBlock;
- (id)refreshImage;
- (BOOL)isOpenXsg;
- (BOOL)isConnectWiFi;
- (BOOL)isOpenTV;
- (BOOL)isOpenSinkApp;
- (BOOL)didTriggerFeedbackRequest;
- (void)setDidTriggerFeedbackRequest:(BOOL)arg0;
- (void)trackPostFeedbackCompletion;
- (void)postFeedbackWithCompletion:(id /* block */)arg0;
- (void)setRefreshImage:(id)arg0;
- (void)trackSolutionShow;
- (BOOL)isOtherAppCanSearch;
- (void)setQuestionAnswerInfo:(id)arg0;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (long long)currentIndex;
- (unsigned long long)type;
- (void)setIsLandscape:(BOOL)arg0;
- (void)setCurrentIndex:(long long)arg0;
- (void)setType:(unsigned long long)arg0;
- (BOOL)isLandscape;
- (void)preloadImages;

@end