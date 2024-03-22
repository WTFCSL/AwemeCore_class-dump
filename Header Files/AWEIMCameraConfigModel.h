//
//     Generated by private class-dump
//

@class NSString, AWEUserModel, NSArray;

@interface AWEIMCameraConfigModel : NSObject {
    BOOL _isSupportExchangeImage;
    BOOL _isSupportWatchOnce;
    BOOL _shouldJustDismissTopViewController;
    NSString *_enterMethod;
    NSString *_enterFrom;
    NSString *_activityString;
    NSString *_toConversationID;
    AWEUserModel *_fullDetailUser;
    NSString *_entranceString;
    id /* block */ _beforePresentBlock;
    id /* block */ _completionBlock;
    NSString *_quoteReplyMessageID;
    NSArray *_stickerIdList;
}

@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *activityString;
@property (copy, nonatomic) NSString *toConversationID;
@property (retain, nonatomic) AWEUserModel *fullDetailUser;
@property (copy, nonatomic) NSString *entranceString;
@property (copy, nonatomic) id /* block */ beforePresentBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL isSupportExchangeImage;
@property (nonatomic) BOOL isSupportWatchOnce;
@property (nonatomic) BOOL shouldJustDismissTopViewController;
@property (copy, nonatomic) NSString *quoteReplyMessageID;
@property (copy, nonatomic) NSArray *stickerIdList;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (void)setToConversationID:(id)arg0;
- (id)toConversationID;
- (id)fullDetailUser;
- (void)setFullDetailUser:(id)arg0;
- (id)entranceString;
- (void)setEntranceString:(id)arg0;
- (id /* block */)beforePresentBlock;
- (void)setBeforePresentBlock:(id /* block */)arg0;
- (BOOL)isSupportExchangeImage;
- (void)setIsSupportExchangeImage:(BOOL)arg0;
- (BOOL)isSupportWatchOnce;
- (void)setIsSupportWatchOnce:(BOOL)arg0;
- (BOOL)shouldJustDismissTopViewController;
- (void)setShouldJustDismissTopViewController:(BOOL)arg0;
- (id)quoteReplyMessageID;
- (void)setQuoteReplyMessageID:(id)arg0;
- (id)stickerIdList;
- (void)setStickerIdList:(id)arg0;
- (id)activityString;
- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)setActivityString:(id)arg0;

@end
