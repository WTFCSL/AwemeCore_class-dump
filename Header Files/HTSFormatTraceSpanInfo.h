//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface HTSFormatTraceSpanInfo : NSObject {
    BOOL _isFinished;
    unsigned long long _span;
    double _startTime;
    double _endTime;
    NSMutableDictionary *_extraParams;
}

@property (retain, nonatomic) NSMutableDictionary *extraParams;
@property (nonatomic) unsigned long long span;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL isFinished;

- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (void)resetSpan;
- (void)appendExtraParams:(id)arg0;
- (id)getExtraParams;
- (void)setStartTime:(double)arg0 callTrace:(id)arg1;
- (void)setEndTime:(double)arg0 callTrace:(id)arg1;
- (void)setIsFinished:(BOOL)arg0 callTrace:(id)arg1;
- (BOOL)isFinished;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (BOOL)valid;
- (double)endTime;
- (double)startTime;
- (void)setEndTime:(double)arg0;
- (unsigned long long)span;
- (void)setIsFinished:(BOOL)arg0;
- (id)initWithSpan:(unsigned long long)arg0;
- (void)setSpan:(unsigned long long)arg0;

@end
