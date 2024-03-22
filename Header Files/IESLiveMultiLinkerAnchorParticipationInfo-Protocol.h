//
//     Generated by private class-dump
//

@class NSString, NSNumber, HTSLiveUser;

@protocol IESLiveMultiLinkerAnchorParticipationInfo <NSObject>

@property (readonly, nonatomic) HTSLiveUser *userApplyingTo;
@property (readonly, copy, nonatomic) NSString *sourceOfUserApplyingTo;
@property (retain, nonatomic) NSNumber *diamondInMultiLink;
@property (copy, nonatomic) NSString *multiLinkSuccessType;

- (id)userApplyingTo;
- (void)cancelInviteUser:(id)arg0;
- (id)sourceOfUserApplyingTo;
- (void)startApply2User:(id)arg0;
- (void)cancelApply2User:(id)arg0;
- (void)sucessApply2User:(id)arg0;
- (void)startInviteUser:(id)arg0;
- (void)sucessInviteUser:(id)arg0;
- (BOOL)hasPendingInvitations;
- (void)dismissParticipationAlert:(id /* block */)arg0;
- (id)diamondInMultiLink;
- (void)setDiamondInMultiLink:(id)arg0;
- (id)multiLinkSuccessType;
- (void)setMultiLinkSuccessType:(id)arg0;

@end
