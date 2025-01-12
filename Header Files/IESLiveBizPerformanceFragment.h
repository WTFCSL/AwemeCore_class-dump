//
//     Generated by private class-dump
//

@class IESLiveMoreToolsScrollSettingView, IESLiveBizPerformanceStore, NSString, NSMutableArray;

@interface IESLiveBizPerformanceFragment : IESLiveRoomComponent <IESLiveToolbarComponentHandler, IESLiveBizPerformanceStoreDelegate> {
    IESLiveBizPerformanceStore *_store;
    NSMutableArray *_optItems;
    IESLiveMoreToolsScrollSettingView *_settingView;
}

@property (retain, nonatomic) IESLiveBizPerformanceStore *store;
@property (retain, nonatomic) NSMutableArray *optItems;
@property (retain, nonatomic) IESLiveMoreToolsScrollSettingView *settingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)setSettingView:(id)arg0;
- (id)settingView;
- (void)componentCreate;
- (void)componentMount;
- (void)toolbarReceiveComponent:(id)arg0 completion:(id /* block */)arg1;
- (void)showSettingView;
- (void)toastCancelAutoChange;
- (void)p_setDegradeEnabled:(BOOL)arg0 autoChange:(BOOL)arg1;
- (void)p_setUpgradeEnabled:(BOOL)arg0 autoChange:(BOOL)arg1;
- (void)pushChangeSucceed;
- (void)tr_trackAndLogSwitchChanged:(id)arg0 on:(BOOL)arg1 autoChange:(BOOL)arg2;
- (void)prepareOptItems;
- (id)optItems;
- (void)setOptItems:(id)arg0;
- (id)p_smoothLiveContent;
- (id)p_enhanceLiveContent;
- (id)p_contentWith:(BOOL)arg0 scene:(id)arg1 offContent:(id)arg2 onContent:(id)arg3 prefix:(id)arg4 suffix:(id)arg5;
- (void)bizPerformanceStore:(id)arg0 pushMode:(long long)arg1 content:(id)arg2;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;

@end
