//
//     Generated by private class-dump
//

@class IESLiveNativeAppShelfManageViewController, NSString;
@protocol IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppShelfManagerPlugin : NSObject <IESLiveNativeAppShelfManagerPlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveNativeAppPluginDataStreamHandler, IESLiveNativeAppShelfManageDelegate> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
    IESLiveNativeAppShelfManageViewController *_managerVC;
}

@property (weak, nonatomic) IESLiveNativeAppShelfManageViewController *managerVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (id)initWithDIContext:(id)arg0 pluginContext:(id)arg1;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (void)nativeAppShelfInfoDidChange:(id)arg0 oldVersion:(id)arg1;
- (void)dismissManagerVCIfNeeded:(id /* block */)arg0;
- (void)openShelfManagerVCWithSource:(id)arg0 isMounted:(BOOL)arg1;
- (void)goBackToSquareOrBeforeLivePage;
- (id)managerVC;
- (void)goBackToBeforeLivePage;
- (void)setManagerVC:(id)arg0;
- (void)saveCardManageResult:(id)arg0;
- (void)modifyShelfInfo:(id)arg0;
- (void)manageCompleteWithShelfInfo:(id)arg0;
- (void)couponButtonDidShow:(id)arg0;
- (void)couponButtonDidClickWithShelfInfo:(id)arg0 couponInfo:(id)arg1;
- (void)manageViewControllerDidClickAddMore:(id)arg0;
- (void)manageDidDeletedToShelfInfo:(id)arg0 oldShelfInfo:(id)arg1;
- (void)manageViewControllerWillCloseWithShelfInfo:(id)arg0;
- (void)shelfManageControllerDidEditedCard:(unsigned long long)arg0 toNewInfo:(id)arg1;
- (void)shelfManageControllerDidSelectIndex:(unsigned long long)arg0 shelfInfo:(id)arg1;
- (void)shelfManageControllerOpenFirstCard;
- (void)nativeAppShelfManagerVC:(id)arg0 couponInfoBlock:(id /* block */)arg1;
- (void).cxx_destruct;
- (id)pluginContext;

@end