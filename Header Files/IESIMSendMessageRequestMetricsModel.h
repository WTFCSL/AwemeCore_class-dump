//
//     Generated by private class-dump
//

@class NSString;

@interface IESIMSendMessageRequestMetricsModel : NSObject {
    double _startTimestamp;
    double _endTimestamp;
    NSString *_method;
}

@property (nonatomic) double startTimestamp;
@property (nonatomic) double endTimestamp;
@property (copy, nonatomic) NSString *method;

- (double)startTimestamp;
- (double)endTimestamp;
- (void)setStartTimestamp:(double)arg0;
- (void).cxx_destruct;
- (id)method;
- (void)setMethod:(id)arg0;
- (void)setEndTimestamp:(double)arg0;

@end
