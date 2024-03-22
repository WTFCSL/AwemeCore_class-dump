//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface ECOMTIMTrackEvent : NSObject {
    NSString *_identifier;
    NSMutableDictionary *_userInfo;
}

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableDictionary *userInfo;

- (long long)timeWithKey:(id)arg0;
- (void)logBeginTime;
- (void)logEndTime;
- (void)logCurrentTimeWithKey:(id)arg0;
- (long long)timeIntervalWithBeginKey:(id)arg0 endKey:(id)arg1;
- (long long)countWithKey:(id)arg0;
- (long long)addCountWithKey:(id)arg0 count:(long long)arg1;
- (id)init;
- (long long)timeInterval;
- (void).cxx_destruct;
- (void)setUserInfo:(id)arg0;
- (id)identifier;
- (long long)endTime;
- (id)userInfo;
- (long long)beginTime;
- (void)setIdentifier:(id)arg0;

@end
