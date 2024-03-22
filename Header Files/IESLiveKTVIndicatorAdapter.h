//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveKTVIndicatorAdapter : NSObject <IESLiveBigPartyActions, IESLiveMultiAudioAction, IESLiveSocialInteractAction, IESLiveKTVIndicatorLayoutAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)arg0;
- (void)startRevenueInteractWithScene:(unsigned long long)arg0;
- (void)currentLayoutUIDidUpdateFrom:(id)arg0 to:(id)arg1;
- (void)bigPartyAllMembersListDidChange:(id)arg0;
- (void)didMultiAudioSceneChangeFrom:(unsigned long long)arg0 to:(unsigned long long)arg1;
- (void)resumeLayout;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getSceneInsets;
- (void)pr_resume:(unsigned long long)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })p_getInsetsWithScene:(unsigned long long)arg0 layout:(id)arg1;
- (void)pr_resumeWithLayout:(id)arg0;
- (void)pr_resumeWithScene:(unsigned long long)arg0 layout:(id)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getInsetsInBigParty;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getInsetsInEqualBigParty;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getInsetsInMultiAudio;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getInsetsInMultiLinker;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getInsetsInDoubleInteract;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getInsetsInAudio;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getInsetsInNormalVideo;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_bigPartyGuestListViewFrame;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })p_getInsetsWithScene:(unsigned long long)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })p_getInsetsWithLayout:(id)arg0;

@end
