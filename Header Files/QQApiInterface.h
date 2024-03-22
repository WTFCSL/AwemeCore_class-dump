//
//     Generated by private class-dump
//

@interface QQApiInterface : NSObject

+ (long long)sendReq:(id)arg0;
+ (BOOL)handleOpenURL:(id)arg0 delegate:(id)arg1;
+ (void)stopLog;
+ (void)startLogWithBlock:(id /* block */)arg0;
+ (id)serializeURL:(id)arg0 params:(id)arg1;
+ (BOOL)isQQInstalled;
+ (BOOL)isTIMInstalled;
+ (BOOL)isQQSupportApi;
+ (void)setSwitchPrintLogToFile:(BOOL)arg0;
+ (void)showMessageRequestFromQQ:(id)arg0 delegate:(id)arg1;
+ (void)getMessageRequestFromQQ:(id)arg0;
+ (long long)SendMessageToQQRequest:(id)arg0;
+ (long long)responseToGetMessageFromQQ:(id)arg0;
+ (long long)responseToShowMessageFromQQ:(id)arg0;
+ (BOOL)responseToSendMessageToQQ:(id)arg0 delegate:(id)arg1;
+ (long long)sendMessageToQQWithReq:(id)arg0;
+ (void)reportSDKCheck:(long long)arg0 cmd:(id)arg1 isQzone:(BOOL)arg2;
+ (long long)sendMessageToQQQZoneWithReq:(id)arg0;
+ (BOOL)handleOpenUniversallink:(id)arg0 delegate:(id)arg1;
+ (id)jasonValueWithStringData:(id)arg0;
+ (long long)SendReqToQZone:(id)arg0;
+ (long long)sendMessageToQQAvatarWithReq:(id)arg0;
+ (long long)sendMessageToFaceCollectionWithReq:(id)arg0;
+ (BOOL)isTIMSupportApi;
+ (BOOL)isSupportShareToQQ;
+ (BOOL)isSupportPushToQZone;
+ (BOOL)openQQ;
+ (BOOL)openTIM;
+ (id)getQQInstallUrl;
+ (id)getTIMInstallUrl;
+ (id)getLogFilePath;

@end