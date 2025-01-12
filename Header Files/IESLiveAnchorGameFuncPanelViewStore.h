//
//     Generated by private class-dump
//

@class IESLiveAnchorGameFuncPanelCache, NSArray, NSDictionary, NSString, IESLiveAnchorGameFuncPanelAPI;

@interface IESLiveAnchorGameFuncPanelViewStore : NSObject <IESLiveAnchorGameFuncPanelViewStore> {
    BOOL _fetchInteractiveGameListSuccessed;
    IESLiveAnchorGameFuncPanelAPI *_api;
    NSDictionary *_groupPropertyDic;
    NSArray *_groupOrderArr;
    NSArray *_sectionOrderArr;
    NSArray *_gameModels;
    NSArray *_gameModelsInCurrentScene;
    NSString *_interactEntranceHash;
    unsigned long long _scene;
    IESLiveAnchorGameFuncPanelCache *_cache;
}

@property (retain, nonatomic) IESLiveAnchorGameFuncPanelAPI *api;
@property (nonatomic) BOOL fetchInteractiveGameListSuccessed;
@property (copy, nonatomic) NSDictionary *groupPropertyDic;
@property (copy, nonatomic) NSArray *groupOrderArr;
@property (copy, nonatomic) NSArray *sectionOrderArr;
@property (copy, nonatomic) NSArray *gameModels;
@property (copy, nonatomic) NSArray *gameModelsInCurrentScene;
@property (copy, nonatomic) NSString *interactEntranceHash;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) IESLiveAnchorGameFuncPanelCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)updateScene:(unsigned long long)arg0;
- (void)setGroupOrderArr:(id)arg0;
- (void)setGroupPropertyDic:(id)arg0;
- (void)setSectionOrderArr:(id)arg0;
- (id)groupPropertyDic;
- (id)groupOrderArr;
- (id)sectionOrderArr;
- (id)gameModelsInCurrentScene;
- (id)gameModels;
- (void)loadCacheInteractiveGameListWithCompletion:(id /* block */)arg0;
- (void)fetchInteractiveGameListWithCompletion:(id /* block */)arg0;
- (void)updateInteractiveGameListWithCompletion:(id /* block */)arg0;
- (BOOL)fetchInteractiveGameListSuccessed;
- (void)setInteractEntranceHash:(id)arg0;
- (void)p_handleLoadCacheInteractiveGameList:(id)arg0 completion:(id /* block */)arg1;
- (id)interactEntranceHash;
- (void)setFetchInteractiveGameListSuccessed:(BOOL)arg0;
- (void)p_handleFetchInteractiveGameList:(id)arg0 completion:(id /* block */)arg1;
- (void)p_handleUpdateInteractiveGameList:(id)arg0 completion:(id /* block */)arg1;
- (void)setGameModels:(id)arg0;
- (void)setGameModelsInCurrentScene:(id)arg0;
- (void)setCache:(id)arg0;
- (id)cache;
- (void)setScene:(unsigned long long)arg0;
- (void).cxx_destruct;
- (unsigned long long)scene;
- (id)api;
- (void)setApi:(id)arg0;

@end
