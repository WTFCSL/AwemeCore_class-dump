//
//     Generated by private class-dump
//

@protocol HTSLiveMSequenceRouter <NSObject>

- (BOOL)getCurrentRoomIsInOfficialChannel;
- (BOOL)isMSeqRoomWillEnd;
- (BOOL)isAnchorMSeqRoomWillStart;
- (id)toastStringBeforeEnd;

@optional

- (id)realRoomOwner;
- (BOOL)isMSeqBackupRoom;
- (unsigned long long)currentMseqLayout;
- (void)enterMSeqBackupRoom;

@end