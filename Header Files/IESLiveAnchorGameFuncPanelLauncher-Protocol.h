//
//     Generated by private class-dump
//

@class IESLiveAnchorInteractiveGameItem;

@protocol IESLiveAnchorGameFuncPanelLauncher <NSObject>

@property (readonly, nonatomic) IESLiveAnchorInteractiveGameItem *anchorGameItem;

- (void)processWhenStartAnchorInteractiveGameItem:(id)arg0 source:(id)arg1 activityName:(id)arg2 sourceFrom:(id)arg3;
- (void)processAutoStartGameWhenFetchAnchorInteractiveGameListCompleted:(id)arg0;
- (void)showSwitchGameAlertWithWillStartGameItem:(id)arg0 action:(id /* block */)arg1 cancel:(id /* block */)arg2;
- (id)anchorGameItem;

@end
