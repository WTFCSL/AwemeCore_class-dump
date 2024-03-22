//
//     Generated by private class-dump
//

@class IESLivePrivilegeDanmakuSettingViewModel, IESLivePrivilegeDanmakuSettingItem, NSString, IESLivePrivilegeDanmakuSettingView, IESLivePrivilegeDanmakuSwitchViewModel;

@interface IESLivePrivilegeDanmakuFragment : IESLiveRoomComponent <IESLivePrivilegeModulePrivilegeDanmakuInterface> {
    IESLivePrivilegeDanmakuSettingViewModel *_settingViewModel;
    IESLivePrivilegeDanmakuSettingView *_settingView;
    IESLivePrivilegeDanmakuSettingItem *_settingItem;
    IESLivePrivilegeDanmakuSwitchViewModel *_switchModel;
}

@property (retain, nonatomic) IESLivePrivilegeDanmakuSettingViewModel *settingViewModel;
@property (weak, nonatomic) IESLivePrivilegeDanmakuSettingView *settingView;
@property (retain, nonatomic) IESLivePrivilegeDanmakuSettingItem *settingItem;
@property (retain, nonatomic) IESLivePrivilegeDanmakuSwitchViewModel *switchModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMixed;

- (void)setSettingView:(id)arg0;
- (id)settingView;
- (void)setSettingItem:(id)arg0;
- (void)setSwitchModel:(id)arg0;
- (id)switchModel;
- (void)componentBindService;
- (void)componentCreate;
- (id)createDanmakuSettingViewWithLandscape:(BOOL)arg0 style:(long long)arg1;
- (void)updatePrivilegeDanmakuTabWithCompletion:(id /* block */)arg0;
- (id)createDanmakuSwitchView;
- (void)bindData;
- (void)setSettingViewModel:(id)arg0;
- (id)settingViewModel;
- (void)cleanDanmakuTabData;
- (void)updatePrivilegeDanmakuTab;
- (void).cxx_destruct;
- (id)settingItem;

@end
