//
//     Generated by private class-dump
//

@class NSString, HTSLiveToolbarItem, IESLiveAnchorTicketApi, NSMutableArray, NSNumber;

@interface IESLivePaywallAnchorTicketFragment : IESLiveRoomComponent <IESLiveCommercialComponentsActions, HTSLiveMessageSubscriber, HTSLiveToolbarActions, IESLiveToolbarComponentHandler> {
    BOOL _hasTicket;
    BOOL _paidLiveBringingProductFlag;
    HTSLiveToolbarItem *_ticketToolbarItem;
    NSMutableArray *_subscriberList;
    IESLiveAnchorTicketApi *_ticketApi;
    unsigned long long _switchedFromComponent;
    NSNumber *_ticketId;
    NSString *_ticketOwnerId;
}

@property (retain, nonatomic) HTSLiveToolbarItem *ticketToolbarItem;
@property (retain, nonatomic) NSMutableArray *subscriberList;
@property (retain, nonatomic) IESLiveAnchorTicketApi *ticketApi;
@property (nonatomic) unsigned long long switchedFromComponent;
@property (copy, nonatomic) NSNumber *ticketId;
@property (nonatomic) BOOL hasTicket;
@property (copy, nonatomic) NSString *ticketOwnerId;
@property (nonatomic) BOOL paidLiveBringingProductFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)ticketId;
- (void)setTicketId:(id)arg0;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)toolbarReceiveComponent:(id)arg0 completion:(id /* block */)arg1;
- (void)toolbarComponentRemovedReason:(unsigned long long)arg0 extra:(id)arg1;
- (void)onToolbar:(id)arg0 sizeChanged:(struct CGSize { double x0; double x1; })arg1;
- (void)onExpandGroupShow:(BOOL)arg0;
- (void)unsubscribeEvent;
- (void)willSwitchToCommercialComponent:(unsigned long long)arg0;
- (BOOL)hasTicket;
- (BOOL)isInMoreGroup;
- (BOOL)paidLiveBringingProductFlag;
- (BOOL)canSellTicket;
- (id)paidLiveCreateRight;
- (void)registerSubscribeEvent;
- (id)redDotDidShow;
- (void)switchEntranceInMore;
- (void)trackIconClickInMore;
- (void)openExplainCardPanel;
- (void)trackBottomIconClick;
- (void)setTicketToolbarItem:(id)arg0;
- (void)trackBottomIconShow;
- (void)updateTicketInfoWithTicketId:(id)arg0 isAdd:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)openPanelWithUrl:(id)arg0 extraParams:(id)arg1 isInMore:(BOOL)arg2;
- (void)trackTicketSalesPageShow;
- (void)setPaidLiveBringingProductFlag:(BOOL)arg0;
- (id)paidLiveCreateRightsFE;
- (BOOL)p_hasReplayRight;
- (void)trackCarryTicketConfirmClick:(BOOL)arg0;
- (void)openTicketPanelInMore;
- (void)setSwitchedFromComponent:(unsigned long long)arg0;
- (void)trackCarryTicketConfirmShow;
- (unsigned long long)switchedFromComponent;
- (id)prefixForCacheKey;
- (id)ticketApi;
- (void)setHasTicket:(BOOL)arg0;
- (void)setTicketOwnerId:(id)arg0;
- (void)trackIconShowInMore;
- (void)subscribeTicketChosenEvent;
- (BOOL)isTicketOwner;
- (id)paidLiveCreateRights;
- (id)baseTrackParams:(id)arg0;
- (void)deactivateSourceComponent;
- (id)ticketToolbarItem;
- (void)setTicketApi:(id)arg0;
- (id)ticketOwnerId;
- (void).cxx_destruct;
- (void)messageReceived:(id)arg0;
- (id)subscriberList;
- (void)setSubscriberList:(id)arg0;

@end
