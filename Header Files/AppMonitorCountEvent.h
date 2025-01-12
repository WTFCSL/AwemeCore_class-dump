//
//     Generated by private class-dump
//

@interface AppMonitorCountEvent : AppMonitorEvent {
    long long _count;
    double _value;
}

@property (nonatomic) long long count;
@property (nonatomic) double value;

- (id)initWithEventId:(id)arg0 module:(id)arg1 monitorPoint:(id)arg2;
- (void)setCount:(long long)arg0;
- (double)value;
- (id)jsonDict;
- (long long)count;
- (void)setValue:(double)arg0;
- (void)addValue:(double)arg0;

@end
