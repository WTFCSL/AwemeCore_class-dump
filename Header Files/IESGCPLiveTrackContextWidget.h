//
//     Generated by private class-dump
//

@class NSString;

@interface IESGCPLiveTrackContextWidget : IESGCPBaseWidget <IESGCPTrackContextProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)widgetBindService;
- (id)provideTrackContext;

@end
