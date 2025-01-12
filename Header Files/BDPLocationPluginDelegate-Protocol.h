//
//     Generated by private class-dump
//

@protocol BDPLocationPluginDelegate <BDPBasePluginDelegate>

@optional

- (void)bdp_requestCurrentLocationWithAccuracy:(long long)arg0 completion:(id /* block */)arg1 appId:(id)arg2 apiName:(id)arg3;
- (void)bdp_initSharedLocationManager;
- (id)bdp_locationTemporaryUsageDescriptionKey;
- (long long)bdp_getAuthorizationStatus;
- (long long)bdp_getAccuracyAuthorization;
- (void)bdp_requestAuthorizationWithCompletion:(id /* block */)arg0;
- (id)bdp_getCurrentLocationCache;
- (void)bdp_requestCurrentLocationWithCompletion:(id /* block */)arg0;
- (id)bdp_subscribeHeadlingUpdateWithBlock:(id /* block */)arg0;
- (void)bdp_unsubscribeHeadlingUpdateWithToken:(id)arg0;
- (id)bdp_subscribeLocationUpdateWithAccuracy:(long long)arg0 distanceFilter:(double)arg1 block:(id /* block */)arg2 appId:(id)arg3 apiName:(id)arg4;
- (void)bdp_unsubscribeLocationUpdateWithToken:(id)arg0;

@end
