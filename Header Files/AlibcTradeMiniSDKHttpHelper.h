//
//     Generated by private class-dump
//

@interface AlibcTradeMiniSDKHttpHelper : NSObject

+ (id)sharedHelper;

- (void)sendPostRequest:(id)arg0 headerFields:(id)arg1 params:(id)arg2 successCallback:(id /* block */)arg3 failedCallback:(id /* block */)arg4;
- (void)sendGetRequest:(id)arg0 headerFields:(id)arg1 successCallback:(id /* block */)arg2 failedCallback:(id /* block */)arg3;

@end