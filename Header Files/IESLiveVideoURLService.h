//
//     Generated by private class-dump
//

@interface IESLiveVideoURLService : NSObject

+ (long long)currentTs;
+ (id)MD5HashString:(id)arg0;
+ (id)signFromVideoID:(id)arg0 ts:(long long)arg1;
+ (id)urlWithVideoId:(id)arg0;
+ (id)urlForV1WithVideoId:(id)arg0 businessToken:(id)arg1;
+ (id)toutiaoVideoAPIVersion;
+ (id)toutiaoVideoUser;
+ (id)toutiaoVideoAPIURL;
+ (id)videoAPIURL;
+ (id)toutiaoVideoSecretKey;
+ (id)urlForV1WithVideoId:(id)arg0;
+ (void)saveToutiaoVideoUserKey:(id)arg0;
+ (void)saveToutiaoVideoSecretKey:(id)arg0;
+ (id)baseURL;

@end
