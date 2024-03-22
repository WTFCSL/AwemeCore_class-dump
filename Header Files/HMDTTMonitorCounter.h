//
//     Generated by private class-dump
//

@class NSString;

@interface HMDTTMonitorCounter : NSObject {
    struct EventCounter { _Atomic long long x0; _Atomic long long x1; } *_counter;
    BOOL _isRunning;
    NSString *_appID;
}

@property (nonatomic) BOOL isRunning;
@property (copy, nonatomic) NSString *appID;

+ (id)infoPathWithAppID:(id)arg0;

- (void)resetSequenceCode;
- (id)initCounterWithAppID:(id)arg0;
- (long long)generateUniqueCode;
- (void)setIsRunning:(BOOL)arg0;
- (BOOL)isRunning;
- (void)setAppID:(id)arg0;
- (void).cxx_destruct;
- (id)appID;
- (long long)generateSequenceNumber;

@end
