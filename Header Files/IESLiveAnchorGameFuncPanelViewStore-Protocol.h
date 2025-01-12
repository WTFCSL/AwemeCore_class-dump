//
//     Generated by private class-dump
//

@class NSDictionary, NSArray;

@protocol IESLiveAnchorGameFuncPanelViewStore <NSObject>

@property (readonly, nonatomic) BOOL fetchInteractiveGameListSuccessed;
@property (readonly, copy, nonatomic) NSDictionary *groupPropertyDic;
@property (readonly, copy, nonatomic) NSArray *groupOrderArr;
@property (readonly, copy, nonatomic) NSArray *sectionOrderArr;
@property (readonly, copy, nonatomic) NSArray *gameModels;
@property (readonly, copy, nonatomic) NSArray *gameModelsInCurrentScene;
@property (readonly, nonatomic) unsigned long long scene;

- (void)updateScene:(unsigned long long)arg0;
- (id)groupPropertyDic;
- (id)groupOrderArr;
- (id)sectionOrderArr;
- (id)gameModelsInCurrentScene;
- (id)gameModels;
- (void)loadCacheInteractiveGameListWithCompletion:(id /* block */)arg0;
- (void)fetchInteractiveGameListWithCompletion:(id /* block */)arg0;
- (void)updateInteractiveGameListWithCompletion:(id /* block */)arg0;
- (BOOL)fetchInteractiveGameListSuccessed;
- (unsigned long long)scene;

@end
