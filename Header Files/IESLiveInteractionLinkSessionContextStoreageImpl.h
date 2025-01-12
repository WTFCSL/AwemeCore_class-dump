//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveInteractionLinkerJoinChannelContextProtocol, IESLiveInteractionLinkerCancelWaitingContextProtocol, IESLiveInteractionLinkerReplyContextProtocol, IESLiveInteractionLinkerLeaveContextProtocol, IESLiveInteractionLinkerApplyContextProtocol, IESLiveInteractionLinkerCloseContextProtocol, IESLiveInteractionLinkerInviteContextProtocol, IESLiveInteractionLinkerKickoutContextProtocol, IESLiveInteractionLinkerDisconnectContextProtocol, IESLiveInteractionLinkerCreateContextProtocol;

@interface IESLiveInteractionLinkSessionContextStoreageImpl : NSObject <IESLiveInteractionLinkSessionContextStoreage> {
    BOOL _hasCreateContext;
    BOOL _hasCloseContext;
    BOOL _hasInviteContext;
    BOOL _hasApplyContext;
    BOOL _hasReplyContext;
    BOOL _hasJoinChannelContext;
    BOOL _hasLeaveContext;
    BOOL _hasKickoutContext;
    BOOL _hasDisconnectContext;
    BOOL _hasCancelWaitingContext;
    id<IESLiveInteractionLinkerCreateContextProtocol> _createContext;
    id<IESLiveInteractionLinkerCloseContextProtocol> _closeContext;
    id<IESLiveInteractionLinkerInviteContextProtocol> _inviteContext;
    id<IESLiveInteractionLinkerApplyContextProtocol> _applyContext;
    id<IESLiveInteractionLinkerReplyContextProtocol> _replyContext;
    id<IESLiveInteractionLinkerJoinChannelContextProtocol> _joinChannelContext;
    id<IESLiveInteractionLinkerLeaveContextProtocol> _leaveContext;
    id<IESLiveInteractionLinkerKickoutContextProtocol> _kickoutContext;
    id<IESLiveInteractionLinkerDisconnectContextProtocol> _disconnectContext;
    id<IESLiveInteractionLinkerCancelWaitingContextProtocol> _cancelWaitingContext;
}

@property (nonatomic) BOOL hasCreateContext;
@property (retain, nonatomic) id<IESLiveInteractionLinkerCreateContextProtocol> createContext;
@property (nonatomic) BOOL hasCloseContext;
@property (retain, nonatomic) id<IESLiveInteractionLinkerCloseContextProtocol> closeContext;
@property (nonatomic) BOOL hasInviteContext;
@property (retain, nonatomic) id<IESLiveInteractionLinkerInviteContextProtocol> inviteContext;
@property (nonatomic) BOOL hasApplyContext;
@property (retain, nonatomic) id<IESLiveInteractionLinkerApplyContextProtocol> applyContext;
@property (nonatomic) BOOL hasReplyContext;
@property (retain, nonatomic) id<IESLiveInteractionLinkerReplyContextProtocol> replyContext;
@property (nonatomic) BOOL hasJoinChannelContext;
@property (retain, nonatomic) id<IESLiveInteractionLinkerJoinChannelContextProtocol> joinChannelContext;
@property (nonatomic) BOOL hasLeaveContext;
@property (retain, nonatomic) id<IESLiveInteractionLinkerLeaveContextProtocol> leaveContext;
@property (nonatomic) BOOL hasKickoutContext;
@property (retain, nonatomic) id<IESLiveInteractionLinkerKickoutContextProtocol> kickoutContext;
@property (nonatomic) BOOL hasDisconnectContext;
@property (retain, nonatomic) id<IESLiveInteractionLinkerDisconnectContextProtocol> disconnectContext;
@property (nonatomic) BOOL hasCancelWaitingContext;
@property (retain, nonatomic) id<IESLiveInteractionLinkerCancelWaitingContextProtocol> cancelWaitingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCreateContext:(id)arg0;
- (id)joinChannelContext;
- (BOOL)hasLeaveContext;
- (id)leaveContext;
- (BOOL)hasKickoutContext;
- (id)kickoutContext;
- (id)applyContext;
- (BOOL)hasCloseContext;
- (id)closeContext;
- (void)setHasCloseContext:(BOOL)arg0;
- (void)setCloseContext:(id)arg0;
- (void)setHasDisconnectContext:(BOOL)arg0;
- (void)setDisconnectContext:(id)arg0;
- (void)setHasCancelWaitingContext:(BOOL)arg0;
- (void)setCancelWaitingContext:(id)arg0;
- (void)setHasApplyContext:(BOOL)arg0;
- (void)setApplyContext:(id)arg0;
- (void)setHasInviteContext:(BOOL)arg0;
- (void)setInviteContext:(id)arg0;
- (void)setHasJoinChannelContext:(BOOL)arg0;
- (void)setJoinChannelContext:(id)arg0;
- (BOOL)hasCreateContext;
- (BOOL)hasInviteContext;
- (id)inviteContext;
- (BOOL)hasApplyContext;
- (BOOL)hasReplyContext;
- (BOOL)hasJoinChannelContext;
- (BOOL)hasDisconnectContext;
- (id)disconnectContext;
- (BOOL)hasCancelWaitingContext;
- (id)cancelWaitingContext;
- (void)setHasCreateContext:(BOOL)arg0;
- (void)setHasReplyContext:(BOOL)arg0;
- (void)setHasLeaveContext:(BOOL)arg0;
- (void)setLeaveContext:(id)arg0;
- (void)setHasKickoutContext:(BOOL)arg0;
- (void)setKickoutContext:(id)arg0;
- (void).cxx_destruct;
- (id)createContext;
- (id)replyContext;
- (void)setReplyContext:(id)arg0;

@end
