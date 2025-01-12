//
//     Generated by private class-dump
//

@class UIWindow, NSString, CSJAdInfoViewModel, NSObject;
@protocol CSJSKOverlayManagerDelegate;

@interface CSJSKOverlayManager : NSObject <CSJSKOverlayCallBackDelegate> {
    BOOL _hadShowSKOverlay;
    BOOL _shouldReopen;
    UIWindow *_window;
    NSObject<CSJSKOverlayManagerDelegate> *_delegate;
    CSJAdInfoViewModel *_indexModel;
}

@property (weak, nonatomic) UIWindow *window;
@property (weak, nonatomic) NSObject<CSJSKOverlayManagerDelegate> *delegate;
@property (nonatomic) BOOL hadShowSKOverlay;
@property (retain, nonatomic) CSJAdInfoViewModel *indexModel;
@property (nonatomic) BOOL shouldReopen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showOverlayWithSKANModel:(id)arg0;
+ (void)reShowOverlayWithIndexModel;
+ (BOOL)hadShowSKOverlay;
+ (void)setDelegateObjct:(id)arg0;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)shareInstance;
+ (void)dismissOverlay;

- (BOOL)hadShowSKOverlay;
- (void)setHadShowSKOverlay:(BOOL)arg0;
- (void)setIndexModel:(id)arg0;
- (id)indexModel;
- (void)registerNotification;
- (void)appstoreDidAppear:(id)arg0;
- (void)appstoreDidDisAppear:(id)arg0;
- (BOOL)shouldReopen;
- (void)setShouldReopen:(BOOL)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setWindow:(id)arg0;
- (id)delegate;
- (id)window;
- (void)setDelegate:(id)arg0;
- (void)storeOverlay:(id)arg0 willStartPresentation:(id)arg1;
- (void)storeOverlay:(id)arg0 didFinishPresentation:(id)arg1;
- (void)storeOverlay:(id)arg0 willStartDismissal:(id)arg1;
- (void)storeOverlay:(id)arg0 didFinishDismissal:(id)arg1;
- (void)storeOverlay:(id)arg0 didFailToLoadWithError:(id)arg1;

@end
