//
//     Generated by private class-dump
//

@protocol RTVChatControllerDelegate;

@protocol RTVChatDataController <RTVXRControllerInterface>

@property (weak, nonatomic) id<RTVChatControllerDelegate> delegate;

- (id)sendMessage:(id)arg0 toIM:(BOOL)arg1;
- (void)renderWithConversationID:(id)arg0 type:(unsigned long long)arg1;
- (void)updateIMConvID:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
