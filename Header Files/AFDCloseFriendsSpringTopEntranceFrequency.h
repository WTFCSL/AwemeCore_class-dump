//
//     Generated by private class-dump
//

@class NSMutableDictionary, AFDFrequencyCountRule;

@interface AFDCloseFriendsSpringTopEntranceFrequency : NSObject {
    unsigned long long _entranceType;
    unsigned long long _userType;
    AFDFrequencyCountRule *_realUltraRule;
    AFDFrequencyCountRule *_realStrongRule;
    NSMutableDictionary *_strongFrequencyRecord;
}

@property (nonatomic) unsigned long long entranceType;
@property (nonatomic) unsigned long long userType;
@property (retain, nonatomic) AFDFrequencyCountRule *realUltraRule;
@property (retain, nonatomic) AFDFrequencyCountRule *realStrongRule;
@property (retain, nonatomic) NSMutableDictionary *strongFrequencyRecord;

+ (id)getStrongFrequencyRecordDict;

- (void)addCount;
- (unsigned long long)entranceType;
- (void)setEntranceType:(unsigned long long)arg0;
- (void)setupWithStrongConfig;
- (void)setupWithUltraConfig;
- (void)setStrongFrequencyRecord:(id)arg0;
- (void)ultraAddCount;
- (void)strongAddCount;
- (BOOL)ultraAvailable;
- (BOOL)strongAvailable;
- (void)ultraReset;
- (void)strongReset;
- (void)setRealStrongRule:(id)arg0;
- (void)setRealUltraRule:(id)arg0;
- (id)realUltraRule;
- (id)strongFrequencyRecord;
- (id)realStrongRule;
- (id)initWithEntranceType:(unsigned long long)arg0 userType:(unsigned long long)arg1;
- (unsigned long long)userType;
- (BOOL)available;
- (void).cxx_destruct;
- (void)reset;
- (void)setUserType:(unsigned long long)arg0;

@end