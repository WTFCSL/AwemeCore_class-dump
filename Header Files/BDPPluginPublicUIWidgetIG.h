//
//     Generated by private class-dump
//

@class UIViewController;

@interface BDPPluginPublicUIWidgetIG : BDPBridgeInstancePlugin {
    BOOL _haveSheet;
    UIViewController *_controller;
}

@property (weak, nonatomic) UIViewController *controller;
@property (nonatomic) BOOL haveSheet;

- (void)showToastWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)hideToastWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)showModalWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)showActionSheetWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (BOOL)haveSheet;
- (void)setHaveSheet:(BOOL)arg0;
- (void)setController:(id)arg0;
- (void).cxx_destruct;
- (id)controller;

@end