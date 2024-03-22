//
//     Generated by private class-dump
//

@class NSString, CJPayNoticeInfo;

@interface CJPayBDDeskConfig : JSONModel {
    BOOL _agreementChoose;
    BOOL _whetherShowLeftTime;
    int _homePageAction;
    NSString *_confirmBtnDesc;
    NSString *_themeString;
    long long _showStyle;
    long long _homePageStyle;
    NSString *_agreementUrl;
    NSString *_agreementTitle;
    long long _leftTime;
    CJPayNoticeInfo *_noticeInfo;
    NSString *_withdrawArrivalTime;
}

@property (copy, nonatomic) NSString *confirmBtnDesc;
@property (copy, nonatomic) NSString *themeString;
@property (nonatomic) long long showStyle;
@property (nonatomic) long long homePageStyle;
@property (copy, nonatomic) NSString *agreementUrl;
@property (nonatomic) BOOL agreementChoose;
@property (copy, nonatomic) NSString *agreementTitle;
@property (nonatomic) BOOL whetherShowLeftTime;
@property (nonatomic) long long leftTime;
@property (retain, nonatomic) CJPayNoticeInfo *noticeInfo;
@property (copy, nonatomic) NSString *withdrawArrivalTime;
@property (nonatomic) int homePageAction;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (long long)showStyle;
- (long long)leftTime;
- (void)setLeftTime:(long long)arg0;
- (void)setShowStyle:(long long)arg0;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg0;
- (id)themeString;
- (int)homePageAction;
- (BOOL)isFastEnterBindCard;
- (id)confirmBtnDesc;
- (void)setConfirmBtnDesc:(id)arg0;
- (void)setThemeString:(id)arg0;
- (long long)homePageStyle;
- (void)setHomePageStyle:(long long)arg0;
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
- (void)setHomePageAction:(int)arg0;
- (void).cxx_destruct;
- (id)theme;

@end