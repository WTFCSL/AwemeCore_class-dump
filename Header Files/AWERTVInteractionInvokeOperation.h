//
//     Generated by private class-dump
//

@class NSArray, NSString, NSDictionary, RTVBehaviorOptions;

@interface AWERTVInteractionInvokeOperation : JSONModel {
    BOOL _micMuted;
    unsigned long long _interactionType;
    NSDictionary *_params;
    RTVBehaviorOptions *_behaviorOptions;
    NSArray *_inviteUserIDs;
    long long _enterFrom;
    long long _initialActrions;
    NSString *_conversationID;
    NSString *_invokeSource;
    NSString *_tryJoinRoomID;
}

@property (copy, nonatomic) NSArray *inviteUserIDs;
@property (nonatomic) BOOL micMuted;
@property (nonatomic) long long enterFrom;
@property (nonatomic) long long initialActrions;
@property (copy, nonatomic) NSString *conversationID;
@property (readonly, nonatomic) unsigned long long interactionType;
@property (copy, nonatomic) NSDictionary *params;
@property (readonly, nonatomic) RTVBehaviorOptions *behaviorOptions;
@property (readonly, copy, nonatomic) NSString *invokeSource;
@property (copy, nonatomic) NSString *tryJoinRoomID;

- (void)setEnterFrom:(long long)arg0;
- (long long)enterFrom;
- (void)updateEnterFrom:(long long)arg0;
- (id)initWithInteractionType:(unsigned long long)arg0 params:(id)arg1;
- (long long)initialActrions;
- (id)initWithInteractionType:(unsigned long long)arg0;
- (void)updateInviteUserIDs:(id)arg0;
- (void)updateMicMuted:(BOOL)arg0;
- (void)updateInvokeSource:(id)arg0;
- (void)mergeInitialActions:(long long)arg0;
- (void)updateConversationID:(id)arg0;
- (id)inviteUserIDs;
- (void)setInviteUserIDs:(id)arg0;
- (BOOL)micMuted;
- (void)setMicMuted:(BOOL)arg0;
- (void)setInitialActrions:(long long)arg0;
- (id)invokeSource;
- (id)tryJoinRoomID;
- (void)setTryJoinRoomID:(id)arg0;
- (unsigned long long)interactionType;
- (void).cxx_destruct;
- (id)conversationID;
- (id)params;
- (void)setConversationID:(id)arg0;
- (id)behaviorOptions;
- (void)setParams:(id)arg0;

@end