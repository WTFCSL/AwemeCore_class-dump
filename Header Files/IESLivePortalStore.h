//
//     Generated by private class-dump
//

@class HTSEventContext, NSString, IESLiveComponentContext;
@protocol IESLiveRoomServiceAdapter, IESLivePortalReaction;

@interface IESLivePortalStore : NSObject <IESLiveMessageSubscriber, IESLivePortalActions> {
    id<IESLiveRoomServiceAdapter> _roomModel;
    HTSEventContext *_trackContext;
    id<IESLivePortalReaction> _reactions;
    IESLiveComponentContext *_componentContext;
}

@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> roomModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) id<IESLivePortalReaction> reactions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)componentContext;
- (id)roomModel;
- (void)setComponentContext:(id)arg0;
- (void)setRoomModel:(id)arg0;
- (id)initWith:(id)arg0 componentContext:(id)arg1;
- (void)getInviteInfo:(id /* block */)arg0;
- (void)getRewardInfo:(id /* block */)arg0;
- (void)removePortalRedEnvelopeView:(id)arg0;
- (void)startJumpPing;
- (void)monitor_portalMessageWithType:(int)arg0 portalID:(long long)arg1;
- (void).cxx_destruct;
- (void)setup;
- (void)messageReceived:(id)arg0;
- (id)reactions;
- (void)setReactions:(id)arg0;

@end
