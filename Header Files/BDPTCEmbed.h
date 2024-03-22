//
//     Generated by private class-dump
//

@class NSString, WKWebView, UIView, UIScrollView, NSObject;
@protocol BDPTCRenderDelegate;

@interface BDPTCEmbed : NSObject {
    BOOL _autoResizeWithSuperView;
    BOOL _needBecomeFirstResponderWhenRerender;
    BOOL _needHookResponder;
    BOOL _holdKeyboard;
    NSString *_embedId;
    UIView *_nativeView;
    UIScrollView *_scrollView;
    NSObject<BDPTCRenderDelegate> *_delegate;
    WKWebView *_webView;
}

@property (copy, nonatomic) NSString *embedId;
@property (weak, nonatomic) WKWebView *webView;
@property (retain, nonatomic) UIView *nativeView;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) NSObject<BDPTCRenderDelegate> *delegate;
@property (nonatomic) BOOL autoResizeWithSuperView;
@property (nonatomic) BOOL needBecomeFirstResponderWhenRerender;
@property (nonatomic) BOOL needHookResponder;
@property (nonatomic) BOOL holdKeyboard;

- (id)nativeView;
- (void)setNativeView:(id)arg0;
- (id)embedId;
- (BOOL)holdKeyboard;
- (void)setHoldKeyboard:(BOOL)arg0;
- (void)setNeedHookResponder:(BOOL)arg0;
- (void)setEmbedId:(id)arg0;
- (BOOL)autoResizeWithSuperView;
- (void)setAutoResizeWithSuperView:(BOOL)arg0;
- (BOOL)needBecomeFirstResponderWhenRerender;
- (void)setNeedBecomeFirstResponderWhenRerender:(BOOL)arg0;
- (BOOL)needHookResponder;
- (id)initWithEmbedId:(id)arg0;
- (id)initWithEmbedId:(id)arg0 webview:(id)arg1 scrollView:(id)arg2 nativeView:(id)arg3;
- (void)updateScrollView:(id)arg0;
- (void)setScrollView:(id)arg0;
- (void)setWebView:(id)arg0;
- (id)webView;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)scrollView;

@end