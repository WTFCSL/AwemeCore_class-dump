//
//     Generated by private class-dump
//

@protocol TTFetcherProtocol <NSObject>

- (void)onCancel:(id)arg0;
- (void)onTimeout:(int)arg0 error:(int)arg1 details:(id)arg2 requestLog:(id)arg3;
- (void)onURLFetchComplete:(const struct URLFetcher { void /* function */ **x0; } *)arg0;
- (void)onURLFetchDownloadProgress:(const struct URLFetcher { void /* function */ **x0; } *)arg0 current:(long long)arg1 total:(long long)arg2 current_network_bytes:(long long)arg3;
- (void)onURLFetchUploadProgress:(const struct URLFetcher { void /* function */ **x0; } *)arg0 current:(long long)arg1 total:(long long)arg2;
- (void)onResponseStarted:(const struct URLFetcher { void /* function */ **x0; } *)arg0;
- (void)onURLRedirectReceived:(const struct URLFetcher { void /* function */ **x0; } *)arg0 redirect_info:(const void *)arg1 response_info:(const void *)arg2;
- (void)onReadResponseData:(id)arg0;

@end
