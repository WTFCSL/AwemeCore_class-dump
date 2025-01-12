//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface BDUGFlowStatisticsResponseModel : BDUGFlowBasicModel {
    BOOL _isOrderFlow;
    BOOL _isSupport;
    BOOL _showPopup;
    BOOL _showFreeflowToast;
    long long _orderType;
    double _flow;
    NSString *_source;
    long long _cacheTime;
    long long _currentTime;
    NSString *_orderFlowButton;
    NSString *_orderFlowButtonStyle;
    NSString *_flowReminderMsg;
    NSString *_flowReminderMsgColor;
    NSString *_continuePlayButton;
    NSString *_continuePlayButtonStyle;
    double _threshold;
    long long _noPopupDuration;
    long long _statusCode;
    NSString *_prompt;
    NSString *_ip;
    NSString *_freeflowToastMsg;
    long long _noToastDuration;
    NSArray *_experiments;
    NSString *_orderFlowUrl;
}

@property (nonatomic) BOOL isOrderFlow;
@property (nonatomic) long long orderType;
@property (nonatomic) double flow;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) long long cacheTime;
@property (nonatomic) long long currentTime;
@property (nonatomic) BOOL isSupport;
@property (copy, nonatomic) NSString *orderFlowButton;
@property (copy, nonatomic) NSString *orderFlowButtonStyle;
@property (copy, nonatomic) NSString *flowReminderMsg;
@property (copy, nonatomic) NSString *flowReminderMsgColor;
@property (copy, nonatomic) NSString *continuePlayButton;
@property (copy, nonatomic) NSString *continuePlayButtonStyle;
@property (nonatomic) double threshold;
@property (nonatomic) BOOL showPopup;
@property (nonatomic) long long noPopupDuration;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSString *ip;
@property (nonatomic) BOOL showFreeflowToast;
@property (copy, nonatomic) NSString *freeflowToastMsg;
@property (nonatomic) long long noToastDuration;
@property (copy, nonatomic) NSArray *experiments;
@property (copy, nonatomic) NSString *orderFlowUrl;

+ (id)modelWithDictionary:(id)arg0;

- (long long)cacheTime;
- (void)setCacheTime:(long long)arg0;
- (void)setIsOrderFlow:(BOOL)arg0;
- (void)setIsSupport:(BOOL)arg0;
- (void)setOrderFlowButton:(id)arg0;
- (void)setOrderFlowButtonStyle:(id)arg0;
- (void)setFlowReminderMsg:(id)arg0;
- (void)setFlowReminderMsgColor:(id)arg0;
- (void)setContinuePlayButton:(id)arg0;
- (void)setContinuePlayButtonStyle:(id)arg0;
- (void)setShowPopup:(BOOL)arg0;
- (void)setNoPopupDuration:(long long)arg0;
- (void)setShowFreeflowToast:(BOOL)arg0;
- (void)setFreeflowToastMsg:(id)arg0;
- (void)setNoToastDuration:(long long)arg0;
- (void)setOrderFlowUrl:(id)arg0;
- (BOOL)isOrderFlow;
- (BOOL)isSupport;
- (id)orderFlowButton;
- (id)orderFlowButtonStyle;
- (id)flowReminderMsg;
- (id)flowReminderMsgColor;
- (id)continuePlayButton;
- (id)continuePlayButtonStyle;
- (BOOL)showPopup;
- (long long)noPopupDuration;
- (BOOL)showFreeflowToast;
- (id)freeflowToastMsg;
- (long long)noToastDuration;
- (id)orderFlowUrl;
- (long long)statusCode;
- (void)setStatusCode:(long long)arg0;
- (double)threshold;
- (id)prompt;
- (id)source;
- (void)setPrompt:(id)arg0;
- (void).cxx_destruct;
- (void)setCurrentTime:(long long)arg0;
- (id)experiments;
- (long long)currentTime;
- (void)setSource:(id)arg0;
- (void)setThreshold:(double)arg0;
- (void)setExperiments:(id)arg0;
- (double)flow;
- (void)setFlow:(double)arg0;
- (void)setIp:(id)arg0;
- (id)ip;
- (long long)orderType;
- (void)setOrderType:(long long)arg0;

@end
