//
//     Generated by private class-dump
//

@class HybridContext, NSString, PuzzleContextExtraModel, NSArray, PuzzleHybridFullLinkMonitor, NSDictionary, PuzzleBeanFactory, NSMapTable, NSNumber;

@interface PuzzleContext : NSObject {
    BOOL _enableAnnieXContainerCard;
    BOOL _disableAnnieXCardViewDidUpdate;
    BOOL _enableAnnieXPreCreate;
    BOOL _onlyUseXBridgeStandardMethods;
    NSString *_initialURLString;
    NSString *_schema;
    NSString *_virtualAid;
    NSArray *_globalPropsBlockList;
    NSDictionary *_customGlobalProps;
    NSDictionary *_initialData;
    NSDictionary *_routerParam;
    NSString *_kitViewScene;
    NSDictionary *_trackerParam;
    PuzzleHybridFullLinkMonitor *_hybridFullLinkMonitor;
    PuzzleContextExtraModel *_extraModel;
    NSNumber *_secLinkV2Mode;
    PuzzleBeanFactory *_bean;
    HybridContext *_hybridContext;
    id /* block */ _needIntercept;
    id /* block */ _puzzlePopupAnimationBlock;
    NSMapTable *_weakObjects;
    NSMapTable *_strongObjects;
}

@property (retain, nonatomic) NSString *latchID;
@property (copy, nonatomic) NSString *latchLoadingUrl;
@property (copy, nonatomic) NSNumber *latchStartTime;
@property (copy, nonatomic) NSMapTable *weakObjects;
@property (copy, nonatomic) NSMapTable *strongObjects;
@property (retain, nonatomic) PuzzleHybridFullLinkMonitor *hybridFullLinkMonitor;
@property (nonatomic) BOOL enableAnnieXContainerCard;
@property (nonatomic) BOOL disableAnnieXCardViewDidUpdate;
@property (nonatomic) BOOL enableAnnieXPreCreate;
@property (copy, nonatomic) NSString *initialURLString;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *virtualAid;
@property (nonatomic) BOOL onlyUseXBridgeStandardMethods;
@property (copy, nonatomic) NSArray *globalPropsBlockList;
@property (copy, nonatomic) NSDictionary *customGlobalProps;
@property (copy, nonatomic) NSDictionary *initialData;
@property (copy, nonatomic) NSDictionary *routerParam;
@property (copy, nonatomic) NSString *kitViewScene;
@property (copy, nonatomic) NSDictionary *trackerParam;
@property (retain, nonatomic) PuzzleContextExtraModel *extraModel;
@property (retain, nonatomic) NSNumber *secLinkV2Mode;
@property (retain, nonatomic) PuzzleBeanFactory *bean;
@property (readonly, nonatomic) HybridContext *hybridContext;
@property (copy, nonatomic) id /* block */ needIntercept;
@property (copy, nonatomic) id /* block */ puzzlePopupAnimationBlock;

- (id)extraModel;
- (void)setExtraModel:(id)arg0;
- (id)initialData;
- (void)setInitialData:(id)arg0;
- (void)setCustomGlobalProps:(id)arg0;
- (id)routerParam;
- (void)setWeakObject:(id)arg0 forKey:(id)arg1;
- (id)latchID;
- (void)setRouterParam:(id)arg0;
- (void)setLatchID:(id)arg0;
- (void)setVirtualAid:(id)arg0;
- (id)customGlobalProps;
- (id)virtualAid;
- (id)hybridContext;
- (id)hybridFullLinkMonitor;
- (void)setInitialURLString:(id)arg0;
- (id)initialURLString;
- (BOOL)disableAnnieXCardViewDidUpdate;
- (BOOL)enableAnnieXContainerCard;
- (BOOL)enableAnnieXPreCreate;
- (id)globalPropsBlockList;
- (void)setGlobalPropsBlockList:(id)arg0;
- (void)setEnableAnnieXPreCreate:(BOOL)arg0;
- (void)setStrongObject:(id)arg0 forKey:(id)arg1;
- (id)trackerParam;
- (void)setTrackerParam:(id)arg0;
- (void)setNeedIntercept:(id /* block */)arg0;
- (void)setEnableAnnieXContainerCard:(BOOL)arg0;
- (id)weakObjects;
- (id)strongObjects;
- (id)mapTables;
- (void)setWeakObjects:(id)arg0;
- (void)setStrongObjects:(id)arg0;
- (void)setPuzzlePopupAnimationBlock:(id /* block */)arg0;
- (void)setDisableAnnieXCardViewDidUpdate:(BOOL)arg0;
- (void)resetHybridContext;
- (BOOL)onlyUseXBridgeStandardMethods;
- (void)setHybridFullLinkMonitor:(id)arg0;
- (id)secLinkV2Mode;
- (id /* block */)needIntercept;
- (id)latchLoadingUrl;
- (id)latchStartTime;
- (void)setLatchLoadingUrl:(id)arg0;
- (void)setLatchStartTime:(id)arg0;
- (void)setOnlyUseXBridgeStandardMethods:(BOOL)arg0;
- (id)kitViewScene;
- (void)setKitViewScene:(id)arg0;
- (void)setSecLinkV2Mode:(id)arg0;
- (id)bean;
- (void)setBean:(id)arg0;
- (id /* block */)puzzlePopupAnimationBlock;
- (void)setSchema:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)objectForKeyedSubscript:(id)arg0;
- (id)schema;

@end