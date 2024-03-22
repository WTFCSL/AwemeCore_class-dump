//
//     Generated by private class-dump
//

@interface AWECloudCommandNetworkUtility : NSObject

+ (void)requestWithUrl:(id)arg0 requestMethod:(long long)arg1 params:(id)arg2 requestHeaders:(id)arg3 success:(id /* block */)arg4 failure:(id /* block */)arg5;
+ (void)uploadMultiDataWithUrl:(id)arg0 dataArray:(id)arg1 params:(id)arg2 commonParams:(id)arg3 requestHeaders:(id)arg4 success:(id /* block */)arg5 failure:(id /* block */)arg6;
+ (void)uploadDataWithUrl:(id)arg0 fileName:(id)arg1 fileType:(id)arg2 data:(id)arg3 params:(id)arg4 commonParams:(id)arg5 mimeType:(id)arg6 requestHeaders:(id)arg7 success:(id /* block */)arg8 failure:(id /* block */)arg9;
+ (id)fileMimeTypeWithPath:(id)arg0;
+ (void)requestWithUrl:(id)arg0 requestMethod:(long long)arg1 params:(id)arg2 requestHeaders:(id)arg3 needDecodeResponseData:(BOOL)arg4 success:(id /* block */)arg5 failure:(id /* block */)arg6;
+ (void)uploadDataWithUrl:(id)arg0 fileName:(id)arg1 data:(id)arg2 params:(id)arg3 mimeType:(id)arg4 requestHeaders:(id)arg5 success:(id /* block */)arg6 failure:(id /* block */)arg7;
+ (void)_dealWithResultData:(id)arg0 ran:(id)arg1 error:(id)arg2 url:(id)arg3 success:(id /* block */)arg4 failure:(id /* block */)arg5;
+ (id)_uploadRequestBodyWithMultiData:(id)arg0 params:(id)arg1 commonParams:(id)arg2;
+ (void)initialize;

@end
