//
//     Generated by private class-dump
//

@class NSDictionary;

@interface YataPerfMetricPendingPhase : NSObject {
    double _startTimestamp;
    NSDictionary *_extraParams;
}

@property (nonatomic) double startTimestamp;
@property (copy, nonatomic) NSDictionary *extraParams;

- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (id)initWithStartTimestamp:(double)arg0 extraParams:(id)arg1;
- (double)startTimestamp;
- (void)setStartTimestamp:(double)arg0;
- (void).cxx_destruct;

@end
