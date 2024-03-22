//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@interface AFDCloseFriendsMomentExchangeContext : NSObject {
    BOOL _exchangeItemInsertAndOpenCamera;
    BOOL _isOnlyExchangeLocation;
    BOOL _isOnlyRandomAlbum;
    BOOL _isFromIMOtherScene;
    BOOL _shouldRecordPublishHistory;
    long long _quoteServerMessageID;
    NSString *_messageID;
    NSString *_conversationID;
    unsigned long long _quoteRequestMessageType;
    NSArray *_exchangeUserIDs;
    NSString *_nickName;
    NSString *_quoteRequestItemID;
    NSString *_entrance;
    NSString *_relationTag;
    NSString *_insertPfps;
    NSDictionary *_trackParams;
}

@property (nonatomic) long long quoteServerMessageID;
@property (retain, nonatomic) NSString *messageID;
@property (retain, nonatomic) NSString *conversationID;
@property (nonatomic) unsigned long long quoteRequestMessageType;
@property (retain, nonatomic) NSArray *exchangeUserIDs;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *quoteRequestItemID;
@property (retain, nonatomic) NSString *entrance;
@property (retain, nonatomic) NSString *relationTag;
@property (nonatomic) BOOL exchangeItemInsertAndOpenCamera;
@property (nonatomic) BOOL isOnlyExchangeLocation;
@property (nonatomic) BOOL isOnlyRandomAlbum;
@property (nonatomic) BOOL isFromIMOtherScene;
@property (nonatomic) BOOL shouldRecordPublishHistory;
@property (copy, nonatomic) NSString *insertPfps;
@property (copy, nonatomic) NSDictionary *trackParams;

- (void)setRelationTag:(id)arg0;
- (id)relationTag;
- (id)trackParams;
- (void)setEntrance:(id)arg0;
- (void)setTrackParams:(id)arg0;
- (id)entrance;
- (void)setShouldRecordPublishHistory:(BOOL)arg0;
- (void)setExchangeItemInsertAndOpenCamera:(BOOL)arg0;
- (void)setInsertPfps:(id)arg0;
- (void)setQuoteServerMessageID:(long long)arg0;
- (void)setQuoteRequestMessageType:(unsigned long long)arg0;
- (void)setExchangeUserIDs:(id)arg0;
- (void)setIsOnlyExchangeLocation:(BOOL)arg0;
- (void)setIsOnlyRandomAlbum:(BOOL)arg0;
- (void)setIsFromIMOtherScene:(BOOL)arg0;
- (void)setQuoteRequestItemID:(id)arg0;
- (void)resetQuoteRequest;
- (long long)quoteServerMessageID;
- (unsigned long long)quoteRequestMessageType;
- (id)exchangeUserIDs;
- (id)quoteRequestItemID;
- (BOOL)exchangeItemInsertAndOpenCamera;
- (BOOL)isOnlyExchangeLocation;
- (BOOL)isOnlyRandomAlbum;
- (BOOL)isFromIMOtherScene;
- (BOOL)shouldRecordPublishHistory;
- (id)insertPfps;
- (id)messageID;
- (void)setNickName:(id)arg0;
- (void).cxx_destruct;
- (id)conversationID;
- (id)nickName;
- (void)setMessageID:(id)arg0;
- (void)setConversationID:(id)arg0;

@end
