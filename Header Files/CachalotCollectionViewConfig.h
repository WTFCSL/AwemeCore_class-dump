//
//     Generated by private class-dump
//

@interface CachalotCollectionViewConfig : NSObject {
    BOOL _useLayoutIfNeededMode;
    BOOL _enableFixIOS17ReloadData;
    BOOL _safePerformBatchUpdates;
    BOOL _useSerialOperationMode;
    BOOL _useNewUpdateHeightTransaction;
    BOOL _forceLayoutAfterPerformBatchUpdates;
    BOOL _forceLayoutAfterReloadWhenNilWindow;
}

@property (nonatomic) BOOL useLayoutIfNeededMode;
@property (nonatomic) BOOL enableFixIOS17ReloadData;
@property (nonatomic) BOOL safePerformBatchUpdates;
@property (nonatomic) BOOL useSerialOperationMode;
@property (nonatomic) BOOL useNewUpdateHeightTransaction;
@property (nonatomic) BOOL forceLayoutAfterPerformBatchUpdates;
@property (nonatomic) BOOL forceLayoutAfterReloadWhenNilWindow;

- (BOOL)enableFixIOS17ReloadData;
- (BOOL)safePerformBatchUpdates;
- (BOOL)useLayoutIfNeededMode;
- (void)setUseLayoutIfNeededMode:(BOOL)arg0;
- (void)setEnableFixIOS17ReloadData:(BOOL)arg0;
- (void)setSafePerformBatchUpdates:(BOOL)arg0;
- (BOOL)useSerialOperationMode;
- (void)setUseSerialOperationMode:(BOOL)arg0;
- (BOOL)useNewUpdateHeightTransaction;
- (void)setUseNewUpdateHeightTransaction:(BOOL)arg0;
- (BOOL)forceLayoutAfterPerformBatchUpdates;
- (void)setForceLayoutAfterPerformBatchUpdates:(BOOL)arg0;
- (BOOL)forceLayoutAfterReloadWhenNilWindow;
- (void)setForceLayoutAfterReloadWhenNilWindow:(BOOL)arg0;
- (id)init;

@end