//
//     Generated by private class-dump
//

@class NSString;

@interface AFDWidgetsService : HTSService <AFDWidgetsService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUserDefaultsForStartShootWidgetWithUserModel:(id)arg0;
- (void)setNeedTransferToChatWithConversationID:(id)arg0 conversationType:(long long)arg1;
- (void)transferToChatIfNeeded;
- (void)updateUserDefaultsWithDict:(id)arg0 forWidgetType:(unsigned long long)arg1;
- (void)setup;

@end
