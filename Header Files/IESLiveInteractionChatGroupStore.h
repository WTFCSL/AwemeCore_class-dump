//
//     Generated by private class-dump
//

@class HTSEventContext, IESLiveInteractionChatGroupAPI, NSMutableDictionary, IESLiveComponentContext, NSString;
@protocol IESLiveRoomService;

@interface IESLiveInteractionChatGroupStore : NSObject <IESLiveLinkmicSettingActions> {
    BOOL _hasKtvChatGroup;
    id<IESLiveRoomService> _room;
    HTSEventContext *_trackContext;
    IESLiveComponentContext *_componentContext;
    IESLiveInteractionChatGroupAPI *_api;
    NSMutableDictionary *_groupInfos;
    NSMutableDictionary *_groupFetcher;
}

@property (retain, nonatomic) IESLiveInteractionChatGroupAPI *api;
@property (retain, nonatomic) NSMutableDictionary *groupInfos;
@property (retain, nonatomic) NSMutableDictionary *groupFetcher;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (nonatomic) BOOL hasKtvChatGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)addListener;
- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (id)initWithRoom:(id)arg0 trackContext:(id)arg1 componentContext:(id)arg2;
- (BOOL)hasKtvChatGroup;
- (void)didUpdateAnchorSettings:(id)arg0;
- (BOOL)enableKtvChatGroup;
- (void)inviteUser:(id)arg0 toJoinGroup:(id)arg1;
- (void)performActionWithGroupInfo:(int)arg0 action:(id /* block */)arg1;
- (void)createKtvChatGroupWithCompletion:(id /* block */)arg0;
- (void)joinKtvChatGroup:(id)arg0 guideSource:(id)arg1 completion:(id /* block */)arg2;
- (void)performActionWithGroupInfo:(int)arg0 forceUpdate:(BOOL)arg1 action:(id /* block */)arg2;
- (void)createGroupManagerViewController:(id)arg0 extra:(id)arg1 completion:(id /* block */)arg2;
- (void)createGroupWithType:(long long)arg0 extra:(id)arg1 completion:(id /* block */)arg2;
- (void)joinGroup:(id)arg0 shortId:(long long)arg1 bizExtension:(id)arg2 completion:(id /* block */)arg3;
- (void)p_didUpdateAnchorSettings:(id)arg0;
- (void)setHasKtvChatGroup:(BOOL)arg0;
- (id)groupFetcher;
- (id)groupForType:(int)arg0;
- (void)setGroupInfos:(id)arg0;
- (void)setGroupFetcher:(id)arg0;
- (void).cxx_destruct;
- (id)groupInfos;
- (unsigned long long)currentScene;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)api;
- (void)setApi:(id)arg0;

@end
