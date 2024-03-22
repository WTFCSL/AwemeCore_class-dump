//
//     Generated by private class-dump
//

@class NSString;
@protocol IESGCPNetworkQualityInfoService, IESGCPLocationService, IESGCPLanguageService, IESGCPHTTPClient;

@interface IESGCPHTTPClientWrapper : NSObject <IESGCPHTTPClient> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _wrLock;
    id<IESGCPHTTPClient> _client;
    id<IESGCPLanguageService> _languageService;
    id<IESGCPLocationService> _locationService;
    id<IESGCPNetworkQualityInfoService> _networkQualityInfoService;
}

@property (retain, nonatomic) id<IESGCPHTTPClient> client;
@property (retain, nonatomic) id<IESGCPLanguageService> languageService;
@property (retain, nonatomic) id<IESGCPLocationService> locationService;
@property (retain, nonatomic) id<IESGCPNetworkQualityInfoService> networkQualityInfoService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (id)locationService;
- (id)requestIdForResponseObj:(id)arg0;
- (id)logIDForResponseObj:(id)arg0;
- (id)requestWithParamsModel:(id)arg0;
- (id)handleError:(id)arg0 withResponseObj:(id)arg1;
- (id)headerByTint:(id)arg0;
- (id)postForJSON:(id)arg0 parameters:(id)arg1 headerFields:(id)arg2 completion:(id /* block */)arg3;
- (id)get:(id)arg0 parameters:(id)arg1 headerFields:(id)arg2 completion:(id /* block */)arg3;
- (id)post:(id)arg0 parameters:(id)arg1 headerFields:(id)arg2 completion:(id /* block */)arg3;
- (id)languageService;
- (void)setLanguageService:(id)arg0;
- (void)setLocationService:(id)arg0;
- (id)buildSafeCommonParamsWithUrlString:(id)arg0;
- (void)setMainThreadParams:(id)arg0;
- (id)mainThreadParams;
- (id)networkQualityInfoService;
- (void)setNetworkQualityInfoService:(id)arg0;
- (void).cxx_destruct;
- (void)setClient:(id)arg0;
- (id)client;

@end