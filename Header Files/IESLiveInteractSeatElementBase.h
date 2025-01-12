//
//     Generated by private class-dump
//

@class HTSEventContext, IESLiveBigPartyGuestInfoViewModel, IESLiveAudioSeatView, IESLiveInteractSeatElementMultiCaster, IESLiveInteractSeatElementLoader, NSString, IESLiveAudioSeatViewModel, IESLiveBigPartyGuestInfoView;
@protocol IESLiveRoomService, IESLiveInteractUserModel;

@interface IESLiveInteractSeatElementBase : NSObject <IESLiveInteractSeatElementProvider, IESLiveInteractSeatElementEvents> {
    BOOL _isMounted;
    unsigned long long _currentUserRole;
    unsigned long long _currentScene;
    id<IESLiveRoomService> _room;
    HTSEventContext *_eventContext;
    long long _seatIndex;
    unsigned long long _seatType;
    IESLiveInteractSeatElementLoader *_elementLoader;
    IESLiveInteractSeatElementMultiCaster *_multiCaster;
    IESLiveBigPartyGuestInfoView *_bigPartyGuestInfoView;
    IESLiveBigPartyGuestInfoViewModel *_bigPartyViewModel;
    IESLiveAudioSeatView *_audioSeatView;
    IESLiveAudioSeatViewModel *_audioSeatViewModel;
    id<IESLiveInteractUserModel> _userModel;
}

@property (nonatomic) BOOL isMounted;
@property (nonatomic) unsigned long long currentUserRole;
@property (nonatomic) unsigned long long currentScene;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (nonatomic) long long seatIndex;
@property (nonatomic) unsigned long long seatType;
@property (weak, nonatomic) IESLiveInteractSeatElementLoader *elementLoader;
@property (weak, nonatomic) IESLiveInteractSeatElementMultiCaster *multiCaster;
@property (weak, nonatomic) IESLiveBigPartyGuestInfoView *bigPartyGuestInfoView;
@property (weak, nonatomic) IESLiveBigPartyGuestInfoViewModel *bigPartyViewModel;
@property (weak, nonatomic) IESLiveAudioSeatView *audioSeatView;
@property (weak, nonatomic) IESLiveAudioSeatViewModel *audioSeatViewModel;
@property (weak, nonatomic) id<IESLiveInteractUserModel> userModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEventContext:(id)arg0;
- (void)setCurrentScene:(unsigned long long)arg0;
- (void)setIsMounted:(BOOL)arg0;
- (long long)seatIndex;
- (void)setSeatIndex:(long long)arg0;
- (id)elementLoader;
- (void)dynamicUpdateItemInfo:(id)arg0;
- (id)dynamicItemId;
- (void)setElementLoader:(id)arg0;
- (void)setAudioSeatViewModel:(id)arg0;
- (void)setAudioSeatView:(id)arg0;
- (void)setSeatType:(unsigned long long)arg0;
- (void)setBigPartyViewModel:(id)arg0;
- (id)multiCaster;
- (void)setMultiCaster:(id)arg0;
- (unsigned long long)seatType;
- (id)bigPartyGuestInfoView;
- (id)audioSeatView;
- (void)elementSeatTypeDidChanged;
- (void)dynamicResetItem;
- (id)bigPartyViewModel;
- (id)audioSeatViewModel;
- (void)elementLayoutBaseUI;
- (void)elementUnmount;
- (void)elementMount;
- (unsigned long long)currentUserRole;
- (void)setCurrentUserRole:(unsigned long long)arg0;
- (void)setBigPartyGuestInfoView:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)currentScene;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (id)eventContext;
- (id)room;
- (void)setRoom:(id)arg0;
- (BOOL)isMounted;

@end
