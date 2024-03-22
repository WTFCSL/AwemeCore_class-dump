//
//     Generated by private class-dump
//

@class NSString, IESLiveCombineSubject, NSMutableArray;
@protocol IESLiveCompoundSubscription, IESLiveInteractiveGiftVMDelegate;

@interface IESLiveInteractiveGiftLibraryExistViewModel : NSObject <IESLiveInteractiveGiftListCollectionViewModelProtocol> {
    NSMutableArray *_giftItems;
    IESLiveCombineSubject *_onGiftItemsRefreshed;
    id<IESLiveInteractiveGiftVMDelegate> _delegate;
    long long _currentSelectIndex;
    id<IESLiveCompoundSubscription> _bindToken;
}

@property (weak, nonatomic) id<IESLiveInteractiveGiftVMDelegate> delegate;
@property (nonatomic) long long currentSelectIndex;
@property (retain, nonatomic) IESLiveCombineSubject *onGiftItemsRefreshed;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> bindToken;
@property (retain, nonatomic) NSMutableArray *giftItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backButtonClick;
- (void)didSetAttachingDIContext;
- (long long)currentSelectIndex;
- (void)setCurrentSelectIndex:(long long)arg0;
- (void)setGiftItems:(id)arg0;
- (id)giftItems;
- (void)p_bindSignal;
- (id)onGiftItemsRefreshed;
- (void)refreshDataWithKeepSelect:(BOOL)arg0;
- (void)performSelect;
- (void)selectItemWithIndexPath:(id)arg0;
- (void)updateSelectIndex:(long long)arg0;
- (void)trackGiftClickWithIndexPath:(id)arg0;
- (id)getCurrentGiftItemCellWithIndex:(long long)arg0;
- (long long)numberOfGifts;
- (void)doubleClickWithItem:(id)arg0;
- (void)collectionViewNearBottom;
- (void)trackGiftShowWithIndexPath:(id)arg0;
- (id)initWithGiftVMDelegate:(id)arg0;
- (void)setOnGiftItemsRefreshed:(id)arg0;
- (void)updateWithFetchedAudienceAbleGiftsGifts:(id)arg0 poolGifts:(id)arg1 keepSelect:(BOOL)arg2;
- (void)trackGiftAddWithIndex:(long long)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)bindToken;
- (void)setBindToken:(id)arg0;

@end