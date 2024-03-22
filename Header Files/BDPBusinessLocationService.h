//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface BDPBusinessLocationService : NSObject <BDPBusinessLocationService, BDPLocationManagerDelegate, BDPAPIMetricsReporterDelegate, BDPContainerLifeCycleMessage> {
    NSMutableDictionary *_getLocationResultMap;
}

@property (retain, nonatomic) NSMutableDictionary *getLocationResultMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)applicationExitWithUniqueID:(id)arg0;
- (id)initService;
- (void)onReportMetrics:(id)arg0 uniqueID:(id)arg1;
- (void)getPlaceWithCoord:(struct CLLocationCoordinate2D { double x0; double x1; })arg0 completion:(id /* block */)arg1;
- (BOOL)isAppCanUseHighAccuracyLocation:(id)arg0;
- (void)recordGetLocationApiResultInfo:(id)arg0 callbackId:(id)arg1 uniqueID:(id)arg2;
- (void)setGetLocationResultMap:(id)arg0;
- (id)onPoiPlaceResolve:(id)arg0;
- (id)getLocationResultMap;
- (void)onStartUpdatingLocation;
- (void)onStopUpdatingLocation:(id)arg0;
- (void).cxx_destruct;

@end