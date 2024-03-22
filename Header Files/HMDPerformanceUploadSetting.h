//
//     Generated by private class-dump
//

@interface HMDPerformanceUploadSetting : HMDCommonAPISetting {
    BOOL _enableNetQualityReport;
    BOOL _enableDowngradeByChannel;
    unsigned long long _maxRetryCount;
    unsigned long long _uploadInterval;
    unsigned long long _onceMaxCount;
    unsigned long long _reportFailBaseInterval;
}

@property (nonatomic) unsigned long long maxRetryCount;
@property (nonatomic) unsigned long long uploadInterval;
@property (nonatomic) unsigned long long onceMaxCount;
@property (nonatomic) unsigned long long reportFailBaseInterval;
@property (nonatomic) BOOL enableNetQualityReport;
@property (nonatomic) BOOL enableDowngradeByChannel;

+ (id)hmd_attributeMapDictionary;

- (BOOL)enableDowngradeByChannel;
- (unsigned long long)uploadInterval;
- (BOOL)enableNetQualityReport;
- (void)setEnableNetQualityReport:(BOOL)arg0;
- (void)setUploadInterval:(unsigned long long)arg0;
- (unsigned long long)onceMaxCount;
- (void)setOnceMaxCount:(unsigned long long)arg0;
- (unsigned long long)reportFailBaseInterval;
- (void)setReportFailBaseInterval:(unsigned long long)arg0;
- (void)setEnableDowngradeByChannel:(BOOL)arg0;
- (unsigned long long)maxRetryCount;
- (void)setMaxRetryCount:(unsigned long long)arg0;

@end
