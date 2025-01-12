//
//     Generated by private class-dump
//

@class NSError;

@interface AWESkyLightMonitorMessage : NSObject {
    long long _action;
    NSError *_queryError;
    double _queryStartTime;
    double _queryEndTime;
    double _renderEndTime;
}

@property (nonatomic) long long action;
@property (retain, nonatomic) NSError *queryError;
@property (nonatomic) double queryStartTime;
@property (nonatomic) double queryEndTime;
@property (nonatomic) double renderEndTime;

- (id)queryError;
- (void)setQueryError:(id)arg0;
- (double)queryStartTime;
- (void)setQueryStartTime:(double)arg0;
- (double)queryEndTime;
- (void)setQueryEndTime:(double)arg0;
- (void).cxx_destruct;
- (void)setAction:(long long)arg0;
- (long long)action;
- (double)renderEndTime;
- (void)setRenderEndTime:(double)arg0;

@end
