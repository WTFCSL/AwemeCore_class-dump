//
//     Generated by private class-dump
//

@class CSJWKWebViewClient;

@interface CSJWebViewOwner : NSObject {
    BOOL _isCache;
    CSJWKWebViewClient *_webViewClient;
}

@property (retain, nonatomic) CSJWKWebViewClient *webViewClient;
@property (nonatomic) BOOL isCache;

- (BOOL)isCache;
- (id)webViewClient;
- (void)setWebViewClient:(id)arg0;
- (void)setIsCache:(BOOL)arg0;
- (id)initWithWebViewClient:(id)arg0 isCache:(BOOL)arg1;
- (void).cxx_destruct;
- (void)dealloc;

@end
