//
//     Generated by private class-dump
//

@interface FlowKit.MessageLynxCell : FlowKit.MessageCell <IvyKit.IvyPluginViewLifeCycle> {
    void /* unknown type, empty encoding */ heightChangedCallback;
    void /* unknown type, empty encoding */ handleAppMsgEventCallback;
    void /* unknown type, empty encoding */ displayMessage;
    void /* unknown type, empty encoding */ pluginView;
    void /* unknown type, empty encoding */ templateLoaded;
    void /* unknown type, empty encoding */ templateURL;
    void /* unknown type, empty encoding */ botId;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_failedView;
}

- (void)updateDarkModeTheme;
- (void)fetchCardDetail;
- (void)viewDidFinishLoadWithURLWithView:(id)arg0 url:(id)arg1;
- (void)viewDidChangeIntrinsicContentSizeWithView:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (void)viewDidUpdateWithView:(id)arg0;
- (void)viewWillDeallocWithView:(id)arg0;
- (void)viewDidCreateWithView:(id)arg0;
- (void)viewDidFirstScreenWithView:(id)arg0;
- (void)viewDidLoadFailedWithURLWithView:(id)arg0 url:(id)arg1 error:(id)arg2;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareForReuse;
- (void)dealloc;

@end
