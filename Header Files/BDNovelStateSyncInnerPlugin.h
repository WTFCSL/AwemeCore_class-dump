//
//     Generated by private class-dump
//

@interface BDNovelStateSyncInnerPlugin : BDNovelComicBasePlugin

+ (void)pluginRegister;

- (void)pluginReaderComicInfoDidLoad:(id)arg0 updateType:(unsigned long long)arg1;
- (void)pluginReaderChapterChange:(id)arg0 toItem:(id)arg1;
- (void)pluginReaderPageChange:(id)arg0 target:(id)arg1 changeInfo:(id)arg2;
- (void)pluginReaderToolViewState:(BOOL)arg0;
- (void)pluginReaderConfigUpdate:(id)arg0 updateType:(unsigned long long)arg1;

@end
