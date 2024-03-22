//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface HMDNetTrafficBizUsageModel : NSObject {
    NSString *_bizName;
    unsigned long long _totalUsage;
    unsigned long long _wifiBackUsage;
    unsigned long long _wifiFrontUsage;
    unsigned long long _mobileBackUsage;
    unsigned long long _mobileFrontUsage;
    NSMutableDictionary *_detailMap;
}

@property (copy, nonatomic) NSString *bizName;
@property (nonatomic) unsigned long long totalUsage;
@property (nonatomic) unsigned long long wifiBackUsage;
@property (nonatomic) unsigned long long wifiFrontUsage;
@property (nonatomic) unsigned long long mobileBackUsage;
@property (nonatomic) unsigned long long mobileFrontUsage;
@property (retain, nonatomic) NSMutableDictionary *detailMap;

- (id)bizName;
- (void)setBizName:(id)arg0;
- (id)formatGroupByBizWithNeedSource:(BOOL)arg0;
- (unsigned long long)mobileFrontUsage;
- (void)setMobileFrontUsage:(unsigned long long)arg0;
- (unsigned long long)mobileBackUsage;
- (void)setMobileBackUsage:(unsigned long long)arg0;
- (unsigned long long)wifiFrontUsage;
- (void)setWifiFrontUsage:(unsigned long long)arg0;
- (unsigned long long)wifiBackUsage;
- (void)setWifiBackUsage:(unsigned long long)arg0;
- (void)setDetailMap:(id)arg0;
- (id)detailMap;
- (id)formatSourceDetailForNetType:(unsigned long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)totalUsage;
- (void)setTotalUsage:(unsigned long long)arg0;

@end
