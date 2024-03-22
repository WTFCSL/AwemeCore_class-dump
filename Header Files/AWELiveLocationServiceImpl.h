//
//     Generated by private class-dump
//

@class NSString;

@interface AWELiveLocationServiceImpl : NSObject <IESLiveLocationService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasSystemPermission;
- (void)requestLocationWithPrivacyHybridCert:(id)arg0 withContext:(id)arg1 completion:(id /* block */)arg2;
- (void)requestLocationWithPrivacyCert:(id)arg0 completion:(id /* block */)arg1;
- (void)requestLocationNewWithPrivacyCert:(id)arg0 completion:(id /* block */)arg1;
- (id)currentCityCodeWithPrivacyCert:(id)arg0;
- (id)currentLocationWithPrivacyCert:(id)arg0;
- (id)currentSelectCityName;
- (id)currentSelectCityCode;
- (void)requestCurrentLocationWithCert:(id)arg0 authToken:(id)arg1 completion:(id /* block */)arg2;

@end