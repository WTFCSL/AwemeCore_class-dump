//
//     Generated by private class-dump
//

@class HTSEventContext, NSString, NSArray, IESLiveCombineSubject, IESLiveLinkMicAudienceMVTab, IESLiveUGCVideoCellModel, IESLiveMultiOrderSingApi, NSMutableArray, NSNumber;

@interface IESLiveMultiOrderSingMVPanelModel : NSObject {
    BOOL _isBinding;
    NSString *_currentSingItemId;
    IESLiveLinkMicAudienceMVTab *_defaultTab;
    long long _defaultTabSelectIndex;
    NSArray *_tabList;
    IESLiveUGCVideoCellModel *_selectedModel;
    NSMutableArray *_pageList;
    id /* block */ _hidePanelAction;
    id /* block */ _mvDidBindAction;
    NSString *_itemID;
    NSString *_bindVid;
    NSNumber *_roomID;
    HTSEventContext *_trackContext;
    IESLiveMultiOrderSingApi *_api;
    long long _selectedIndex;
    IESLiveCombineSubject *_tabListChangeSubject;
    IESLiveCombineSubject *_tabSelectChangeSubject;
    IESLiveCombineSubject *_modelSelectChangeSubject;
}

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *bindVid;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveMultiOrderSingApi *api;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) long long defaultTabSelectIndex;
@property (retain, nonatomic) IESLiveLinkMicAudienceMVTab *defaultTab;
@property (copy, nonatomic) NSArray *tabList;
@property (retain, nonatomic) IESLiveUGCVideoCellModel *selectedModel;
@property (retain, nonatomic) NSMutableArray *pageList;
@property (retain, nonatomic) IESLiveCombineSubject *tabListChangeSubject;
@property (retain, nonatomic) IESLiveCombineSubject *tabSelectChangeSubject;
@property (retain, nonatomic) IESLiveCombineSubject *modelSelectChangeSubject;
@property (nonatomic) BOOL isBinding;
@property (copy, nonatomic) NSString *currentSingItemId;
@property (copy, nonatomic) id /* block */ hidePanelAction;
@property (copy, nonatomic) id /* block */ mvDidBindAction;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)tabList;
- (id)selectedModel;
- (id)pageList;
- (void)setSelectedModel:(id)arg0;
- (void)setTabList:(id)arg0;
- (BOOL)isInRoomBattle;
- (void)setCurrentSingItemId:(id)arg0;
- (id)currentSingItemId;
- (id)initWithRoomID:(id)arg0 itemID:(id)arg1 trackContext:(id)arg2;
- (void)setHidePanelAction:(id /* block */)arg0;
- (void)setMvDidBindAction:(id /* block */)arg0;
- (void)didClickPreviewLabel;
- (id)tabListChangeSignal;
- (long long)defaultTabSelectIndex;
- (void)updateSelectedTabWithIndex:(long long)arg0;
- (id)tabSelectChangeSignal;
- (id)modelSelectChangeSignal;
- (void)didClickActionButtonWithRequestPage:(id)arg0;
- (void)didClickPreviewVideoWithPause:(BOOL)arg0;
- (void)updateSelectedModelWithModel:(id)arg0;
- (void)fetchTabList;
- (void)setPageList:(id)arg0;
- (void)fetchMVListWithTabID:(id)arg0;
- (void)setDefaultTabSelectIndex:(long long)arg0;
- (id)tabListChangeSubject;
- (void)setBindVid:(id)arg0;
- (id)bindVid;
- (void)updateBindStateWithCellModels:(id)arg0 vid:(id)arg1 bind:(BOOL)arg2;
- (BOOL)isBinding;
- (void)setIsBinding:(BOOL)arg0;
- (void)updateBindStateWithVid:(id)arg0 bind:(BOOL)arg1;
- (id /* block */)mvDidBindAction;
- (BOOL)isCurrentItemSinging;
- (id)tabSelectChangeSubject;
- (void)trackMVPageShow;
- (void)trackMVButtonClickWithType:(id)arg0 requestPage:(id)arg1;
- (id)modelSelectChangeSubject;
- (void)openLockedRulePage;
- (void)unbindMVToItemWithVid:(id)arg0 completion:(id /* block */)arg1;
- (id /* block */)hidePanelAction;
- (void)postNotificationToLynxForClose;
- (void)bindMVToItemWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)setTabListChangeSubject:(id)arg0;
- (void)setTabSelectChangeSubject:(id)arg0;
- (void)setModelSelectChangeSubject:(id)arg0;
- (id)userType;
- (void).cxx_destruct;
- (void)setSelectedIndex:(long long)arg0;
- (id)itemID;
- (void)setItemID:(id)arg0;
- (void)dealloc;
- (long long)selectedIndex;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (id)api;
- (void)setApi:(id)arg0;
- (id)defaultTab;
- (void)setDefaultTab:(id)arg0;

@end
