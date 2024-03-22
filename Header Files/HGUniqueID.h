//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface HGUniqueID : NSObject <NSCopying> {
    BOOL _isHostBG;
    BOOL _is_oom;
    BOOL _js_lock_count;
    BOOL _is_js_crashed;
    NSString *_appID;
    NSString *_fullString;
    NSString *_versionType;
    double _startTime;
    double _startCPU;
    double _startMemory;
    long long _ad_show_count;
    long long _shared_count;
    long long _record_count;
    long long _rtc_engine_count;
    long long _warm_cache_count;
    unsigned long long _loadResultType;
    NSDictionary *_commonData;
}

@property (readonly, nonatomic) unsigned long long loaderLogId;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *fullString;
@property (copy, nonatomic) NSString *versionType;
@property (nonatomic) double startTime;
@property (nonatomic) double startCPU;
@property (nonatomic) double startMemory;
@property (nonatomic) BOOL isHostBG;
@property (nonatomic) BOOL is_oom;
@property (nonatomic) BOOL js_lock_count;
@property (nonatomic) BOOL is_js_crashed;
@property (nonatomic) long long ad_show_count;
@property (nonatomic) long long shared_count;
@property (nonatomic) long long record_count;
@property (nonatomic) long long rtc_engine_count;
@property (nonatomic) long long warm_cache_count;
@property (nonatomic) unsigned long long loadResultType;
@property (copy, nonatomic) NSDictionary *commonData;

+ (id)convertToHGUniqueID:(id)arg0;
+ (id)convertToBDPUniqueID:(id)arg0;
+ (void)initialize;

- (void)setCommonData:(id)arg0;
- (id)initWithAppID:(id)arg0;
- (void)setLoadResultType:(unsigned long long)arg0;
- (id)versionType;
- (id)initWithAppID:(id)arg0 versionType:(id)arg1;
- (unsigned long long)loadResultType;
- (void)setIsHostBG:(BOOL)arg0;
- (void)setIs_oom:(BOOL)arg0;
- (void)setVersionType:(id)arg0;
- (void)storeCommonData:(id)arg0;
- (BOOL)js_lock_count;
- (void)setJs_lock_count:(BOOL)arg0;
- (long long)rtc_engine_count;
- (void)setRtc_engine_count:(long long)arg0;
- (long long)shared_count;
- (void)setShared_count:(long long)arg0;
- (long long)record_count;
- (void)setRecord_count:(long long)arg0;
- (void)setIs_js_crashed:(BOOL)arg0;
- (void)setStartCPU:(double)arg0;
- (void)setStartMemory:(double)arg0;
- (BOOL)isHostBG;
- (BOOL)is_oom;
- (BOOL)is_js_crashed;
- (id)commonData;
- (long long)ad_show_count;
- (double)startCPU;
- (double)startMemory;
- (void)setAd_show_count:(long long)arg0;
- (unsigned long long)loaderLogId;
- (void)setFullString:(id)arg0;
- (long long)warm_cache_count;
- (void)setWarm_cache_count:(long long)arg0;
- (void)setAppID:(id)arg0;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)appID;
- (double)startTime;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;
- (id)description;
- (id)fullString;

@end