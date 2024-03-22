//
//     Generated by private class-dump
//

@interface EAccountPreLoginConfigModel : NSObject {
    double _timeoutIntervalForResource;
    double _connectTimeoutInterval;
    double _totalTimeoutInterval;
}

@property (nonatomic) double timeoutIntervalForResource;
@property (nonatomic) double connectTimeoutInterval;
@property (nonatomic) double totalTimeoutInterval;

- (id)initWithDefaultConfig;
- (double)connectTimeoutInterval;
- (void)setConnectTimeoutInterval:(double)arg0;
- (double)totalTimeoutInterval;
- (void)setTotalTimeoutInterval:(double)arg0;
- (double)timeoutIntervalForResource;
- (void)setTimeoutIntervalForResource:(double)arg0;

@end
