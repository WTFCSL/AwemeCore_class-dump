//
//     Generated by private class-dump
//

@class NSString;

@interface BDPBootRouteInfoRecord : NSObject {
    BOOL _needReportLaunchLCP;
    BOOL _needReportLaunchFP;
    NSString *_routeID;
    long long _routeCount;
}

@property (retain, nonatomic) NSString *routeID;
@property (nonatomic) BOOL needReportLaunchLCP;
@property (nonatomic) BOOL needReportLaunchFP;
@property (nonatomic) long long routeCount;

- (long long)routeCount;
- (void)setRouteCount:(long long)arg0;
- (BOOL)needReportLaunchLCP;
- (void)setNeedReportLaunchLCP:(BOOL)arg0;
- (void)setNeedReportLaunchFP:(BOOL)arg0;
- (BOOL)needReportLaunchFP;
- (id)routeID;
- (void).cxx_destruct;
- (void)setRouteID:(id)arg0;
- (id)initWithRouteID:(id)arg0;

@end