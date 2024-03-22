//
//     Generated by private class-dump
//

@class NSString;

@interface HMDNetTrafficSourceUsageModel : NSObject {
    NSString *_souceId;
    long long _executeCount;
    long long _resetTimestamp;
    unsigned long long _usageBytes;
    NSString *_business;
    unsigned long long _totalUsage;
    unsigned long long _wifiBackUsage;
    unsigned long long _wifiFrontUsage;
    unsigned long long _mobileBackUsage;
    unsigned long long _mobileFrontUsage;
}

@property (copy, nonatomic) NSString *souceId;
@property (nonatomic) long long executeCount;
@property (nonatomic) long long resetTimestamp;
@property (nonatomic) unsigned long long usageBytes;
@property (copy, nonatomic) NSString *business;
@property (nonatomic) unsigned long long totalUsage;
@property (nonatomic) unsigned long long wifiBackUsage;
@property (nonatomic) unsigned long long wifiFrontUsage;
@property (nonatomic) unsigned long long mobileBackUsage;
@property (nonatomic) unsigned long long mobileFrontUsage;

+ (id)formatNormalUsageInfosToStoredDicts:(id)arg0;
+ (id)formatHighFreqUsageInfosToStoredDicts:(id)arg0;

- (long long)resetTimestamp;
- (void)setSouceId:(id)arg0;
- (unsigned long long)mobileFrontUsage;
- (void)setMobileFrontUsage:(unsigned long long)arg0;
- (unsigned long long)mobileBackUsage;
- (void)setMobileBackUsage:(unsigned long long)arg0;
- (unsigned long long)wifiFrontUsage;
- (void)setWifiFrontUsage:(unsigned long long)arg0;
- (unsigned long long)wifiBackUsage;
- (void)setWifiBackUsage:(unsigned long long)arg0;
- (id)initWithSourceId:(id)arg0 business:(id)arg1;
- (void)addTrafficUsage:(unsigned long long)arg0 netType:(unsigned long long)arg1;
- (unsigned long long)trafficUsageWithNetType:(unsigned long long)arg0;
- (id)souceId;
- (long long)executeCount;
- (void)setExecuteCount:(long long)arg0;
- (void)setResetTimestamp:(long long)arg0;
- (void).cxx_destruct;
- (id)business;
- (void)setBusiness:(id)arg0;
- (void)setUsageBytes:(unsigned long long)arg0;
- (unsigned long long)usageBytes;
- (unsigned long long)totalUsage;
- (void)setTotalUsage:(unsigned long long)arg0;

@end
