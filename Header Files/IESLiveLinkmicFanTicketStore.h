//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary, NSString;
@protocol IESLiveCompoundSubscription, IESLiveInteractionLayoutRouter, IESLiveRoomService;

@interface IESLiveLinkmicFanTicketStore : IESLiveBaseFanTicketStore <IESLiveBaseFanTicketStore> {
    id<IESLiveCompoundSubscription> _disposable;
    NSMutableDictionary *_map;
    NSMutableDictionary *_modelDict;
    NSArray *_guestList;
    id<IESLiveInteractionLayoutRouter> _layoutRouter;
    id<IESLiveRoomService> _roomModel;
}

@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) NSMutableDictionary *map;
@property (retain, nonatomic) NSMutableDictionary *modelDict;
@property (copy, nonatomic) NSArray *guestList;
@property (weak, nonatomic) id<IESLiveInteractionLayoutRouter> layoutRouter;
@property (weak, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) BOOL guestCanAcceptGift;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)roomModel;
- (id)modelDict;
- (void)setModelDict:(id)arg0;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)setRoomModel:(id)arg0;
- (id)layoutRouter;
- (void)setLayoutRouter:(id)arg0;
- (void)setGuestList:(id)arg0;
- (id)guestList;
- (void)bizStoreMount;
- (void)bizStoreDidUpdatedGuestList:(id)arg0;
- (void)bizStoreDidChangedFromLayout:(id)arg0 toLayout:(id)arg1;
- (void)bizStoreDidChangeGuestCanAcceptGift:(BOOL)arg0;
- (void)updateFanticketObserver:(id)arg0;
- (BOOL)fanTicketHiddenWithUserModel:(id)arg0;
- (id)observeFanTicketWithUserModel:(id)arg0;
- (void)updateFanticketWithUserModel:(id)arg0;
- (BOOL)withoutAnimationWithModel:(id)arg0 withUserModel:(id)arg1 withFirst:(BOOL)arg2;
- (void).cxx_destruct;
- (id)map;
- (void)setMap:(id)arg0;

@end