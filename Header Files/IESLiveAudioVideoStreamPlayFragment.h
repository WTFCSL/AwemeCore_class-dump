//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveAudioVideoStreamPlayFragment : IESLiveRoomComponent <IESLiveSocialInteractAction, IESLiveRevenueInteractAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)endRevenueInteractWithScene:(unsigned long long)arg0;
- (void)currentLayoutDidChangedFrom:(id)arg0 to:(id)arg1;
- (void)interactionModeStartedWithLayout:(id)arg0;
- (void)interactionModeEndedWithLayout:(id)arg0;
- (void)setup;

@end