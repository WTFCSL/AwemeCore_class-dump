//
//     Generated by private class-dump
//

@interface BDTicketGuardConfig : NSObject {
    BOOL _initializeStorage;
    BOOL _enableFullPathTrack;
    BOOL _enableStorageOptimize;
    BOOL _enableKeyChainStorage;
}

@property (nonatomic) BOOL initializeStorage;
@property (nonatomic) BOOL enableFullPathTrack;
@property (nonatomic) BOOL enableStorageOptimize;
@property (nonatomic) BOOL enableKeyChainStorage;

- (BOOL)enableFullPathTrack;
- (BOOL)enableKeyChainStorage;
- (BOOL)initializeStorage;
- (void)setInitializeStorage:(BOOL)arg0;
- (void)setEnableFullPathTrack:(BOOL)arg0;
- (BOOL)enableStorageOptimize;
- (void)setEnableStorageOptimize:(BOOL)arg0;
- (void)setEnableKeyChainStorage:(BOOL)arg0;

@end