//
//     Generated by private class-dump
//

@protocol IMultiChorusDelegate <NSObject>

- (void)onSyncedUsersChanged:(id)arg0;
- (void)onSyncEvent:(unsigned long long)arg0 withError:(unsigned long long)arg1;
- (void)onSyncedVideoFrames:(struct __CFArray { } *)arg0 withDataFrame:(id)arg1 withUids:(id)arg2;

@end