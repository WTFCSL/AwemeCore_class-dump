//
//     Generated by private class-dump
//

@class NSString, NSDictionary, HGSchema;

@interface HGAppPreloadInfo : NSObject <HGAppPreloadBasicInfoProtocol> {
    BOOL _preloadAllPkgs;
    BOOL _isRetry;
    long long _type;
    long long _priority;
    long long _preloadMode;
    HGSchema *_schema;
    NSString *_appId;
    NSDictionary *_extraInfo;
    id /* block */ _loadProgressBlk;
    id /* block */ _preloadCompletion;
    id /* block */ _preloadConfigCompletion;
    unsigned long long _readType;
    unsigned long long _preloadTimingFrom;
    double _startTime;
}

@property (nonatomic) BOOL preloadAllPkgs;
@property (nonatomic) unsigned long long readType;
@property (nonatomic) unsigned long long preloadTimingFrom;
@property (nonatomic) BOOL isRetry;
@property (nonatomic) double startTime;
@property (nonatomic) long long type;
@property (nonatomic) long long priority;
@property (nonatomic) long long preloadMode;
@property (copy, nonatomic) HGSchema *schema;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) id /* block */ loadProgressBlk;
@property (copy, nonatomic) id /* block */ preloadCompletion;
@property (copy, nonatomic) id /* block */ preloadConfigCompletion;

+ (id)preloadInfoWithURL:(id)arg0 priority:(long long)arg1;
+ (id)preloadInfoWithAppId:(id)arg0 type:(long long)arg1 priority:(long long)arg2;
+ (id)preloadInfoWithAppId:(id)arg0 type:(long long)arg1 priority:(long long)arg2 preloadMode:(long long)arg3;

- (void)setExtraInfo:(id)arg0;
- (id /* block */)preloadCompletion;
- (void)setPreloadCompletion:(id /* block */)arg0;
- (id /* block */)loadProgressBlk;
- (unsigned long long)preloadTimingFrom;
- (void)setPreloadMode:(long long)arg0;
- (long long)preloadMode;
- (void)setLoadProgressBlk:(id /* block */)arg0;
- (id /* block */)preloadConfigCompletion;
- (void)setPreloadConfigCompletion:(id /* block */)arg0;
- (BOOL)preloadAllPkgs;
- (void)setPreloadAllPkgs:(BOOL)arg0;
- (void)setPreloadTimingFrom:(unsigned long long)arg0;
- (void)setSchema:(id)arg0;
- (void)setAppId:(id)arg0;
- (id)init;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (long long)type;
- (void)setPriority:(long long)arg0;
- (void)setType:(long long)arg0;
- (double)startTime;
- (id)appId;
- (id)schema;
- (long long)priority;
- (void)setIsRetry:(BOOL)arg0;
- (BOOL)isRetry;
- (unsigned long long)readType;
- (void)setReadType:(unsigned long long)arg0;
- (id)extraInfo;

@end