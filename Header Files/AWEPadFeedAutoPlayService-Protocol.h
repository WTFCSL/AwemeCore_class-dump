//
//     Generated by private class-dump
//

@protocol AWEPadFeedAutoPlayService <AWEFeedAutoPlayService>

@property (readonly, nonatomic) BOOL allFeedEnable;

- (BOOL)shouldShowAutoPlayBtnForScene:(id)arg0;
- (id)createAutoPlayFloatingButtion;
- (void)performAddAutoPlayFloatingBtnController:(id /* block */)arg0;
- (void)performAddLongPressSwitch:(id /* block */)arg0;
- (BOOL)allFeedEnable;
- (void)performAddAutoPlayControlBarEelement:(id /* block */)arg0;

@end
