//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface HMDNetTrafficNetTypeUsageModel : NSObject {
    unsigned long long _netType;
    long long _totalUsage;
    NSString *_netTypeName;
    NSMutableArray *_bizUsage;
}

@property (retain, nonatomic) NSMutableArray *bizUsage;
@property (copy, nonatomic) NSString *netTypeName;
@property (nonatomic) unsigned long long netType;
@property (nonatomic) long long totalUsage;

+ (id)newModelWithNetType:(unsigned long long)arg0;

- (void)setNetType:(unsigned long long)arg0;
- (void)setNetTypeName:(id)arg0;
- (id)bizUsage;
- (id)netTypeName;
- (void)setBizUsage:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)netType;
- (long long)totalUsage;
- (void)setTotalUsage:(long long)arg0;

@end
