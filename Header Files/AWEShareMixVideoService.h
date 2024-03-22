//
//     Generated by private class-dump
//

@class NSString;

@interface AWEShareMixVideoService : AWEShareCommonImpl <AWEShareMixVideo>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPanelWithMixVideo:(id)arg0 previousPage:(id)arg1 pageType:(id)arg2 currentVideo:(id)arg3 onViewController:(id)arg4;
- (void)showPanelWithMixVideo:(id)arg0 previousPage:(id)arg1 pageType:(id)arg2 currentVideo:(id)arg3 onViewController:(id)arg4 logExtraDict:(id)arg5;
- (void)showPanelWithMixVideo:(id)arg0 sceneType:(long long)arg1 previousPage:(id)arg2 pageType:(id)arg3 currentVideo:(id)arg4 onViewController:(id)arg5 logExtraDict:(id)arg6;
- (id)contextFromMixVideo:(id)arg0 pageType:(id)arg1;
- (id)statsSharePlaylistGameStage:(id)arg0;
- (id)statsShareMixVideoStage;

@end