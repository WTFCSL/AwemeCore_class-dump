//
//     Generated by private class-dump
//

@class NSString;

@interface IESGCPCommercialWidget : IESGCPBaseWidget <IESGCPCommercialRouter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)widgetBindService;
- (void)openCommercialLandingPageWithExtraParams:(id)arg0 style:(long long)arg1;
- (BOOL)hasCommercialLandingPageInfo;
- (id)getCommercialLandingPageSchemaWithExtraParams:(id)arg0 style:(long long)arg1;

@end
