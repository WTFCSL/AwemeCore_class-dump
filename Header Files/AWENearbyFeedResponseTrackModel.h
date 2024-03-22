//
//     Generated by private class-dump
//

@class NSDictionary, AWENearbyListDataResponse;

@interface AWENearbyFeedResponseTrackModel : NSObject {
    BOOL _isPreRequest;
    AWENearbyListDataResponse *_model;
    NSDictionary *_params;
    long long _pullType;
    double _requestDataTime;
    double _requestDuration;
    double _requestStartTime;
    double _requestParamsDuration;
}

@property (retain, nonatomic) AWENearbyListDataResponse *model;
@property (retain, nonatomic) NSDictionary *params;
@property (nonatomic) long long pullType;
@property (nonatomic) BOOL isPreRequest;
@property (nonatomic) double requestDataTime;
@property (nonatomic) double requestDuration;
@property (nonatomic) double requestStartTime;
@property (nonatomic) double requestParamsDuration;

- (long long)pullType;
- (void)setPullType:(long long)arg0;
- (void)setIsPreRequest:(BOOL)arg0;
- (void)setRequestDataTime:(double)arg0;
- (void)setRequestParamsDuration:(double)arg0;
- (BOOL)isPreRequest;
- (double)requestDataTime;
- (double)requestParamsDuration;
- (double)requestStartTime;
- (void)setModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)model;
- (void)setRequestStartTime:(double)arg0;
- (id)params;
- (double)requestDuration;
- (void)setParams:(id)arg0;
- (void)setRequestDuration:(double)arg0;

@end