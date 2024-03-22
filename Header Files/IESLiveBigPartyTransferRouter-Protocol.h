//
//     Generated by private class-dump
//

@protocol IESLiveBigPartyTransferRouter <NSObject>

- (id)linkedUsers;
- (BOOL)isSelfGuest;
- (BOOL)supportOpenCamera;
- (BOOL)isInGiftPK;
- (BOOL)isBigPartyAnchorLinking;
- (BOOL)isInteractEnable;
- (BOOL)isInPKAudienceLinkmic;
- (long long)linkedUserCount;
- (BOOL)isFirstInit;
- (BOOL)checkPKDisableWhileInteract:(BOOL)arg0;
- (void)didClickInteractiveItemInPK;
- (BOOL)isResumingBigParty;
- (void)startPKAudienceLinkmicFromBigPartyWithoutGuest;
- (void)startPKAudienceLinkmicFromBigPartyWithGuest;
- (void)startPKAudienceLinkmicFromPKWithCompletion:(id /* block */)arg0;
- (void)endPKAudienceLinkmicToPKCompletion:(id /* block */)arg0;
- (void)endPKAudienceLinkmicToBigPartyWithGuest:(id)arg0 previewView:(id)arg1;
- (void)endPKAudienceLinkmicToBigPartyWithoutGuest;
- (void)stopAnchorInteract;
- (void)endBigPartyWithoutGusetBeforeStartMultiLinker;
- (BOOL)skipSetAnchorFrameWhileStartBigParty;
- (void)resumeBigPartyAnchorPreviewFrame;
- (void)switchPreapplyStatusWithDisplayText:(id)arg0;
- (void)checkApplyPermissionError:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)enabledApplyDetailForScene:(unsigned long long)arg0;
- (BOOL)isJoinChannelAfterFollow;
- (void)clearJoinChannelAfterFollow;
- (BOOL)isInPKAudienceLinkmicEnterRoom:(id)arg0;

@end