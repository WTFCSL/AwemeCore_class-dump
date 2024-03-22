//
//     Generated by private class-dump
//

@class NSString, IESLiveGiftPanelDataSharing, RACCommand, HTSLiveGiftBuffInfo, NSMutableArray, HTSLiveGiftMarketingInfo;
@protocol IESLiveGiftPanelReaction;

@interface IESLiveGiftBuffLynxViewModel : IESLiveRefactGiftPanelSectionViewModel <IESLiveRefactGiftPanelEventAction, IESLiveCollectionViewItemProtocol> {
    BOOL _enable;
    BOOL _buffCardSectionViewDisplaying;
    Class _cellClass;
    id<IESLiveGiftPanelReaction> _reaction;
    IESLiveGiftPanelDataSharing *_giftPanelDataSharing;
    NSMutableArray *_giftBuffInfosArray;
    HTSLiveGiftBuffInfo *_cuerrentBuffInfos;
    HTSLiveGiftMarketingInfo *_giftMarketingInfo;
    id /* block */ _marketingInfoChanged;
    id /* block */ _observeCurrentSelectCardBlock;
    struct CGSize { double width; double height; } _cellSize;
}

@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (retain, nonatomic) NSMutableArray *giftBuffInfosArray;
@property (retain, nonatomic) HTSLiveGiftBuffInfo *cuerrentBuffInfos;
@property (retain, nonatomic) HTSLiveGiftMarketingInfo *giftMarketingInfo;
@property (nonatomic) BOOL buffCardSectionViewDisplaying;
@property (copy, nonatomic) id /* block */ marketingInfoChanged;
@property (copy, nonatomic) id /* block */ observeCurrentSelectCardBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cellClass;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) RACCommand *didSelectItemCommand;
@property (weak, nonatomic) id<IESLiveGiftPanelReaction> reaction;

- (void)didSetAttachingDIContext;
- (id)createSectionView;
- (id)giftBuffInfosArray;
- (id)giftMarketingInfo;
- (void)gpe_didGiftExtraInfoUpdate:(id)arg0;
- (id)giftPanelDataSharing;
- (id)initWithGiftPanelDataSharing:(id)arg0;
- (void)setGiftPanelDataSharing:(id)arg0;
- (id /* block */)observeCurrentSelectCardBlock;
- (void)setMarketingInfoChanged:(id /* block */)arg0;
- (void)setGiftMarketingInfo:(id)arg0;
- (id /* block */)marketingInfoChanged;
- (void)setObserveCurrentSelectCardBlock:(id /* block */)arg0;
- (BOOL)marketMixAreaDisplaying;
- (void)bindDataRefresh;
- (BOOL)buffCardSectionViewDisplaying;
- (void)setBuffCardSectionViewDisplaying:(BOOL)arg0;
- (void)setGiftBuffInfosArray:(id)arg0;
- (void)selectCardWithBuffLevel:(id)arg0;
- (id)cuerrentBuffInfos;
- (void)setCuerrentBuffInfos:(id)arg0;
- (BOOL)enable;
- (void).cxx_destruct;
- (Class)cellClass;
- (void)setEnable:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })cellSize;
- (void)setCellSize:(struct CGSize { double x0; double x1; })arg0;
- (id)reaction;
- (void)setReaction:(id)arg0;
- (void)setCellClass:(Class)arg0;

@end
