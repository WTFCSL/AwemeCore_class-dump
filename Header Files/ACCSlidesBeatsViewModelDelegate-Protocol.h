//
//     Generated by private class-dump
//

@protocol ACCSlidesBeatsViewModelDelegate <NSObject>

@optional

- (void)musicBeatsViewModel:(id)arg0 willChangeWithBeatsOn:(BOOL)arg1 beatsResult:(unsigned long long)arg2 byUser:(BOOL)arg3 isDefault:(BOOL)arg4;
- (void)musicBeatsViewModel:(id)arg0 didChangeWithBeatsOn:(BOOL)arg1 beatsResult:(unsigned long long)arg2 byUser:(BOOL)arg3 isDefault:(BOOL)arg4;
- (void)musicBeatsViewModel:(id)arg0 didUpdateWithBeatsOn:(BOOL)arg1 beatsResult:(unsigned long long)arg2 barItemEnabled:(BOOL)arg3;
- (void)musicBeatsViewModel:(id)arg0 didFetchBeats:(id)arg1;
- (void)musicBeatsViewModel:(id)arg0 unbindMusicBeatsState:(BOOL)arg1;

@end