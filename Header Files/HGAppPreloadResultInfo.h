//
//     Generated by private class-dump
//

@class NSString;

@interface HGAppPreloadResultInfo : NSObject <NSCopying> {
    double _startTime;
    double _totalPreloadDuration;
    NSString *_resultMsg;
}

@property (nonatomic) double startTime;
@property (nonatomic) double totalPreloadDuration;
@property (copy, nonatomic) NSString *resultMsg;

- (id)resultMsg;
- (void)setResultMsg:(id)arg0;
- (void)setTotalPreloadDuration:(double)arg0;
- (double)totalPreloadDuration;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (double)startTime;

@end
