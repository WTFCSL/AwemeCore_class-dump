//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, NSMutableDictionary;

@interface TSPKStatisticModel : NSObject {
    NSString *_key;
    long long _count;
    double _timestamp;
    NSMutableArray *_timeDifferenceArray;
    NSMutableDictionary *_hostStates;
    long long _startTime;
    long long _endTime;
    long long _timeCountDown;
    NSMutableArray *_bpeaCertToken;
}

@property (copy, nonatomic) NSString *key;
@property (nonatomic) long long count;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSMutableArray *timeDifferenceArray;
@property (retain, nonatomic) NSMutableDictionary *hostStates;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) long long timeCountDown;
@property (retain, nonatomic) NSMutableArray *bpeaCertToken;

- (long long)timeCountDown;
- (id)hostStates;
- (id)timeDifferenceArray;
- (id)bpeaCertToken;
- (void)setTimeCountDown:(long long)arg0;
- (void)setTimeDifferenceArray:(id)arg0;
- (void)setHostStates:(id)arg0;
- (void)setBpeaCertToken:(id)arg0;
- (void)setCount:(long long)arg0;
- (id)key;
- (void)setStartTime:(long long)arg0;
- (double)timestamp;
- (void).cxx_destruct;
- (long long)endTime;
- (void)setKey:(id)arg0;
- (long long)count;
- (long long)startTime;
- (void)setTimestamp:(double)arg0;
- (void)setEndTime:(long long)arg0;

@end
