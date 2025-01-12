//
//     Generated by private class-dump
//

@class NSString, NSDictionary, WKWebView, UIView;

@interface CJPayBaseHybridWebview : UIView {
    WKWebView *_webview;
    NSString *_containerID;
    UIView *_hybridView;
    NSString *_scheme;
    id _delegate;
    NSDictionary *_params;
}

@property (retain, nonatomic) UIView *hybridView;
@property (copy, nonatomic) NSString *scheme;
@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) NSDictionary *params;
@property (weak, nonatomic) WKWebView *webview;
@property (copy, nonatomic) NSString *containerID;

- (void)sendEvent:(id)arg0 params:(id)arg1;
- (id)hybridView;
- (void)setHybridView:(id)arg0;
- (id)initWithScheme:(id)arg0 delegate:(id)arg1 initialData:(id)arg2;
- (void)setScheme:(id)arg0;
- (void)setContainerID:(id)arg0;
- (void).cxx_destruct;
- (id)containerID;
- (id)scheme;
- (id)delegate;
- (id)params;
- (void)setDelegate:(id)arg0;
- (void)setParams:(id)arg0;
- (id)webview;
- (void)setWebview:(id)arg0;
- (void)p_init;

@end
