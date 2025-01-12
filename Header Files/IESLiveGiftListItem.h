//
//     Generated by private class-dump
//

@class HTSLiveGiftItemCollectionLayout, NSString, NSArray, RACSignal, HTSLiveGiftItemCollectionViewModel, RACCommand, IESLiveGiftPanelDataSharing, IESLiveRefactGiftPanelViewBuilderLayoutInfo;
@protocol IESLiveGiftPanelReaction;

@interface IESLiveGiftListItem : IESLiveRefactGiftPanelSectionViewModel <IESLiveRefactGiftPanelEventAction, IESLiveCollectionViewItemProtocol> {
    BOOL _enable;
    Class _cellClass;
    id<IESLiveGiftPanelReaction> _reaction;
    NSArray *_collectionViewModelList;
    HTSLiveGiftItemCollectionViewModel *_currentCollectionViewModel;
    HTSLiveGiftItemCollectionLayout *_giftCollectionLayout;
    long long _currentPageType;
    RACSignal *_selectionSignal;
    IESLiveGiftPanelDataSharing *_giftPanelDataSharing;
    IESLiveRefactGiftPanelViewBuilderLayoutInfo *_panelBuilderLayoutInfo;
    id /* block */ _updateGiftListCell;
    RACCommand *_sendGiftCmd;
    struct CGSize { double width; double height; } _cellSize;
}

@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (readonly, nonatomic) NSArray *collectionViewModelList;
@property (readonly, nonatomic) HTSLiveGiftItemCollectionViewModel *currentCollectionViewModel;
@property (readonly, nonatomic) HTSLiveGiftItemCollectionLayout *giftCollectionLayout;
@property (readonly, nonatomic) long long currentPageType;
@property (readonly, nonatomic) RACSignal *selectionSignal;
@property (retain, nonatomic) IESLiveRefactGiftPanelViewBuilderLayoutInfo *panelBuilderLayoutInfo;
@property (copy, nonatomic) id /* block */ updateGiftListCell;
@property (retain, nonatomic) RACCommand *sendGiftCmd;
@property (weak, nonatomic) id<IESLiveGiftPanelReaction> reaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cellClass;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) RACCommand *didSelectItemCommand;

- (void)didSetAttachingDIContext;
- (void)gpe_didGiftPanelCollectionVMsUpdate;
- (id)giftPanelDataSharing;
- (id)selectedCollectionViewModel;
- (id)initWithGiftPanelDataSharing:(id)arg0;
- (void)didGiftPanelCollectionVMsUpdate;
- (void)setGiftPanelDataSharing:(id)arg0;
- (long long)currentPageType;
- (id)itemViewModelWithPageType:(long long)arg0;
- (void)p_bindSignal;
- (void)p_createSendGiftCommand;
- (id)collectionViewModelList;
- (void)p_sendGift;
- (void)setSendGiftCmd:(id)arg0;
- (id /* block */)updateGiftListCell;
- (id)currentCollectionViewModel;
- (id)giftCollectionLayout;
- (id)selectionSignal;
- (id)panelBuilderLayoutInfo;
- (void)setPanelBuilderLayoutInfo:(id)arg0;
- (void)setUpdateGiftListCell:(id /* block */)arg0;
- (id)sendGiftCmd;
- (BOOL)enable;
- (void).cxx_destruct;
- (Class)cellClass;
- (void)setEnable:(BOOL)arg0;
- (id)selectedItem;
- (struct CGSize { double x0; double x1; })cellSize;
- (void)setCellSize:(struct CGSize { double x0; double x1; })arg0;
- (id)reaction;
- (void)setReaction:(id)arg0;
- (void)setCellClass:(Class)arg0;

@end
