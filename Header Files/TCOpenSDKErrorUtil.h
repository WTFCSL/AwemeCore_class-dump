//
//     Generated by private class-dump
//

@interface TCOpenSDKErrorUtil : NSObject

+ (id)openSDKErrorMsgForErrorCode:(int)arg0;
+ (id)openSDKErrorWithCode:(int)arg0 extraInfo:(id)arg1;
+ (long long)filterURLErrorCode:(long long)arg0;
+ (id)openSDKErrorWithCommonServerCode:(int)arg0 extraInfo:(id)arg1;
+ (id)apiResponse:(id)arg0;
+ (id)openSDKErrorFromOSError:(id)arg0;
+ (void)apiResponseConvert:(id)arg0;
+ (id)apiResponseFromErrorCode:(int)arg0;

@end