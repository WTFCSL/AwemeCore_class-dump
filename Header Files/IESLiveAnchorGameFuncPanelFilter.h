//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveAnchorGameFuncPanelFilter : NSObject <IESLiveAnchorGameFuncPanelFilter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)filterGameListModel:(id)arg0 completion:(id /* block */)arg1;
- (id)filterGameModelsInCurrentScene:(id)arg0;
- (id)filterRecentlyUsedGameModels:(id)arg0 validGameModels:(id)arg1;
- (id)filterRecentlyUsedGameModels:(id)arg0 maxCount:(long long)arg1;
- (void)p_processInteractiveList:(id)arg0 completion:(id /* block */)arg1;
- (id)p_sortByRankWithGameModels:(id)arg0;
- (id)p_filterMiniPluginGameModelListInCurrentScene:(id)arg0;

@end
