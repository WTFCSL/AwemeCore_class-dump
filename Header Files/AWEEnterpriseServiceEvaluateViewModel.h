//
//     Generated by private class-dump
//

@class NSMutableArray, NSString, NSArray, AWERatingViewRenderConfig, NSDictionary, NSNumber, AWEEnterpriseServiceEvaluateModel;

@interface AWEEnterpriseServiceEvaluateViewModel : AWEEnterpriseIMMessageCustomerBaseViewModel {
    NSString *_title;
    AWERatingViewRenderConfig *_ratingConfig;
    NSArray *_descriptions;
    NSDictionary *_feedbacks;
    NSString *_submitTitle;
    long long _selectedLevel;
    NSArray *_selectedFeedbacks;
    long long _localLevel;
    NSArray *_localFeedbackIDs;
    long long _timeout;
    NSString *_timeoutToast;
    NSNumber *_currentSelectedLevel;
    AWEEnterpriseServiceEvaluateModel *_model;
    NSMutableArray *_currentSelectedFeedbackIds;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWERatingViewRenderConfig *ratingConfig;
@property (copy, nonatomic) NSArray *descriptions;
@property (copy, nonatomic) NSDictionary *feedbacks;
@property (copy, nonatomic) NSString *submitTitle;
@property (nonatomic) long long selectedLevel;
@property (retain, nonatomic) NSArray *selectedFeedbacks;
@property (nonatomic) long long localLevel;
@property (retain, nonatomic) NSArray *localFeedbackIDs;
@property (retain, nonatomic) NSNumber *currentSelectedLevel;
@property (retain, nonatomic) AWEEnterpriseServiceEvaluateModel *model;
@property (retain, nonatomic) NSMutableArray *currentSelectedFeedbackIds;
@property (nonatomic) long long timeout;
@property (copy, nonatomic) NSString *timeoutToast;

- (void)configDataWithContent:(id)arg0 ext:(id)arg1 localExt:(id)arg2;
- (void)updateWithExt:(id)arg0;
- (void)updateWithModel:(id)arg0 localExt:(id)arg1 syncExt:(id)arg2;
- (void)p_updateWithExt:(id)arg0;
- (id)timeoutToast;
- (void)setTimeoutToast:(id)arg0;
- (void)setSubmitTitle:(id)arg0;
- (id)submitTitle;
- (id)selectedFeedbacks;
- (long long)localLevel;
- (id)feedbackKey:(id)arg0;
- (id)localFeedbackIDs;
- (void)changeFeedback:(id)arg0 selected:(BOOL)arg1;
- (id)currentSelectedFeedbackAndRate;
- (void)submitWithMessageInfo:(id)arg0 completeBlock:(id /* block */)arg1;
- (void)changeCurrentLevel:(id)arg0;
- (id)createRatingConfigWith:(long long)arg0 selectedLevel:(long long)arg1;
- (void)setRatingConfig:(id)arg0;
- (void)parseSyncExt:(id)arg0;
- (void)setSelectedFeedbacks:(id)arg0;
- (void)parseLocalExt:(id)arg0;
- (id)currentSelectedLevel;
- (void)setCurrentSelectedLevel:(id)arg0;
- (id)currentSelectedFeedbackIds;
- (void)setCurrentSelectedFeedbackIds:(id)arg0;
- (void)setLocalLevel:(long long)arg0;
- (void)setLocalFeedbackIDs:(id)arg0;
- (id)ratingConfig;
- (void)setModel:(id)arg0;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)setFeedbacks:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)feedbacks;
- (id)title;
- (long long)timeout;
- (void)setTitle:(id)arg0;
- (void)setTimeout:(long long)arg0;
- (id)descriptions;
- (void)setDescriptions:(id)arg0;
- (BOOL)checkTimeout;
- (long long)selectedLevel;
- (void)setSelectedLevel:(long long)arg0;

@end
