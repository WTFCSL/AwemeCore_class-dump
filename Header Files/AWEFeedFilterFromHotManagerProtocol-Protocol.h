//
//     Generated by private class-dump
//

@protocol AWEFeedFilterFromHotManagerProtocol <NSObject>

- (BOOL)isExistNeedDetect;
- (void)trackForDuplicateWithPage:(id)arg0 comeFrom:(id)arg1 duplicateID:(id)arg2 awemeType:(long long)arg3;
- (void)clearExistSet;
- (BOOL)isIncrementNeedDetect;
- (void)recordHotPlayedItem:(id)arg0;
- (void)debug_removeItemRecord:(id)arg0;
- (void)debug_removeAllItemRecord;
- (BOOL)isDuplicate:(id)arg0;

@end
