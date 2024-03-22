//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, IESEffectModel, AWEOriginStickerUserVerticalView, AWEOriginStickerUserView;
@protocol ACCRecordSidebarService;

@interface AWEStickerApplySourceOriginalHandler : AWEStickerApplyBaseHandler <ACCRecordPropServiceSubscriber, ACCRecorderViewContainerItemsHideShowObserver> {
    BOOL _panelShow;
    IESEffectModel *_selectedSticker;
    IESEffectModel *_readyToShowSticker;
    id<ACCRecordSidebarService> _sidebarService;
    NSMutableDictionary *_cachedUserNameDict;
    AWEOriginStickerUserView *_originStickerUserView;
    AWEOriginStickerUserVerticalView *_originStickerUserVerticalView;
}

@property (retain, nonatomic) IESEffectModel *selectedSticker;
@property (retain, nonatomic) IESEffectModel *readyToShowSticker;
@property (weak, nonatomic) id<ACCRecordSidebarService> sidebarService;
@property (retain, nonatomic) NSMutableDictionary *cachedUserNameDict;
@property (retain, nonatomic) AWEOriginStickerUserView *originStickerUserView;
@property (retain, nonatomic) AWEOriginStickerUserVerticalView *originStickerUserVerticalView;
@property (nonatomic) BOOL panelShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)selectedSticker;
- (void)setSelectedSticker:(id)arg0;
- (void)shouldItemsShow:(BOOL)arg0 animated:(BOOL)arg1;
- (void)propServiceDidShowPanel:(id)arg0;
- (void)handlerDidBecomeActive;
- (void)camera:(id)arg0 willApplySticker:(id)arg1 propSource:(long long)arg2;
- (void)didChangeLayoutManager:(id)arg0;
- (id)originStickerUserView;
- (void)setOriginStickerUserView:(id)arg0;
- (void)setReadyToShowSticker:(id)arg0;
- (void)p_hidePropCreatorBarItem;
- (BOOL)panelShow;
- (void)handleStickerOriginalShow:(id)arg0;
- (id)cachedUserNameDict;
- (void)showSourceOrignalViewWithUserModel:(id)arg0 effectModel:(id)arg1;
- (id)originStickerUserVerticalView;
- (void)p_updatePropCreatorWithUserModel:(id)arg0;
- (void)setPanelShow:(BOOL)arg0;
- (id)readyToShowSticker;
- (id)sidebarService;
- (void)setSidebarService:(id)arg0;
- (void)setCachedUserNameDict:(id)arg0;
- (void)setOriginStickerUserVerticalView:(id)arg0;
- (void).cxx_destruct;

@end