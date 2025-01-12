//
//     Generated by private class-dump
//

@class NSString, IESGCPHeliumGameApi;

@interface IESGCPHeliumGameGlobalInterfaceProvider : NSObject <IESGCPHeliumGameGlobalInterface> {
    IESGCPHeliumGameApi *_api;
}

@property (retain, nonatomic) IESGCPHeliumGameApi *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openHeliumGameWithRouterModel:(id)arg0;
- (id)openDetailPageSchemaWithGameId:(id)arg0;
- (id)heliumGameCommonTrackParamsWithPromoteScene:(unsigned long long)arg0;
- (void)preloadHeliumGameWithSchema:(id)arg0;
- (BOOL)supportPreload;
- (void)_trueOpenGameWithRouterModel:(id)arg0;
- (void)_recordHeliumGameOpenedWithRouterModel:(id)arg0;
- (id)_timorBdpLogWithRouterModel:(id)arg0;
- (void).cxx_destruct;
- (id)api;
- (void)setApi:(id)arg0;

@end
