//
//     Generated by private class-dump
//

@class IESLivePrivilegeDanmakuSettingViewModel, IESLivePrivilegeDanmakuSwitch;

@interface IESLivePrivilegeDanmakuSwitchViewModel : NSObject {
    BOOL _switchOn;
    IESLivePrivilegeDanmakuSwitch *_view;
    IESLivePrivilegeDanmakuSettingViewModel *_settingViewModel;
}

@property (weak, nonatomic) IESLivePrivilegeDanmakuSwitch *view;
@property (nonatomic) BOOL switchOn;
@property (retain, nonatomic) IESLivePrivilegeDanmakuSettingViewModel *settingViewModel;

- (void)bindObserver;
- (void)setSettingViewModel:(id)arg0;
- (id)settingViewModel;
- (void)updateSwitchAction;
- (id)init;
- (void).cxx_destruct;
- (void)setView:(id)arg0;
- (id)view;
- (void)setSwitchOn:(BOOL)arg0;
- (BOOL)switchOn;

@end
