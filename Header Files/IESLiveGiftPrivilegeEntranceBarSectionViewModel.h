//
//     Generated by private class-dump
//

@class NSString, IESLiveGiftPanelDataSharing;
@protocol IESLiveGiftModuleRecipientRouter;

@interface IESLiveGiftPrivilegeEntranceBarSectionViewModel : IESLiveRefactGiftPanelSectionViewModel <IESLivePrivilegeEntranceBarActions> {
    IESLiveGiftPanelDataSharing *_giftPanelDataSharing;
    id<IESLiveGiftModuleRecipientRouter> _recipientRouter;
}

@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (retain, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (readonly, nonatomic) BOOL enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)p_bindAction;
- (id)createSectionView;
- (id)recipientRouter;
- (void)setRecipientRouter:(id)arg0;
- (id)giftPanelDataSharing;
- (id)initWithGiftPanelDataSharing:(id)arg0;
- (void)setGiftPanelDataSharing:(id)arg0;
- (void)entranceBarDidUpdated;
- (void)handleSectionWillDisappear;
- (BOOL)enable;
- (void).cxx_destruct;

@end
