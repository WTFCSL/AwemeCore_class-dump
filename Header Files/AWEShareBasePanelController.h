//
//     Generated by private class-dump
//

@class UIVisualEffect, NSString, UIVisualEffectView, NSMutableSet, UIView, NSMutableOrderedSet;

@interface AWEShareBasePanelController : UIViewController <AWEUIToastCustomizing, AWEShareView> {
    NSMutableOrderedSet *_extensionSet;
    UIVisualEffectView *_contentVisualEffectView;
    NSMutableSet *_receivedLifeCycleMessages;
}

@property (retain, nonatomic) UIVisualEffectView *contentVisualEffectView;
@property (retain, nonatomic) NSMutableSet *receivedLifeCycleMessages;
@property (readonly, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSMutableOrderedSet *extensionSet;
@property (readonly, nonatomic) UIVisualEffect *contentVisualEffect;
@property (readonly, nonatomic) double viewTopCornerRadius;
@property (readonly, nonatomic) BOOL dismissesAutomatically;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)awe_shouldBypassPresentationHook;
- (id)aweui_toastTargetViewController;
- (void)addDismissedHandler:(id /* block */)arg0;
- (void)addWillDismissHandler:(id /* block */)arg0;
- (void)removeExtension:(id)arg0;
- (BOOL)dismissesAutomatically;
- (void)p_notifyModalPanelWillDisappear;
- (void)presentViewController:(id)arg0 animated:(BOOL)arg1 dismissPanel:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)contentVisualEffect;
- (double)viewTopCornerRadius;
- (id)contentVisualEffectView;
- (BOOL)markLifeCycleMessageReceived:(SEL)arg0;
- (void)notifyExtensionsWithSelector:(SEL)arg0;
- (void)addRoundedCornerIfNeeded;
- (id)receivedLifeCycleMessages;
- (id)extensionSet;
- (void)setExtensionSet:(id)arg0;
- (void)setContentVisualEffectView:(id)arg0;
- (void)setReceivedLifeCycleMessages:(id)arg0;
- (void)addNotificationObservers;
- (BOOL)isUserInteractionEnabled;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setUserInteractionEnabled:(BOOL)arg0;
- (void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)addExtension:(id)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)contentView;
- (void)applicationDidEnterBackground:(id)arg0;
- (void)dismissAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
