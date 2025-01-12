//
//     Generated by private class-dump
//

@class HTSEventContext, NSArray, BDXBridgeEventSubscriber, NSString, NSMutableArray;
@protocol AWELiveVisibleScopeListRouter;

@interface AWELiveVisibleTypeDataSource : NSObject <IESLiveGuideActions> {
    BOOL _isVip;
    BOOL _isShowNotPreviewOption;
    BOOL _cancelPaidBySelectOther;
    unsigned long long _liveType;
    NSMutableArray *_items;
    HTSEventContext *_trackContext;
    id /* block */ _selectedCallback;
    id /* block */ _correctSelectCallback;
    NSArray *_paidSelectedUsers;
    id /* block */ _selectedPaidCallback;
    unsigned long long _paidVisibleType;
    unsigned long long _panelType;
    id<AWELiveVisibleScopeListRouter> _visibleScopeListRouter;
    BDXBridgeEventSubscriber *_vipPanelSubscriber;
}

@property (nonatomic) unsigned long long panelType;
@property (retain, nonatomic) id<AWELiveVisibleScopeListRouter> visibleScopeListRouter;
@property (nonatomic) BOOL cancelPaidBySelectOther;
@property (retain, nonatomic) BDXBridgeEventSubscriber *vipPanelSubscriber;
@property (nonatomic) unsigned long long liveType;
@property (nonatomic) BOOL isVip;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ selectedCallback;
@property (copy, nonatomic) id /* block */ correctSelectCallback;
@property (retain, nonatomic) NSArray *paidSelectedUsers;
@property (nonatomic) BOOL isShowNotPreviewOption;
@property (copy, nonatomic) id /* block */ selectedPaidCallback;
@property (nonatomic) unsigned long long paidVisibleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (unsigned long long)panelType;
- (BOOL)isVip;
- (void)setIsVip:(BOOL)arg0;
- (void)setLiveType:(unsigned long long)arg0;
- (unsigned long long)liveType;
- (void)setPanelType:(unsigned long long)arg0;
- (void)trackPanelShow;
- (void)changeGuidePaidLiveStatus:(BOOL)arg0;
- (BOOL)isInPaidSelectionType:(unsigned long long)arg0;
- (void)saveSelectType:(unsigned long long)arg0 realType:(int)arg1;
- (id)vipPanelSubscriber;
- (void)setVipPanelSubscriber:(id)arg0;
- (double)generateDataSourcePaidPreview;
- (unsigned long long)paidVisibleType;
- (id)visibleScopeListRouter;
- (id)paidSelectedUsers;
- (double)generateDataSourceNormal;
- (id)paidHintText;
- (void)addSubscribeVIPPanelFinishSetting:(id)arg0;
- (BOOL)isShowNotPreviewOption;
- (void)showToastWithType:(unsigned long long)arg0;
- (id /* block */)selectedCallback;
- (BOOL)cancelPaidBySelectOther;
- (void)setCancelPaidBySelectOther:(BOOL)arg0;
- (BOOL)shouldBlockSelectWithModel:(id)arg0;
- (void)updateSelectedVisibleTypeModel:(id)arg0 fromEditBtn:(BOOL)arg1;
- (void)trackItemSelectType:(unsigned long long)arg0;
- (id)shortDesWithType:(unsigned long long)arg0;
- (void)openUserSelectPageWithModel:(id)arg0;
- (void)savePaidSelectModel:(id)arg0 userList:(id)arg1;
- (void)openPaidLivePanel;
- (void)openVIPLivePanel;
- (void)correctPanelView:(unsigned long long)arg0 userList:(id)arg1;
- (id /* block */)correctSelectCallback;
- (id /* block */)selectedPaidCallback;
- (void)trackSaveSelectType:(unsigned long long)arg0;
- (id)paidStubStringWithType:(unsigned long long)arg0;
- (void)bindGuideAction;
- (double)generateDataSourceWithPanelType:(unsigned long long)arg0;
- (void)didSelectVisibleTypeModel:(id)arg0 fromEditBtn:(BOOL)arg1;
- (void)setSelectedCallback:(id /* block */)arg0;
- (void)setCorrectSelectCallback:(id /* block */)arg0;
- (void)setPaidSelectedUsers:(id)arg0;
- (void)setIsShowNotPreviewOption:(BOOL)arg0;
- (void)setSelectedPaidCallback:(id /* block */)arg0;
- (void)setPaidVisibleType:(unsigned long long)arg0;
- (void)setVisibleScopeListRouter:(id)arg0;
- (id)userID;
- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (id)items;
- (void)dealloc;

@end
