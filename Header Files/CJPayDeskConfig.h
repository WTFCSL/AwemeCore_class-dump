//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayDeskConfig : JSONModel {
    BOOL _agreementChoose;
    BOOL _whetherShowLeftTime;
    NSString *_confirmBtnDesc;
    NSString *_themeString;
    NSString *_complianceBtnChangeTag;
    long long _showStyle;
    NSString *_agreementUrl;
    NSString *_agreementTitle;
    long long _leftTime;
    NSString *_withdrawArrivalTime;
    NSString *_headerTitle;
    long long _queryResultTime;
    long long _remainTime;
    NSString *_jhResultPageStyle;
    NSString *_containerViewLynxUrl;
    long long _renderTimeoutTime;
    NSString *_callBackTypeStr;
    long long _callBackType;
}

@property (copy, nonatomic) NSString *confirmBtnDesc;
@property (copy, nonatomic) NSString *themeString;
@property (copy, nonatomic) NSString *complianceBtnChangeTag;
@property (nonatomic) long long showStyle;
@property (copy, nonatomic) NSString *agreementUrl;
@property (nonatomic) BOOL agreementChoose;
@property (copy, nonatomic) NSString *agreementTitle;
@property (nonatomic) BOOL whetherShowLeftTime;
@property (nonatomic) long long leftTime;
@property (copy, nonatomic) NSString *withdrawArrivalTime;
@property (copy, nonatomic) NSString *headerTitle;
@property (nonatomic) long long queryResultTime;
@property (nonatomic) long long remainTime;
@property (copy, nonatomic) NSString *jhResultPageStyle;
@property (copy, nonatomic) NSString *containerViewLynxUrl;
@property (nonatomic) long long renderTimeoutTime;
@property (copy, nonatomic) NSString *callBackTypeStr;
@property (nonatomic) long long callBackType;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (long long)showStyle;
- (long long)leftTime;
- (void)setLeftTime:(long long)arg0;
- (void)setShowStyle:(long long)arg0;
- (long long)remainTime;
- (void)setRemainTime:(long long)arg0;
- (id)themeString;
- (id)confirmBtnDesc;
- (void)setConfirmBtnDesc:(id)arg0;
- (void)setThemeString:(id)arg0;
- (id)agreementUrl;
- (void)setAgreementUrl:(id)arg0;
- (BOOL)agreementChoose;
- (void)setAgreementChoose:(BOOL)arg0;
- (id)agreementTitle;
- (void)setAgreementTitle:(id)arg0;
- (BOOL)whetherShowLeftTime;
- (void)setWhetherShowLeftTime:(BOOL)arg0;
- (id)withdrawArrivalTime;
- (void)setWithdrawArrivalTime:(id)arg0;
- (long long)currentDeskType;
- (id)jhResultPageStyle;
- (long long)callBackType;
- (void)setJhResultPageStyle:(id)arg0;
- (long long)renderTimeoutTime;
- (id)complianceBtnChangeTag;
- (id)containerViewLynxUrl;
- (id)callBackTypeStr;
- (void)setComplianceBtnChangeTag:(id)arg0;
- (long long)queryResultTime;
- (void)setQueryResultTime:(long long)arg0;
- (void)setContainerViewLynxUrl:(id)arg0;
- (void)setRenderTimeoutTime:(long long)arg0;
- (void)setCallBackTypeStr:(id)arg0;
- (void)setCallBackType:(long long)arg0;
- (void)setHeaderTitle:(id)arg0;
- (id)headerTitle;
- (void).cxx_destruct;
- (id)theme;

@end
