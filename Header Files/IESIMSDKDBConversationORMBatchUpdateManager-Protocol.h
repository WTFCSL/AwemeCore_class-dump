//
//     Generated by private class-dump
//

@protocol IESIMSDKDBConversationORMBatchUpdateManager <NSObject>

@property (nonatomic) BOOL hasLastMsgBatchUpdateDone;
@property (nonatomic) BOOL hasLastHintMsgBatchUpdateDone;

- (void)loginWithUid:(id)arg0;
- (BOOL)hasLastMsgBatchUpdateDone;
- (BOOL)hasLastHintMsgBatchUpdateDone;
- (void)setHasLastMsgBatchUpdateDone:(BOOL)arg0;
- (void)setHasLastHintMsgBatchUpdateDone:(BOOL)arg0;
- (void)addRule:(id)arg0;

@end