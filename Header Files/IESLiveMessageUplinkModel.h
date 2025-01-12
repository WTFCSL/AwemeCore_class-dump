//
//     Generated by private class-dump
//

@class HTSLiveUplinkPacket;

@interface IESLiveMessageUplinkModel : NSObject {
    HTSLiveUplinkPacket *_reqPacket;
    id /* block */ _completion;
    long long _routeServiceId;
    double _timeout;
    double _createTime;
}

@property (retain, nonatomic) HTSLiveUplinkPacket *reqPacket;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) long long routeServiceId;
@property (nonatomic) double timeout;
@property (nonatomic) double createTime;

- (long long)routeServiceId;
- (void)setRouteServiceId:(long long)arg0;
- (id)reqPacket;
- (void)setReqPacket:(id)arg0;
- (BOOL)isTimeoutRequest;
- (id)init;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (void)setCreateTime:(double)arg0;
- (double)timeout;
- (double)createTime;
- (void)setTimeout:(double)arg0;

@end
