//
//     Generated by private class-dump
//

@interface AWEPOIIMNetwork : NSObject

+ (void)createGroupOneOneChatWithCurrentPigeonUID:(id)arg0 otherPigeonUID:(id)arg1 conversationID:(id)arg2 enterFrom:(id)arg3 completion:(id /* block */)arg4;
+ (void)sendAppletWebhookActionWithConversationID:(id)arg0 imAccountID:(id)arg1 webhookExt:(id)arg2 completion:(id /* block */)arg3;
+ (void)requestPlatformServiceUrlInConversationID:(id)arg0 shopID:(id)arg1 orderID:(id)arg2 completion:(id /* block */)arg3;
+ (void)requestCustomerServiceConversationUrlWithParams:(id)arg0 completion:(id /* block */)arg1;
+ (void)markAwemeNoticeReadWithParams:(id)arg0 competion:(id /* block */)arg1;
+ (void)requestUserOrderListUrlWithParams:(id)arg0 completion:(id /* block */)arg1;
+ (void)requestServiceProgressWithParams:(id)arg0 completion:(id /* block */)arg1;
+ (void)requestCustomerServiceConversationInfoWithParams:(id)arg0 completion:(id /* block */)arg1;
+ (void)requestForClearUnreadMessageWithParams:(id)arg0 completion:(id /* block */)arg1;
+ (void)requestCardDetailWithPath:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
+ (void)sendCardMessageWithParams:(id)arg0 completion:(id /* block */)arg1;
+ (void)requestContactWithParams:(id)arg0 completion:(id /* block */)arg1;
+ (void)requestCardDetailInfoWithURLString:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
+ (void)poiimPOSTReuqestWithParams:(id)arg0 URLString:(id)arg1 modelClass:(Class)arg2 completion:(id /* block */)arg3;
+ (void)quitGroupConversationWithConversationID:(id)arg0 completion:(id /* block */)arg1;
+ (void)updateUserMuteInConversationID:(id)arg0 isMute:(BOOL)arg1 completion:(id /* block */)arg2;
+ (id)hostUrl;

@end