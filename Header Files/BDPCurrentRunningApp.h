//
//     Generated by private class-dump
//

@class BDPUniqueID;

@interface BDPCurrentRunningApp : NSObject {
    BDPUniqueID *_currentUniqueID;
}

@property (retain, nonatomic) BDPUniqueID *currentUniqueID;

+ (id)sharedManager;

- (id)currentUniqueID;
- (void)setCurrentUniqueID:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isDebugMode;

@end