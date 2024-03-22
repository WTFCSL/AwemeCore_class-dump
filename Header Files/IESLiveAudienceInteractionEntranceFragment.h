//
//     Generated by private class-dump
//

@class NSString, IESLiveInteractionAudienceCustomItemView;
@protocol IESLiveCompoundSubscription, IESLiveMessageInteractionModuleAudienceMoreToolsInterface;

@interface IESLiveAudienceInteractionEntranceFragment : IESLiveRoomComponent <IESLiveToolbarComponentHandler, IESLiveSocialInteractAction, IESLiveRoomThemeActions, IESLiveAudienceInteractionEntranceRouter, IESLiveInteractionLinkerServiceAction> {
    IESLiveInteractionAudienceCustomItemView *_toolBarAudienceInteractionEntrance;
    IESLiveInteractionAudienceCustomItemView *_morePanelEntrancePlaceHolder;
    long long _currentEntrancePosition;
    id<IESLiveCompoundSubscription> _componentDisposable;
    id<IESLiveMessageInteractionModuleAudienceMoreToolsInterface> _moreToolsInterface;
}

@property (retain, nonatomic) IESLiveInteractionAudienceCustomItemView *toolBarAudienceInteractionEntrance;
@property (retain, nonatomic) IESLiveInteractionAudienceCustomItemView *morePanelEntrancePlaceHolder;
@property (nonatomic) long long currentEntrancePosition;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> componentDisposable;
@property (weak, nonatomic) id<IESLiveMessageInteractionModuleAudienceMoreToolsInterface> moreToolsInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)toolbarReceiveComponent:(id)arg0 completion:(id /* block */)arg1;
- (void)toolbarComponentRemovedReason:(unsigned long long)arg0 extra:(id)arg1;
- (void)roomThemeNeedRefresh;
- (void)muteStateDidChange:(BOOL)arg0 reason:(id)arg1;
- (void)updateAudienceInteractionEntranceWithStatus:(unsigned long long)arg0;
- (void)updateUnreadInteractionApplicationCount:(id)arg0;
- (void)onPreapplySucceeded;
- (void)onCancelPreapplySucceeded;
- (void)interactionLinkerService:(id)arg0 userStateDidChangedFrom:(long long)arg1 to:(long long)arg2;
- (void)enableShowAudienceInteractionEntrance;
- (id)componentDisposable;
- (void)setCurrentEntrancePosition:(long long)arg0;
- (long long)currentEntrancePosition;
- (id)toolBarAudienceInteractionEntrance;
- (id)morePanelEntrancePlaceHolder;
- (void)setToolBarAudienceInteractionEntrance:(id)arg0;
- (id)moreToolsInterface;
- (void)setMorePanelEntrancePlaceHolder:(id)arg0;
- (void)disableShowAudienceInteractionEntrance;
- (void)setComponentDisposable:(id)arg0;
- (void)setMoreToolsInterface:(id)arg0;
- (void).cxx_destruct;

@end