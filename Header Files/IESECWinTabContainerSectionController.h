//
//     Generated by private class-dump
//

@class IESECWinTabContainerCell, NSString, IESECServiceProxy, IESECWinTabContainerObject, IESECWinFeedFlowLayout, FBKVOController;
@protocol IESECWinDataService, IESECWinMainScrollService, IESECWinTabService, IESECWinPageCardService, IESECWinFeedLinkedService, IESECWinLynxCardService, IESECWinTabViewControllerManager, IESECWinSplitService, IESECWinDataStatusService;

@interface IESECWinTabContainerSectionController : IESECWinListKitCellController <IESECWinTabContainerCellContainerViewDelegate> {
    IESECWinTabContainerObject *_object;
    BOOL _isFirstShow;
    FBKVOController *_KVOCtrl;
    IESECWinFeedFlowLayout *_flowLayout;
    IESECWinTabContainerCell *_containerCell;
    IESECServiceProxy<IESECWinTabService> *_tabService;
    IESECServiceProxy<IESECWinDataService> *_dataService;
    IESECServiceProxy<IESECWinSplitService> *_splitService;
    IESECServiceProxy<IESECWinLynxCardService> *_lynxCardService;
    IESECServiceProxy<IESECWinPageCardService> *_pageCardService;
    IESECServiceProxy<IESECWinMainScrollService> *_scrollService;
    IESECServiceProxy<IESECWinFeedLinkedService> *_linkedService;
    IESECServiceProxy<IESECWinDataStatusService> *_dataStatusService;
    IESECServiceProxy<IESECWinTabViewControllerManager> *_contentVCManager;
}

@property (retain, nonatomic) FBKVOController *KVOCtrl;
@property (retain, nonatomic) IESECWinFeedFlowLayout *flowLayout;
@property (weak, nonatomic) IESECWinTabContainerCell *containerCell;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinSplitService> *splitService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLynxCardService> *lynxCardService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinPageCardService> *pageCardService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinMainScrollService> *scrollService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedLinkedService> *linkedService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataStatusService> *dataStatusService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabViewControllerManager> *contentVCManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabbarView;
- (id)cellForItemAtIndex:(long long)arg0;
- (void)didUpdateToObject:(id)arg0;
- (void)p_addObserver;
- (id)dataService;
- (void)setDataService:(id)arg0;
- (id)tabContainer:(id)arg0 tabViewElementForIndex:(long long)arg1;
- (long long)numberOfTabViewElementsInTabContainer:(id)arg0;
- (void)tabContainer:(id)arg0 willMoveToIndex:(long long)arg1 withTabElement:(id)arg2;
- (void)tabContainer:(id)arg0 cancelMoveToIndex:(long long)arg1 withTabElement:(id)arg2;
- (void)tabContainer:(id)arg0 didMoveToIndex:(long long)arg1 withTabElement:(id)arg2;
- (id)configWithCell:(id)arg0;
- (id)scrollService;
- (id)splitService;
- (void)setSplitService:(id)arg0;
- (void)setScrollService:(id)arg0;
- (id)pageCardService;
- (void)setPageCardService:(id)arg0;
- (id)tabService;
- (void)setTabService:(id)arg0;
- (id)dataStatusService;
- (void)setDataStatusService:(id)arg0;
- (id)lynxCardService;
- (void)setLynxCardService:(id)arg0;
- (id)KVOCtrl;
- (void)setKVOCtrl:(id)arg0;
- (id)contentVCManager;
- (void)setContentVCManager:(id)arg0;
- (id)linkedService;
- (void)setLinkedService:(id)arg0;
- (void)tabTrackWithEvent:(id)arg0 tab:(id)arg1 clickType:(id)arg2 onceKey:(id)arg3;
- (void)configTabContainer;
- (void)rebindTabbarView;
- (long long)numberOfItems;
- (id)init;
- (void).cxx_destruct;
- (void)scrollViewDidScroll;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (long long)selectedIndex;
- (id)selectedViewController;
- (id)flowLayout;
- (void)setFlowLayout:(id)arg0;
- (id)currentCell;
- (id)containerCell;
- (void)setContainerCell:(id)arg0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end
