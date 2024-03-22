//
//     Generated by private class-dump
//

@class BDECIMClient, NSObject;
@protocol OS_dispatch_queue;

@interface BDECPigeonMessageManager : NSObject {
    NSObject<OS_dispatch_queue> *_messageNotifyQueue;
    BDECIMClient *_client;
    unsigned long long _messageSendErrorCount;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *messageNotifyQueue;
@property (retain, nonatomic) BDECIMClient *client;
@property (nonatomic) unsigned long long messageSendErrorCount;

- (void)resendMessage:(id)arg0;
- (void)onReceiveMessageSentResponse:(id)arg0;
- (id)sendMessage:(id)arg0 messageType:(long long)arg1 extraExt:(id)arg2 error:(id *)arg3;
- (void)asyncSendMessage:(id)arg0 messageType:(long long)arg1 extraExt:(id)arg2 completion:(id /* block */)arg3;
- (void)sendUserEnterMessageWithPigeonShopId:(id)arg0 conGroupId:(id)arg1 extParams:(id)arg2 pigeonBizType:(id)arg3 completion:(id /* block */)arg4;
- (void)sendUserEnterMessageWithRequestModel:(id)arg0 dictCompletion:(id /* block */)arg1;
- (id)sendTextMessageInConversation:(id)arg0 text:(id)arg1 bizRole:(id)arg2 bizExt:(id)arg3 error:(id *)arg4;
- (id)sendImageMessageInConversation:(id)arg0 imageWidth:(id)arg1 imageHeight:(id)arg2 imageURI:(id)arg3 bizRole:(id)arg4 bizExt:(id)arg5 error:(id *)arg6;
- (id)skipSendImageMessageInConversation:(id)arg0 imageWidth:(id)arg1 imageHeight:(id)arg2 imageURI:(id)arg3 bizRole:(id)arg4 bizExt:(id)arg5 error:(id *)arg6;
- (id)sendVideoMessageInConversation:(id)arg0 videoWidth:(id)arg1 videoHeight:(id)arg2 coverURL:(id)arg3 vid:(id)arg4 duration:(id)arg5 bizRole:(id)arg6 bizExt:(id)arg7 error:(id *)arg8;
- (id)skipSendVideoMessageInConversation:(id)arg0 videoWidth:(id)arg1 videoHeight:(id)arg2 coverURL:(id)arg3 vid:(id)arg4 duration:(id)arg5 bizRole:(id)arg6 bizExt:(id)arg7 error:(id *)arg8;
- (void)recallMessageWithConversation:(id)arg0 message:(id)arg1 pigeonBizType:(id)arg2 completion:(id /* block */)arg3;
- (void)asyncSendTextMessageInConversation:(id)arg0 text:(id)arg1 bizRole:(id)arg2 bizExt:(id)arg3 completion:(id /* block */)arg4;
- (void)asyncSendEmoticonMessageInConversation:(id)arg0 emoticonWidth:(id)arg1 emoticonHeight:(id)arg2 emoticonAnimateURL:(id)arg3 emotionType:(id)arg4 emotionSetId:(id)arg5 emotionId:(id)arg6 emotionName:(id)arg7 bizRole:(id)arg8 bizExt:(id)arg9 completion:(id /* block */)arg10;
- (id)getPigeonClientConfig;
- (id)initWithIMClient:(id)arg0;
- (void)setMessageNotifyQueue:(id)arg0;
- (void)setMessageSendErrorCount:(unsigned long long)arg0;
- (id)sendMessage:(id)arg0 extraExt:(id)arg1 error:(id *)arg2;
- (id)sendMessage:(id)arg0 extraExt:(id)arg1 skipSend:(BOOL)arg2 error:(id *)arg3;
- (id)sendMessageReceiverID:(id)arg0;
- (id)messageNotifyQueue;
- (void)notifyDidInsertNewMessages:(long long)arg0 messageModels:(id)arg1 belongingBizConversationMap:(id)arg2;
- (unsigned long long)messageSendErrorCount;
- (void)asyncSendMessage:(id)arg0 extraExt:(id)arg1 completion:(id /* block */)arg2;
- (void)didInsertNewMessageNotification:(id)arg0;
- (void)onReceiveMessageUpdate:(id)arg0;
- (void).cxx_destruct;
- (void)setClient:(id)arg0;
- (id)client;
- (id)sendMessage:(id)arg0 error:(id *)arg1;

@end