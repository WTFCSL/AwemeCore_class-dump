//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, RTVStickerPanelStickerViewModel;
@protocol RTVStickerPanelBaseDataControllerDelegate, RxInjector, RTVStickerManagerInterface;

@interface RTVStickerPanelBaseDataController : NSObject <RTVStickerPanelDataControllerSubclassInterface, RTVStickerPanelDataControllerPrivateInterface> {
    id<RTVStickerPanelBaseDataControllerDelegate> delegate;
    id<RxInjector> _injector;
    id<RTVStickerManagerInterface> _stickerManager;
    NSString *_willSelectStickerID;
    NSMutableDictionary *_viewModelCache;
    RTVStickerPanelStickerViewModel *_selectedViewModel;
}

@property (readonly, nonatomic) NSMutableDictionary *viewModelCache;
@property (retain) RTVStickerPanelStickerViewModel *selectedViewModel;
@property (copy) NSString *willSelectStickerID;
@property (retain, nonatomic) id<RTVStickerManagerInterface> stickerManager;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RTVStickerPanelBaseDataControllerDelegate> delegate;

- (id)selectedSticker;
- (void)rxAwakeFromPropertyInjection;
- (id)stickerManager;
- (void)setStickerManager:(id)arg0;
- (id)tryToSelectStickerWithID:(id)arg0;
- (BOOL)deselectStickerID:(id)arg0;
- (id)cancelTryToSelectStickerIDPrevious:(id)arg0;
- (id)viewModelWithStickerID:(id)arg0;
- (id)viewModelWithSticker:(id)arg0;
- (id)tryToSelectSticker:(id)arg0;
- (void)willSelectSticker:(id)arg0;
- (id)willSelectStickerID;
- (id)viewModelCache;
- (id)createViewModelWithSticker:(id)arg0;
- (id)selectedViewModel;
- (id)__tryToSelectSticker:(id)arg0 disableDelegateDispatch:(BOOL)arg1;
- (void)setWillSelectStickerID:(id)arg0;
- (id)updateViewModel:(id /* block */)arg0 forStickerID:(id)arg1;
- (id)__updateSelectedViewModel:(id)arg0 disableDelegateDispatch:(BOOL)arg1;
- (id)__updateSelectedViewModel:(id)arg0;
- (id)shouldSelectSticker:(id)arg0;
- (void)setSelectedViewModel:(id)arg0;
- (void)updateViewModel:(id /* block */)arg0 forSticker:(id)arg1;
- (void)appendViewModel:(id)arg0;
- (id)updateSelectedStickerViewModel:(id)arg0;
- (void).cxx_destruct;
- (id)injector;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
