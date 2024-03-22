//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEVideoPlayDanmakuGetResponseModel : AWEBaseApiModel {
    NSArray *_danmakuList;
    double _startTime;
    double _endTime;
    long long _statuscode;
    long long _total;
    NSString *_statusmsg;
}

@property (copy, nonatomic) NSArray *danmakuList;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) long long statuscode;
@property (nonatomic) long long total;
@property (copy, nonatomic) NSString *statusmsg;

+ (id)danmakuListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)danmakuList;
- (void)setDanmakuList:(id)arg0;
- (long long)statuscode;
- (void)setStatuscode:(long long)arg0;
- (id)statusmsg;
- (void)setStatusmsg:(id)arg0;
- (long long)total;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (double)endTime;
- (double)startTime;
- (void)setEndTime:(double)arg0;
- (void)setTotal:(long long)arg0;

@end
