//
//     Generated by private class-dump
//

@class UIWindow, NSString, TCWebViewController, NSMutableArray;
@protocol TCWebViewKitDelegate;

@interface TCWebViewKit : NSObject <TCWebViewControllerDelegate> {
    BOOL _isStatusBarHidden;
    BOOL _isClosing;
    UIWindow *_window;
    UIWindow *_keywindow;
    NSMutableArray *_windowsArray;
    TCWebViewController *_webViewController;
    NSString *_requestUrl;
    NSString *_webTitle;
    id<TCWebViewKitDelegate> _delegate;
}

@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) UIWindow *keywindow;
@property (retain, nonatomic) NSMutableArray *windowsArray;
@property (retain, nonatomic) TCWebViewController *webViewController;
@property (retain, nonatomic) NSString *requestUrl;
@property (retain, nonatomic) NSString *webTitle;
@property (nonatomic) id<TCWebViewKitDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setWebTitle:(id)arg0;
- (id)webTitle;
- (void)webViewController:(id)arg0 didFailLoadWithError:(id)arg1;
- (void)loadReqURL:(id)arg0 webTitle:(id)arg1 delegate:(id)arg2;
- (void)openWithUrl:(id)arg0 webTitle:(id)arg1 delegate:(id)arg2;
- (void)webViewController:(id)arg0 didCloseWithLastError:(id)arg1;
- (BOOL)webViewController:(id)arg0 shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientationsWithWebVC:(id)arg0;
- (BOOL)shouldAutorotateWithWebVC:(id)arg0;
- (BOOL)webViewController:(id)arg0 shouldStartLoadWithRequest:(id)arg1 navigationType:(long long)arg2;
- (void)setWindowsArray:(id)arg0;
- (void)setKeywindow:(id)arg0;
- (id)keywindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcFrameByOrientation:(int)arg0;
- (void)MoveWindowIntoFrame;
- (void)onClickClose;
- (id)windowsArray;
- (void)onClickBarButton:(id)arg0;
- (id)createNavigationBarButton:(id)arg0 bindingJS:(id)arg1;
- (void)MoveWindowOutOfFrame:(BOOL)arg0;
- (void)MoveOtherWindowIntoFrame;
- (void)animationFinished:(id)arg0 finished:(BOOL)arg1 context:(void *)arg2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenRectOrientationIndependent;
- (id)initWithUrl:(id)arg0 webTitle:(id)arg1 delegate:(id)arg2;
- (void)setLeftNavigationBarButton:(id)arg0 bindingJS:(id)arg1;
- (void)setRightNavigationBarButton:(id)arg0 bindingJS:(id)arg1;
- (id)getViewControllerWithUrl:(id)arg0 webTitle:(id)arg1 delegate:(id)arg2;
- (void)doCloseWithNotAnimation;
- (void)MoveOtherWindowOutOfFrame;
- (BOOL)open;
- (id)requestUrl;
- (void)setNavigationTitle:(id)arg0;
- (void)setWindow:(id)arg0;
- (id)delegate;
- (id)window;
- (void)closeWindow;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setNavigationBarHidden:(id)arg0 animated:(id)arg1;
- (id)webViewController;
- (void)setWebViewController:(id)arg0;
- (void)doClose;
- (void)setRequestUrl:(id)arg0;

@end
