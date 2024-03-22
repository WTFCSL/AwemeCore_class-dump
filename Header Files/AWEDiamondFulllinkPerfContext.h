//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEDiamondFulllinkPerfContext : NSObject {
    BOOL _needDelayCount;
    BOOL _useCache;
    BOOL _usePreRequest;
    BOOL _hasExposeCard;
    BOOL _preloadResourceResult;
    long long _phase;
    double _triggerTs;
    long long _settingsTriggerScene;
    double _requestStartTs;
    double _requestStartDateTs;
    double _settingsRequestDuration;
    double _binaryToJsonDuration;
    double _jsonToModelDuration;
    double _didFinishRequestTs;
    double _sdkWillProcessTs;
    double _sdkFmpDuration;
    NSArray *_elementIDs;
    NSArray *_reuseElementIDs;
    double _sdkDidFinishProcssTs;
    double _endTs;
    long long _cacheStrategy;
    unsigned long long _rowType;
    long long _pageType;
}

@property (nonatomic) long long phase;
@property (nonatomic) double triggerTs;
@property (nonatomic) long long settingsTriggerScene;
@property (nonatomic) BOOL needDelayCount;
@property (nonatomic) double requestStartTs;
@property (nonatomic) double requestStartDateTs;
@property (nonatomic) double settingsRequestDuration;
@property (nonatomic) double binaryToJsonDuration;
@property (nonatomic) double jsonToModelDuration;
@property (nonatomic) double didFinishRequestTs;
@property (nonatomic) double sdkWillProcessTs;
@property (nonatomic) double sdkFmpDuration;
@property (copy, nonatomic) NSArray *elementIDs;
@property (copy, nonatomic) NSArray *reuseElementIDs;
@property (nonatomic) double sdkDidFinishProcssTs;
@property (nonatomic) double endTs;
@property (nonatomic) BOOL useCache;
@property (nonatomic) BOOL usePreRequest;
@property (nonatomic) BOOL hasExposeCard;
@property (nonatomic) BOOL preloadResourceResult;
@property (nonatomic) long long cacheStrategy;
@property (nonatomic) unsigned long long rowType;
@property (nonatomic) long long pageType;

- (double)endTs;
- (void)setEndTs:(double)arg0;
- (double)triggerTs;
- (double)didFinishRequestTs;
- (double)sdkWillProcessTs;
- (id)elementIDs;
- (id)reuseElementIDs;
- (double)sdkDidFinishProcssTs;
- (double)sdkFmpDuration;
- (BOOL)usePreRequest;
- (BOOL)hasExposeCard;
- (void)setTriggerTs:(double)arg0;
- (long long)settingsTriggerScene;
- (void)setSettingsTriggerScene:(long long)arg0;
- (BOOL)needDelayCount;
- (void)setNeedDelayCount:(BOOL)arg0;
- (double)requestStartDateTs;
- (void)setRequestStartDateTs:(double)arg0;
- (double)settingsRequestDuration;
- (void)setSettingsRequestDuration:(double)arg0;
- (double)binaryToJsonDuration;
- (void)setBinaryToJsonDuration:(double)arg0;
- (double)jsonToModelDuration;
- (void)setJsonToModelDuration:(double)arg0;
- (void)setDidFinishRequestTs:(double)arg0;
- (void)setSdkWillProcessTs:(double)arg0;
- (void)setSdkFmpDuration:(double)arg0;
- (void)setElementIDs:(id)arg0;
- (void)setReuseElementIDs:(id)arg0;
- (void)setSdkDidFinishProcssTs:(double)arg0;
- (void)setUsePreRequest:(BOOL)arg0;
- (void)setHasExposeCard:(BOOL)arg0;
- (BOOL)preloadResourceResult;
- (void)setPreloadResourceResult:(BOOL)arg0;
- (long long)pageType;
- (void)setPhase:(long long)arg0;
- (long long)phase;
- (id)dictRepresentation;
- (void).cxx_destruct;
- (void)setPageType:(long long)arg0;
- (BOOL)useCache;
- (void)setUseCache:(BOOL)arg0;
- (unsigned long long)rowType;
- (void)setRowType:(unsigned long long)arg0;
- (long long)cacheStrategy;
- (void)setCacheStrategy:(long long)arg0;
- (double)requestStartTs;
- (void)setRequestStartTs:(double)arg0;

@end
