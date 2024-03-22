//
//     Generated by private class-dump
//

@class NSString, IESLiveGiftPanelDataSharing;

@interface IESLiveGiftMarketAreaSectionViewModel : IESLiveRefactGiftPanelSectionViewModel <IESLiveRefactGiftPanelEventAction> {
    BOOL _marketingAreaDisplaying;
    id /* block */ _marketModelChanged;
    IESLiveGiftPanelDataSharing *_giftPanelDataSharing;
}

@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (copy, nonatomic) id /* block */ marketModelChanged;
@property (nonatomic) BOOL marketingAreaDisplaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)bindAction;
- (id)createSectionView;
- (void)gpe_didGiftExtraInfoUpdate:(id)arg0;
- (id)giftPanelDataSharing;
- (id)initWithGiftPanelDataSharing:(id)arg0;
- (void)setGiftPanelDataSharing:(id)arg0;
- (id)generateModelWithGiftItem:(id)arg0;
- (BOOL)marketingAreaDisplaying;
- (void)setMarketModelChanged:(id /* block */)arg0;
- (id)generateCurrentGiftMarketAreaModel;
- (void)p_updateGiftMarketingInfoWithGiftItem:(id)arg0;
- (id /* block */)marketModelChanged;
- (void)setMarketingAreaDisplaying:(BOOL)arg0;
- (void).cxx_destruct;

@end