//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEUGCountDownConfigModel, NSDictionary, AWEUGTaskProgressCoefficientConfigModel, AWEUGPendantEnhanceConfig, AWEUGFCoinDeleteConfig, AWEUGPendantActivityConfigSideBarCaption, AWEUGPendantActionPathModel;

@interface AWEUGPendantActivityConfig : MTLModel <MTLJSONSerializing> {
    BOOL _canShowInFollowing;
    BOOL _enableInTeenagerMode;
    BOOL _exitFold;
    BOOL _ignoreAuditingVersion;
    BOOL _frequentLimitByMaterial;
    long long _countOfDisappearAfter;
    unsigned long long _closeType;
    long long _disappearAfterCodeLaunch;
    long long _closeHoursNotShow;
    long long _maxCloseCountTotal;
    long long _maxCloseCountaDay;
    long long _daysWindows;
    long long _closeMaxTimesInDays;
    long long _daysWillNotPresent;
    NSArray *_retryOccasionArray;
    long long _retryScrollCount;
    AWEUGFCoinDeleteConfig *_deleteConfig;
    AWEUGPendantEnhanceConfig *_enhanceConfig;
    long long _clickLimitDaysNotShow;
    long long _clickLimitDaysNoClick;
    NSArray *_exemptPeriod;
    NSDictionary *_notLoginConfig;
    AWEUGCountDownConfigModel *_countDownConfig;
    NSString *_clientBubbleStr;
    AWEUGTaskProgressCoefficientConfigModel *_taskProgressCoefficientConfig;
    AWEUGPendantActionPathModel *_actionPath;
    NSArray *_frequentLimitStrategyArray;
    AWEUGPendantActivityConfigSideBarCaption *_sideBarCaption;
}

@property (nonatomic) long long countOfDisappearAfter;
@property (nonatomic) unsigned long long closeType;
@property (nonatomic) long long disappearAfterCodeLaunch;
@property (nonatomic) long long closeHoursNotShow;
@property (nonatomic) long long maxCloseCountTotal;
@property (nonatomic) long long maxCloseCountaDay;
@property (nonatomic) long long daysWindows;
@property (nonatomic) long long closeMaxTimesInDays;
@property (nonatomic) long long daysWillNotPresent;
@property (nonatomic) BOOL canShowInFollowing;
@property (nonatomic) BOOL enableInTeenagerMode;
@property (copy, nonatomic) NSArray *retryOccasionArray;
@property (nonatomic) long long retryScrollCount;
@property (nonatomic) BOOL exitFold;
@property (retain, nonatomic) AWEUGFCoinDeleteConfig *deleteConfig;
@property (retain, nonatomic) AWEUGPendantEnhanceConfig *enhanceConfig;
@property (nonatomic) long long clickLimitDaysNotShow;
@property (nonatomic) long long clickLimitDaysNoClick;
@property (copy, nonatomic) NSArray *exemptPeriod;
@property (nonatomic) BOOL ignoreAuditingVersion;
@property (copy, nonatomic) NSDictionary *notLoginConfig;
@property (retain, nonatomic) AWEUGCountDownConfigModel *countDownConfig;
@property (copy, nonatomic) NSString *clientBubbleStr;
@property (retain, nonatomic) AWEUGTaskProgressCoefficientConfigModel *taskProgressCoefficientConfig;
@property (retain, nonatomic) AWEUGPendantActionPathModel *actionPath;
@property (copy, nonatomic) NSArray *frequentLimitStrategyArray;
@property (nonatomic) BOOL frequentLimitByMaterial;
@property (retain, nonatomic) AWEUGPendantActivityConfigSideBarCaption *sideBarCaption;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exemptPeriodJSONTransformer;
+ (id)frequentLimitStrategyArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)closeType;
- (void)setCloseType:(unsigned long long)arg0;
- (id)countDownConfig;
- (void)setCountDownConfig:(id)arg0;
- (id)frequentLimitStrategyArray;
- (long long)clickLimitDaysNoClick;
- (long long)clickLimitDaysNotShow;
- (BOOL)canShowInFollowing;
- (BOOL)ignoreAuditingVersion;
- (id)exemptPeriod;
- (id)sideBarCaption;
- (long long)daysWindows;
- (long long)closeMaxTimesInDays;
- (long long)daysWillNotPresent;
- (long long)maxCloseCountaDay;
- (long long)maxCloseCountTotal;
- (long long)disappearAfterCodeLaunch;
- (BOOL)frequentLimitByMaterial;
- (long long)countOfDisappearAfter;
- (void)setCountOfDisappearAfter:(long long)arg0;
- (long long)closeHoursNotShow;
- (void)setCloseHoursNotShow:(long long)arg0;
- (void)setIgnoreAuditingVersion:(BOOL)arg0;
- (void)setCanShowInFollowing:(BOOL)arg0;
- (BOOL)enableInTeenagerMode;
- (void)setEnableInTeenagerMode:(BOOL)arg0;
- (void)setDaysWindows:(long long)arg0;
- (void)setDaysWillNotPresent:(long long)arg0;
- (id)taskProgressCoefficientConfig;
- (id)clientBubbleStr;
- (id)enhanceConfig;
- (BOOL)exitFold;
- (id)deleteConfig;
- (id)notLoginConfig;
- (long long)retryScrollCount;
- (id)retryOccasionArray;
- (void)setNotLoginConfig:(id)arg0;
- (void)setDisappearAfterCodeLaunch:(long long)arg0;
- (void)setMaxCloseCountTotal:(long long)arg0;
- (void)setMaxCloseCountaDay:(long long)arg0;
- (void)setCloseMaxTimesInDays:(long long)arg0;
- (void)setRetryOccasionArray:(id)arg0;
- (void)setRetryScrollCount:(long long)arg0;
- (void)setExitFold:(BOOL)arg0;
- (void)setDeleteConfig:(id)arg0;
- (void)setEnhanceConfig:(id)arg0;
- (void)setClickLimitDaysNotShow:(long long)arg0;
- (void)setClickLimitDaysNoClick:(long long)arg0;
- (void)setExemptPeriod:(id)arg0;
- (void)setClientBubbleStr:(id)arg0;
- (void)setTaskProgressCoefficientConfig:(id)arg0;
- (id)actionPath;
- (void)setActionPath:(id)arg0;
- (void)setFrequentLimitStrategyArray:(id)arg0;
- (void)setFrequentLimitByMaterial:(BOOL)arg0;
- (void)setSideBarCaption:(id)arg0;
- (void).cxx_destruct;

@end
