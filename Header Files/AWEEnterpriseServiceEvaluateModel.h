//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@interface AWEEnterpriseServiceEvaluateModel : NSObject {
    NSString *_cardID;
    NSString *_title;
    NSString *_committedTitle;
    long long _level;
    NSString *_levelButtonID;
    NSArray *_descriptions;
    NSDictionary *_feedbacks;
    NSString *_submitTitle;
    NSString *_apiString;
    long long _timeout;
    NSString *_timeoutToast;
}

@property (copy, nonatomic) NSString *cardID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *committedTitle;
@property (nonatomic) long long level;
@property (copy, nonatomic) NSString *levelButtonID;
@property (copy, nonatomic) NSArray *descriptions;
@property (copy, nonatomic) NSDictionary *feedbacks;
@property (copy, nonatomic) NSString *submitTitle;
@property (copy, nonatomic) NSString *apiString;
@property (nonatomic) long long timeout;
@property (copy, nonatomic) NSString *timeoutToast;

- (void)setApiString:(id)arg0;
- (id)apiString;
- (id)timeoutToast;
- (void)setTimeoutToast:(id)arg0;
- (void)setCommittedTitle:(id)arg0;
- (void)setLevelButtonID:(id)arg0;
- (void)setSubmitTitle:(id)arg0;
- (id)createFeedbackWithCustomerServiceModule:(id)arg0;
- (id)committedTitle;
- (id)levelButtonID;
- (id)submitTitle;
- (void)setLevel:(long long)arg0;
- (id)initWithModel:(id)arg0;
- (void)setFeedbacks:(id)arg0;
- (long long)level;
- (void).cxx_destruct;
- (id)feedbacks;
- (id)title;
- (long long)timeout;
- (void)setTitle:(id)arg0;
- (void)setTimeout:(long long)arg0;
- (id)descriptions;
- (void)setDescriptions:(id)arg0;
- (id)cardID;
- (void)setCardID:(id)arg0;

@end
