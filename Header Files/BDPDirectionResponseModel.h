//
//     Generated by private class-dump
//

@class NSString, BDPRouteModel;

@interface BDPDirectionResponseModel : NSObject {
    NSString *_status;
    double _roure;
    double _count;
    BDPRouteModel *_route;
}

@property (copy, nonatomic) NSString *status;
@property (nonatomic) double roure;
@property (nonatomic) double count;
@property (retain, nonatomic) BDPRouteModel *route;

- (double)roure;
- (void)setRoure:(double)arg0;
- (void)setCount:(double)arg0;
- (void).cxx_destruct;
- (id)route;
- (id)status;
- (void)setRoute:(id)arg0;
- (double)count;
- (void)setStatus:(id)arg0;

@end
