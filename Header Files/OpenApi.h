//
//     Generated by private class-dump
//

@interface OpenApi : NSObject

+ (BOOL)canHandleOpenURL:(id)arg0;
+ (id)getGeneralPastboardNameKey;
+ (BOOL)isSupportGeneralPastboard;
+ (id)saveDictionaryByGeneralPastboard:(id)arg0;
+ (id)saveDictionary:(id)arg0 toPasteBoard:(id)arg1;
+ (id)dictionaryByParseUrlFromSeparator:(id)arg0 separator:(id)arg1;
+ (id)getDictionaryFromGeneralPasteBoard:(id)arg0;
+ (id)getDictionaryFromPasteBoard:(id)arg0;
+ (void)processMessage_Auth:(id)arg0;
+ (void)processMessage_Share:(id)arg0;
+ (void)processMessage_Other:(id)arg0 msgTypeStr:(id)arg1;
+ (void)setTencentAuthorizeState:(unsigned long long)arg0;
+ (void)processSaveAppSignInfo:(id)arg0;
+ (id)dictionaryByParseURL:(id)arg0;
+ (BOOL)openQQWithCommand:(int)arg0 andPasteBoardName:(id)arg1 data:(id)arg2 callApp:(int)arg3 completionHandler:(id /* block */)arg4;
+ (BOOL)isQZoneSupportGeneralPastboard;
+ (BOOL)processUniversallink_Sign:(id)arg0;
+ (BOOL)processUniversallink_Bizlogic:(id)arg0;
+ (BOOL)registerApp:(id)arg0;
+ (BOOL)checkSignAuthIfNeed:(id)arg0;
+ (BOOL)registerApp:(id)arg0 withDelegate:(id)arg1 andOldApi:(id)arg2;
+ (void)unRegisterApp:(id)arg0 withDelegate:(id)arg1 andOldApi:(id)arg2;
+ (void)unRegisterAppSessionDelegate:(id)arg0;
+ (BOOL)canParseURL:(id)arg0;
+ (BOOL)doHandleUniversallink:(id)arg0;
+ (BOOL)doCanHandleUniversallink:(id)arg0;
+ (BOOL)authorizeWithPermission:(id)arg0 delegate:(id)arg1 firstCall:(int)arg2 completionHandler:(id /* block */)arg3;
+ (void)clearParam;
+ (unsigned long long)tencentAuhorizeState;
+ (BOOL)processMessage:(id)arg0;
+ (BOOL)handleOpenURL:(id)arg0;

@end
