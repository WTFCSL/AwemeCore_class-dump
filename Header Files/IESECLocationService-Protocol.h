//
//     Generated by private class-dump
//

@protocol IESECLocationService <NSObject>

+ (void)removeLocationSubmitObserverForKey:(id)arg0;
+ (id)getLocationMockViewController;
+ (void)requestCurrentLocation:(long long)arg0 completion:(id /* block */)arg1;
+ (void)addLocationSubmitObserverForKey:(id)arg0 completion:(id /* block */)arg1;
+ (BOOL)hasPermission;

@end