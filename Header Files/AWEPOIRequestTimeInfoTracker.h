//
//     Generated by private class-dump
//

@class NSString, TTHttpResponseTimingInfo, NSDate;

@interface AWEPOIRequestTimeInfoTracker : NSObject {
    NSString *_path;
    NSDate *_startTime;
    TTHttpResponseTimingInfo *_timingInfo;
}

@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) TTHttpResponseTimingInfo *timingInfo;

- (void)markStartRequest;
- (void)markGetResponseWithTimingInfo:(id)arg0;
- (void)setPath:(id)arg0;
- (id)initWithPath:(id)arg0;
- (void)setStartTime:(id)arg0;
- (void).cxx_destruct;
- (id)path;
- (id)startTime;
- (id)timingInfo;
- (void)setTimingInfo:(id)arg0;

@end
