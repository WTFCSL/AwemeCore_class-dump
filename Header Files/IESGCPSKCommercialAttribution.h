//
//     Generated by private class-dump
//

@class NSString, IESGCPApi;

@interface IESGCPSKCommercialAttribution : NSObject <IESGCPSKAttributionInterface> {
    IESGCPApi *_api;
}

@property (retain, nonatomic) IESGCPApi *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)attributionWithContext:(id)arg0;
- (void)validContext:(id)arg0;
- (void)reportAttributionEventForContext:(id)arg0 gamesMonitorInfo:(id)arg1;
- (void)fetch:(id)arg0 completion:(id /* block */)arg1;
- (id)requestParamsForContext:(id)arg0;
- (id)eventNameForContext:(id)arg0;
- (id)reportParamsForContext:(id)arg0 gameMonitorInfo:(id)arg1;
- (id)validLiveSceneParamsWithContext:(id)arg0;
- (id)validVideoSceneParamsWithContext:(id)arg0;
- (id)validCommercialParamsWithContext:(id)arg0;
- (void).cxx_destruct;
- (id)api;
- (void)setApi:(id)arg0;

@end
