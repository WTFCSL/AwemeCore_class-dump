//
//     Generated by private class-dump
//

@class NSArray, HMDHermasCleanupSetting;

@interface HMDCleanupConfig : NSObject {
    double _outdatedTimestamp;
    unsigned long long _maxSessionCount;
    double _maxRemainDays;
    NSArray *_andConditions;
    unsigned long long _expectedDBSize;
    unsigned long long _devastateDBSize;
    HMDHermasCleanupSetting *_hermasCleanupSetting;
}

@property double outdatedTimestamp;
@property (nonatomic) unsigned long long maxSessionCount;
@property (nonatomic) double maxRemainDays;
@property (retain) NSArray *andConditions;
@property (nonatomic) unsigned long long expectedDBSize;
@property (nonatomic) unsigned long long devastateDBSize;
@property (retain, nonatomic) HMDHermasCleanupSetting *hermasCleanupSetting;

+ (id)hmd_attributeMapDictionary;

- (id)andConditions;
- (void)setAndConditions:(id)arg0;
- (unsigned long long)expectedDBSize;
- (id)hermasCleanupSetting;
- (double)outdatedTimestamp;
- (unsigned long long)devastateDBSize;
- (void)setOutdatedTimestamp:(double)arg0;
- (unsigned long long)maxSessionCount;
- (void)setMaxSessionCount:(unsigned long long)arg0;
- (double)maxRemainDays;
- (void)setMaxRemainDays:(double)arg0;
- (void)setExpectedDBSize:(unsigned long long)arg0;
- (void)setDevastateDBSize:(unsigned long long)arg0;
- (void)setHermasCleanupSetting:(id)arg0;
- (void).cxx_destruct;

@end
