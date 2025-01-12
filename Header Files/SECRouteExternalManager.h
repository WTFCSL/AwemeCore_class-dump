//
//     Generated by private class-dump
//

@class NSString, SECRouteTrace;

@interface SECRouteExternalManager : NSObject <SECRouteExternalTrafficControl> {
    BOOL enabled;
    SECRouteTrace *_buffer;
}

@property (retain, nonatomic) SECRouteTrace *buffer;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)SQRIDWithURLString:(id)arg0;

- (id)recordCheckinTraffic:(id)arg0 withBizToken:(id)arg1;
- (id)recordCheckoutTraffic:(id)arg0 withBizToken:(id)arg1;
- (BOOL)hostAndPathisEqual:(id)arg0 with:(id)arg1;
- (id)tryToConsumeTraffic:(id)arg0;
- (id)checkin:(id)arg0 withBizToken:(id)arg1;
- (id)checkout:(id)arg0 withBizToken:(id)arg1;
- (void)trafficDidTerminated:(id)arg0 withBizToken:(id)arg1;
- (BOOL)enabled;
- (void).cxx_destruct;
- (void)setBuffer:(id)arg0;
- (void)setEnabled:(BOOL)arg0;
- (id)buffer;

@end
