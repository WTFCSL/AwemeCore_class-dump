//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSCondition;

@interface AWENearbyThrottleUtilManager : NSObject {
    NSMutableDictionary *_throttleKeyDic;
    NSCondition *_throttleLock;
}

@property (retain, nonatomic) NSMutableDictionary *throttleKeyDic;
@property (retain, nonatomic) NSCondition *throttleLock;

+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (BOOL)isFunctionCanCall:(unsigned long long)arg0 object:(id)arg1 sel:(SEL)arg2 timeInterval:(long long)arg3;
- (id)throttleLock;
- (id)throttleKeyDic;
- (double)getNowTime;
- (BOOL)throllteLeadingWithKey:(id)arg0 timeInterval:(long long)arg1;
- (BOOL)debounceLeadingWithKey:(id)arg0 timeInterval:(long long)arg1;
- (void)setThrottleKeyDic:(id)arg0;
- (void)setThrottleLock:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;

@end
