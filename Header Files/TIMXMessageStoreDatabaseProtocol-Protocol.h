//
//     Generated by private class-dump
//

@protocol TIMXMessageStoreDatabaseProtocol <NSObject>

- (id)currentUserDatabase;
- (void)removeDatabaseInstanceForUser:(long long)arg0 completion:(id /* block */)arg1;
- (unsigned long long)currentDataBaseWALFileSize;
- (BOOL)trimCurrentWALFileIfBiggerThan:(unsigned long long)arg0;
- (void)setCalculateSortOrderHandler:(id /* block */)arg0;
- (void)removeDatabaseInstanceForUser:(long long)arg0 isRebuild:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)truncateWalFileWithCompletion:(id /* block */)arg0;
- (id)allErrorCode;
- (void)recoverDBWithBlock:(id /* block */)arg0;
- (BOOL)isRecoverFromBackup;
- (void)resetRecoverType;
- (id)lastBackupMessageIndexs;

@end
