//
//     Generated by private class-dump
//

@interface ECOMUpsertLocalConversationTask : NSObject

+ (int)sdkConversationTypeFromPBType:(int)arg0;

- (void)storeWithObject:(id)arg0 inbox:(int)arg1 completion:(id /* block */)arg2;
- (BOOL)validateConversationInfo:(id)arg0 errorMsg:(id *)arg1;

@end