//
//     Generated by private class-dump
//

@class HTSEventContext, NSString;
@protocol IESLiveRoomService, IESLiveCompoundSubscription, IESLiveInteractionSettingsRouter;

@interface IESLiveInteractionSettingsEventTracker : NSObject <IESLiveSocialInteractAction> {
    BOOL _hasEverTurnOnAllowAdminOperateGuest;
    id<IESLiveRoomService> _room;
    id<IESLiveInteractionSettingsRouter> _interactionSettings;
    HTSEventContext *_eventContext;
    id<IESLiveCompoundSubscription> _disposable;
}

@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) id<IESLiveInteractionSettingsRouter> interactionSettings;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (nonatomic) BOOL hasEverTurnOnAllowAdminOperateGuest;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)setEventContext:(id)arg0;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)interactionModeEndedWithLayout:(id)arg0;
- (id)initWithEventContext:(id)arg0 room:(id)arg1;
- (void)didSwitchSettingWithKey:(int)arg0 value:(int)arg1;
- (void)didSwitchAudienceSettingWithKey:(int)arg0 value:(id)arg1;
- (void)setHasEverTurnOnAllowAdminOperateGuest:(BOOL)arg0;
- (BOOL)hasEverTurnOnAllowAdminOperateGuest;
- (void).cxx_destruct;
- (id)eventContext;
- (void)dealloc;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)interactionSettings;
- (void)setInteractionSettings:(id)arg0;

@end
