//
//     Generated by private class-dump
//

@protocol IESLiveMessageListStoreProtocol <NSObject>

@property (readonly, nonatomic) BOOL hideMessageListView;

- (long long)getUnreadMessageCount;
- (double)getCurrentListWidth;

@optional

- (BOOL)hideMessageListView;
- (void)reloadMessagesForFontSizeChange;
- (BOOL)isDisableAnimation;

@end
