//
//     Generated by private class-dump
//

@protocol IESIMDBRebuildPuller <NSObject>

- (BOOL)hasInitSucessWithInbox:(int)arg0;
- (BOOL)hasInitOverWithInbox:(int)arg0;
- (void)fetchAllRebuildedMessagesWithInbox:(int)arg0 isFromBackup:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)cancelPullingAllMessagesWithInbox:(int)arg0;
- (void)clearAllfailedRebuildConvs;
- (void)clearAllLiveConsultFailedRebuildConvs;

@end
