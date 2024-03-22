//
//     Generated by private class-dump
//

@class UITapGestureRecognizer, NSString, WKWebViewLynxGestureRecognizerDelegate, BDARVPayloadData;

@interface BDARVLynxUIWebView : LynxUI <BDARVLynxEmbedViewDelegate, UIGestureRecognizerDelegate> {
    long long _position;
    NSString *_preload;
    NSString *_interceptEvent;
    WKWebViewLynxGestureRecognizerDelegate *_wkWebviewDelegate;
    BDARVPayloadData *_payloadData;
    id _oldDelegate;
    UITapGestureRecognizer *_tap;
}

@property (retain, nonatomic) WKWebViewLynxGestureRecognizerDelegate *wkWebviewDelegate;
@property (retain, nonatomic) BDARVPayloadData *payloadData;
@property (weak, nonatomic) id oldDelegate;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (nonatomic) long long position;
@property (copy, nonatomic) NSString *preload;
@property (copy, nonatomic) NSString *interceptEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__lynx_prop_config__1660;
+ (id)__lynx_prop_config__1721;
+ (id)__lynx_prop_config__3522;
+ (id)__lynx_prop_config__3613;
+ (id)__lynx_ui_method_config__3684;
+ (id)__lynx_ui_method_config__3795;
+ (id)__lynx_prop_config__3936;
+ (id)__lynx_ui_method_config__4067;
+ (id)__lynx_ui_method_config__4188;

- (void)propsDidUpdate;
- (void)setOldDelegate:(id)arg0;
- (id)oldDelegate;
- (void)handelTap:(id)arg0;
- (void)embedViewDidScroll:(id)arg0;
- (void)setPosition:(long long)arg0 requestReset:(BOOL)arg1;
- (void)setPreload:(id)arg0 requestReset:(BOOL)arg1;
- (void)setInterceptGesture:(id)arg0 requestReset:(BOOL)arg1;
- (void)setIsVisibleToUser:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)reload:(id)arg0 withResult:(id /* block */)arg1;
- (void)sendEvent:(id)arg0 withResult:(id /* block */)arg1;
- (void)setInterceptEvent:(id)arg0 requestReset:(BOOL)arg1;
- (void)goBack:(id)arg0 withResult:(id /* block */)arg1;
- (void)canGoBack:(id)arg0 withResult:(id /* block */)arg1;
- (id)interceptEvent;
- (void)setInterceptEvent:(id)arg0;
- (id)wkWebviewDelegate;
- (void)setWkWebviewDelegate:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)preload;
- (long long)position;
- (void)setPayloadData:(id)arg0;
- (void)setPosition:(long long)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)dealloc;
- (id)payloadData;
- (id)tap;
- (void)setTap:(id)arg0;
- (id)createView;
- (void)setPreload:(id)arg0;

@end
