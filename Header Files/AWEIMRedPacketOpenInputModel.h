//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEIMAudioMessageRecorder, AWEURLModel;

@interface AWEIMRedPacketOpenInputModel : NSObject {
    long long _openType;
    NSString *_conversationID;
    NSString *_orderNO;
    NSString *_quoteReplyMessageID;
    NSString *_enterFrom;
    NSString *_paramsForActivity;
    NSString *_enterMethod;
    AWEIMAudioMessageRecorder *_recorder;
    id /* block */ _onOpenCompletion;
    id /* block */ _onStageChanged;
    AWEURLModel *_resourceUrl;
    NSArray *_stickerIdList;
}

@property (nonatomic) long long openType;
@property (retain, nonatomic) NSString *conversationID;
@property (retain, nonatomic) NSString *orderNO;
@property (retain, nonatomic) NSString *quoteReplyMessageID;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *paramsForActivity;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) AWEIMAudioMessageRecorder *recorder;
@property (copy, nonatomic) id /* block */ onOpenCompletion;
@property (copy, nonatomic) id /* block */ onStageChanged;
@property (retain, nonatomic) AWEURLModel *resourceUrl;
@property (copy, nonatomic) NSArray *stickerIdList;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (long long)openType;
- (void)setOpenType:(long long)arg0;
- (id)quoteReplyMessageID;
- (void)setQuoteReplyMessageID:(id)arg0;
- (id)stickerIdList;
- (void)setStickerIdList:(id)arg0;
- (id)orderNO;
- (void)setOrderNO:(id)arg0;
- (id)paramsForActivity;
- (void)setParamsForActivity:(id)arg0;
- (id /* block */)onOpenCompletion;
- (void)setOnOpenCompletion:(id /* block */)arg0;
- (id /* block */)onStageChanged;
- (void)setOnStageChanged:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)recorder;
- (id)conversationID;
- (void)setRecorder:(id)arg0;
- (void)setConversationID:(id)arg0;
- (id)resourceUrl;
- (void)setResourceUrl:(id)arg0;

@end
