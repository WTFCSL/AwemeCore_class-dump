//
//     Generated by private class-dump
//

@interface GDAAIDSDK : NSObject

+ (id)getSDKVersion;
+ (id)getZVersion;
+ (id)getZData;
+ (BOOL)buildRequstParam:(id)arg0;
+ (id)getAAID;
+ (void)getAAIDWithCompletion:(id /* block */)arg0;
+ (void)checkZDataWithCompletion:(id /* block */)arg0 force:(BOOL)arg1;
+ (void)retryAfterDelay:(id)arg0;
+ (void)init:(id /* block */)arg0;

@end
