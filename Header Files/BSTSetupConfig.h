//
//     Generated by private class-dump
//

@class NSDictionary;

@interface BSTSetupConfig : NSObject {
    BOOL _isValid;
    BOOL _enableListViewHook;
    BOOL _enableBroNodeCheck;
    BOOL _enableParentNodeCheck;
    BOOL _useBtdKeyWindow;
    BOOL _optimizeUniqueKey;
    BOOL _enableKeyWindowCheck;
    BOOL _enableCheckViewIsInTopVC;
    BOOL _enableV1;
    BOOL _enableExposureLog;
    BOOL _fixCompletionBtmError;
    NSDictionary *_abTestSettings;
    double _samplingFrequency;
    long long _maxNodeCount;
    NSDictionary *_bstAlertConfig;
}

@property (nonatomic) BOOL isValid;
@property (retain, nonatomic) NSDictionary *abTestSettings;
@property (nonatomic) double samplingFrequency;
@property (nonatomic) long long maxNodeCount;
@property (nonatomic) BOOL enableListViewHook;
@property (nonatomic) BOOL enableBroNodeCheck;
@property (nonatomic) BOOL enableParentNodeCheck;
@property (nonatomic) BOOL useBtdKeyWindow;
@property (nonatomic) BOOL optimizeUniqueKey;
@property (nonatomic) BOOL enableKeyWindowCheck;
@property (nonatomic) BOOL enableCheckViewIsInTopVC;
@property (retain, nonatomic) NSDictionary *bstAlertConfig;
@property (nonatomic) BOOL enableV1;
@property (nonatomic) BOOL enableExposureLog;
@property (nonatomic) BOOL fixCompletionBtmError;

- (void)setSamplingFrequency:(double)arg0;
- (void)setEnableListViewHook:(BOOL)arg0;
- (void)setEnableBroNodeCheck:(BOOL)arg0;
- (void)setEnableParentNodeCheck:(BOOL)arg0;
- (void)setUseBtdKeyWindow:(BOOL)arg0;
- (void)setOptimizeUniqueKey:(BOOL)arg0;
- (void)setEnableKeyWindowCheck:(BOOL)arg0;
- (void)setEnableCheckViewIsInTopVC:(BOOL)arg0;
- (void)setBstAlertConfig:(id)arg0;
- (void)setEnableExposureLog:(BOOL)arg0;
- (void)setFixCompletionBtmError:(BOOL)arg0;
- (id)abTestSettings;
- (void)setAbTestSettings:(id)arg0;
- (long long)maxNodeCount;
- (BOOL)enableListViewHook;
- (BOOL)enableBroNodeCheck;
- (BOOL)enableParentNodeCheck;
- (BOOL)useBtdKeyWindow;
- (BOOL)optimizeUniqueKey;
- (BOOL)enableKeyWindowCheck;
- (BOOL)enableCheckViewIsInTopVC;
- (id)bstAlertConfig;
- (void)setEnableV1:(BOOL)arg0;
- (BOOL)enableExposureLog;
- (BOOL)fixCompletionBtmError;
- (void)setIsValid:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithSettings:(id)arg0;
- (BOOL)enableV1;
- (double)samplingFrequency;
- (void)setMaxNodeCount:(long long)arg0;

@end
