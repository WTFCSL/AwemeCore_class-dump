//
//     Generated by private class-dump
//

@class NSString, IESLiveInteractionLinkerInviteParams, IESLiveInteractionLinkerApplyParams, IESLiveInteractionLinkerParams, IESLiveInteractionLinkerCreateParams, IESLiveInteractionLinkerCloseParams, IESLiveInteractionLinkerLeaveParams, IESLiveInteractionLinkerPermitParams, IESLiveInteractionLinkerKickoutParams, IESLiveInteractionLinkerReplyParams;

@interface IESLiveInteractionLinkSessionParamsStoreageImpl : NSObject <IESLiveInteractionLinkSessionParamsStoreage> {
    BOOL _hasCreateParams;
    BOOL _hasCloseParams;
    BOOL _hasLeaveParams;
    BOOL _hasApplyParams;
    BOOL _hasCancelApplyParams;
    BOOL _hasReplyParams;
    BOOL _hasInviteParams;
    BOOL _hasPermitParams;
    BOOL _hasKickoutParams;
    IESLiveInteractionLinkerCreateParams *_createParams;
    IESLiveInteractionLinkerCloseParams *_closeParams;
    IESLiveInteractionLinkerLeaveParams *_leaveParams;
    IESLiveInteractionLinkerApplyParams *_applyParams;
    IESLiveInteractionLinkerParams *_cancelApplyParams;
    IESLiveInteractionLinkerReplyParams *_replyParams;
    IESLiveInteractionLinkerInviteParams *_inviteParams;
    IESLiveInteractionLinkerPermitParams *_permitParams;
    IESLiveInteractionLinkerKickoutParams *_kickoutParams;
}

@property (nonatomic) BOOL hasCreateParams;
@property (retain, nonatomic) IESLiveInteractionLinkerCreateParams *createParams;
@property (nonatomic) BOOL hasCloseParams;
@property (retain, nonatomic) IESLiveInteractionLinkerCloseParams *closeParams;
@property (nonatomic) BOOL hasLeaveParams;
@property (retain, nonatomic) IESLiveInteractionLinkerLeaveParams *leaveParams;
@property (nonatomic) BOOL hasApplyParams;
@property (retain, nonatomic) IESLiveInteractionLinkerApplyParams *applyParams;
@property (nonatomic) BOOL hasCancelApplyParams;
@property (retain, nonatomic) IESLiveInteractionLinkerParams *cancelApplyParams;
@property (nonatomic) BOOL hasReplyParams;
@property (retain, nonatomic) IESLiveInteractionLinkerReplyParams *replyParams;
@property (nonatomic) BOOL hasInviteParams;
@property (retain, nonatomic) IESLiveInteractionLinkerInviteParams *inviteParams;
@property (nonatomic) BOOL hasPermitParams;
@property (retain, nonatomic) IESLiveInteractionLinkerPermitParams *permitParams;
@property (nonatomic) BOOL hasKickoutParams;
@property (retain, nonatomic) IESLiveInteractionLinkerKickoutParams *kickoutParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)closeParams;
- (void)setCloseParams:(id)arg0;
- (id)applyParams;
- (id)leaveParams;
- (void)setHasCreateParams:(BOOL)arg0;
- (void)setHasCloseParams:(BOOL)arg0;
- (void)setHasInviteParams:(BOOL)arg0;
- (void)setInviteParams:(id)arg0;
- (void)setHasPermitParams:(BOOL)arg0;
- (void)setPermitParams:(id)arg0;
- (void)setHasKickoutParams:(BOOL)arg0;
- (void)setKickoutParams:(id)arg0;
- (void)setHasLeaveParams:(BOOL)arg0;
- (void)setLeaveParams:(id)arg0;
- (void)setHasApplyParams:(BOOL)arg0;
- (void)setApplyParams:(id)arg0;
- (void)setHasCancelApplyParams:(BOOL)arg0;
- (void)setCancelApplyParams:(id)arg0;
- (void)setHasReplyParams:(BOOL)arg0;
- (void)setReplyParams:(id)arg0;
- (BOOL)hasCreateParams;
- (BOOL)hasCloseParams;
- (BOOL)hasLeaveParams;
- (BOOL)hasApplyParams;
- (BOOL)hasCancelApplyParams;
- (id)cancelApplyParams;
- (BOOL)hasReplyParams;
- (id)replyParams;
- (BOOL)hasInviteParams;
- (id)inviteParams;
- (BOOL)hasPermitParams;
- (id)permitParams;
- (BOOL)hasKickoutParams;
- (id)kickoutParams;
- (void).cxx_destruct;
- (id)createParams;
- (void)setCreateParams:(id)arg0;

@end