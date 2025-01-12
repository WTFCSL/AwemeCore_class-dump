//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, TIMXSDKInstance, NSObject;
@protocol TIMXCurrentUserCredentialProtocol, TIMXAppDoubleTrackerManagerProtocol, OS_dispatch_semaphore, TIMXMessageDBDelegate;

@interface TIMXMessageDB : NSObject <TIMXInstanceScopeSingleton> {
    BOOL _isCharging;
    BOOL _isActive;
    BOOL _isBackuping;
    int _errorReportToken;
    id<TIMXMessageDBDelegate> _delegate;
    TIMXSDKInstance *_r;
    id<TIMXAppDoubleTrackerManagerProtocol> _tracker;
    id<TIMXCurrentUserCredentialProtocol> _currentUserImp;
    NSMutableDictionary *_errorCodesDict;
    double _totalSize;
    NSObject<OS_dispatch_semaphore> *_lock;
    double _p_totalSize;
    double _p_freeSpace;
    id /* block */ _errorReportTokenFix;
}

@property (retain, nonatomic) id<TIMXAppDoubleTrackerManagerProtocol> tracker;
@property (retain, nonatomic) id<TIMXCurrentUserCredentialProtocol> currentUserImp;
@property (retain, nonatomic) NSMutableDictionary *errorCodesDict;
@property (nonatomic) BOOL isCharging;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isBackuping;
@property (nonatomic) double totalSize;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (nonatomic) double p_totalSize;
@property (nonatomic) double p_freeSpace;
@property (nonatomic) int errorReportToken;
@property (copy, nonatomic) id /* block */ errorReportTokenFix;
@property (weak, nonatomic) id<TIMXMessageDBDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)p_trackCommonParams;
- (id)currentUserImp;
- (void)setCurrentUserImp:(id)arg0;
- (BOOL)isRecoverFromBackup;
- (void)resetRecoverType;
- (id)lastBackupMessageIndexs;
- (long long)msgDBVersion;
- (id)p_tableNameFromORMClass:(Class)arg0;
- (void)p_setGlobalErrorReport;
- (id /* block */)errorReportTokenFix;
- (int)errorReportToken;
- (void)globalErrorReportProcess:(id)arg0;
- (void)setErrorReportTokenFix:(id /* block */)arg0;
- (void)setErrorReportToken:(int)arg0;
- (id)currentDBPath:(id)arg0;
- (BOOL)p_isPhysicalExists;
- (id)p_currentErrorCodeSet;
- (void)handleBatteryStateDidChangeNotification:(id)arg0;
- (void)p_backupPhysicalIfNeeded;
- (void)p_backupRepairKitIfNeeded;
- (id)currentErrorCodeSet:(id)arg0;
- (id)p_recoverTypePath:(id)arg0;
- (id)p_messageIndexPath:(id)arg0;
- (BOOL)p_tryRecoverWithPath:(id)arg0 userId:(id)arg1 stage:(long long)arg2 errorCode:(id)arg3 errorMsg:(id)arg4 tryCount:(long long)arg5;
- (id)p_repairKitBackupPath:(id)arg0;
- (BOOL)isEncrypted:(id)arg0;
- (id)cipherData:(id)arg0;
- (double)p_fileSize:(id)arg0;
- (double)dbSize;
- (double)p_allDBFileSizeWithUserId:(id)arg0;
- (void)removeDatabaseFiles:(id)arg0;
- (BOOL)p_isRepairKitDBVersionChangedWithUserId:(id)arg0;
- (void)p_markRepairKitBackupDBVersionForUserId:(id)arg0;
- (BOOL)p_isRepairKitNeededBackupWithUserId:(id)arg0;
- (void)p_backupRepairKit:(id)arg0;
- (BOOL)isDBUseable:(id)arg0;
- (BOOL)isBackuping;
- (void)setIsBackuping:(BOOL)arg0;
- (BOOL)p_batteryIsCharging;
- (BOOL)p_isPhysicalNeededBackupWithUserId:(id)arg0;
- (BOOL)p_backupPhysicalWithUserId:(id)arg0;
- (void)p_trackPhysicalBackup:(id)arg0;
- (BOOL)p_backupMMKV:(id)arg0;
- (BOOL)p_backupMessageIndex:(id)arg0;
- (id)p_physicalBackupPathTemp:(id)arg0;
- (id)p_dbVisibleFilesPath:(id)arg0;
- (id)cipherKey:(id)arg0;
- (id)p_mmkvBackupPath:(id)arg0;
- (id)p_mmkvBackupPathTemp:(id)arg0;
- (id)p_messageIndexPathTemp:(id)arg0;
- (id)p_physicalBackupPath:(id)arg0;
- (void)p_markPhysicalBackupDBVersionForUserId:(id)arg0;
- (void)p_removeBackupFiles:(id)arg0;
- (BOOL)p_isPhysicalDBVersionChangedWithUserId:(id)arg0;
- (double)p_physicalBackupFileLastModifyWithUserId:(id)arg0;
- (void)p_trackRecover:(id)arg0;
- (BOOL)p_recoverByRepairKit:(id)arg0;
- (BOOL)p_recoverByPhysical:(id)arg0;
- (BOOL)recover:(id)arg0 userId:(id)arg1 stage:(long long)arg2 openError:(id)arg3;
- (void)removeAllErrorCodeWithUserId:(id)arg0;
- (BOOL)p_shouldRecoverFromPhysical:(id)arg0;
- (BOOL)p_recoverMMKV:(id)arg0 error:(id *)arg1;
- (double)p_totalSize;
- (void)setP_totalSize:(double)arg0;
- (double)p_freeSpace;
- (void)setP_freeSpace:(double)arg0;
- (id)encDBPath:(id)arg0;
- (id)oldDBPath:(id)arg0;
- (id)errorCodesDict;
- (void)addErrorCode:(id)arg0 userId:(id)arg1;
- (id)currentErrorCodes;
- (void)backupByRepairKit:(id)arg0 userId:(id)arg1;
- (void)recoverWithBlock:(id /* block */)arg0;
- (void)setErrorCodesDict:(id)arg0;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (id)userId;
- (long long)tag;
- (id)delegate;
- (id)lock;
- (BOOL)isActive;
- (void)setIsCharging:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (BOOL)isCharging;
- (void)setLock:(id)arg0;
- (double)totalSize;
- (void)applicationProtectedDataWillBecomeUnavailable:(id)arg0;
- (void)applicationProtectedDataDidBecomeAvailable:(id)arg0;
- (id)initWithRootObject:(id)arg0;
- (void)setTotalSize:(double)arg0;
- (void)p_addObservers;

@end
