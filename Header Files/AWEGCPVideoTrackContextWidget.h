//
//     Generated by private class-dump
//

@class NSString;

@interface AWEGCPVideoTrackContextWidget : IESGCPBaseWidget <IESGCPTrackContextProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (void)widgetBindService;
- (id)provideTrackContext;

@end