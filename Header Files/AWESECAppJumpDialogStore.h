//
//     Generated by private class-dump
//

@class AWESECAppJumpDialog, DUXLoadingToast;
@protocol AWEStorageServiceKVInterface;

@interface AWESECAppJumpDialogStore : NSObject {
    AWESECAppJumpDialog *_currentShowDialog;
    DUXLoadingToast *_currentLoadingToast;
    id<AWEStorageServiceKVInterface> _store;
}

@property (retain, nonatomic) id<AWEStorageServiceKVInterface> store;
@property (weak, nonatomic) AWESECAppJumpDialog *currentShowDialog;
@property (weak, nonatomic) DUXLoadingToast *currentLoadingToast;

+ (id)shared;

- (id)currentShowDialog;
- (void)setCurrentShowDialog:(id)arg0;
- (void)clearEventInDisk;
- (void)dialogTrack:(id)arg0;
- (void)eventAppLogTrack:(id)arg0;
- (void)checkLatestEventAndReport;
- (id)currentLoadingToast;
- (void)setCurrentLoadingToast:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)store;
- (void)saveEventToDisk:(id)arg0;
- (void)setStore:(id)arg0;

@end
