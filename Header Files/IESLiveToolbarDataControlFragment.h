//
//     Generated by private class-dump
//

@class NSMapTable, NSMutableDictionary, NSString, NSMutableArray;
@protocol IESLiveToolbarAPI, HTSLiveToolbarProvider;

@interface IESLiveToolbarDataControlFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, HTSLiveToolbarActions, IESLiveToolbarDataController> {
    id<IESLiveToolbarAPI> _api;
    NSMapTable *_registerHandler;
    NSMapTable *_themeManagerTable;
    NSMutableDictionary *_itemPrepareShowMap;
    NSMapTable *_itemCanTransformTable;
    id<HTSLiveToolbarProvider> _toolbarProvider;
    unsigned long long _changeOrientationMaxSlotCnt;
    NSMutableArray *_syncCheckComponents;
}

@property (retain, nonatomic) id<IESLiveToolbarAPI> api;
@property (retain, nonatomic) NSMapTable *registerHandler;
@property (retain, nonatomic) NSMapTable *themeManagerTable;
@property (retain, nonatomic) NSMutableDictionary *itemPrepareShowMap;
@property (retain, nonatomic) NSMapTable *itemCanTransformTable;
@property (retain, nonatomic) id<HTSLiveToolbarProvider> toolbarProvider;
@property (nonatomic) unsigned long long changeOrientationMaxSlotCnt;
@property (retain, nonatomic) NSMutableArray *syncCheckComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRegisterHandler:(id)arg0;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)registerHandlerWithItemType:(int)arg0 handler:(id)arg1;
- (void)toolbarItemsChange;
- (void)deregisterHandlerWithItemType:(int)arg0 handler:(id)arg1;
- (BOOL)containItem:(int)arg0 inMorePanel:(BOOL)arg1;
- (void)mountDidFinishForLevel:(long long)arg0;
- (id)registerHandler;
- (void)resetToolbarItemVisibility;
- (BOOL)liveDynamicToolbarModifyPermutation;
- (void)componentOrientationTransitioning:(long long)arg0;
- (id)toolbarProvider;
- (void)setToolbarProvider:(id)arg0;
- (int)liveToolbarSyncType;
- (id)syncCheckComponents;
- (id)themeManagerTable;
- (unsigned long long)changeOrientationMaxSlotCnt;
- (void)setChangeOrientationMaxSlotCnt:(unsigned long long)arg0;
- (void)syncToolbarData:(id)arg0;
- (id)itemPrepareShowMap;
- (void)handlePrepareToShowComponent:(id)arg0;
- (void)removeToolbarItemWithComponent:(id)arg0 toMorePanel:(BOOL)arg1;
- (void)removeMorePanelItemWithIdentifier:(id)arg0;
- (void)handleRemoveComponent:(id)arg0 withReason:(unsigned long long)arg1;
- (id)itemCanTransformTable;
- (void)handleUpdateComponent:(id)arg0;
- (void)insertMorePanelItem:(id)arg0;
- (void)setThemeManagerTable:(id)arg0;
- (void)setItemPrepareShowMap:(id)arg0;
- (void)setItemCanTransformTable:(id)arg0;
- (void)setSyncCheckComponents:(id)arg0;
- (void).cxx_destruct;
- (void)messageReceived:(id)arg0;
- (id)api;
- (void)setApi:(id)arg0;

@end