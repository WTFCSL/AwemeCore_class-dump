//
//     Generated by private class-dump
//

@class BDNovelComicItem;

@interface BDNovelComicTrackerPlugin : BDNovelComicBasePlugin

@property (retain, nonatomic) BDNovelComicItem *currentItem;

+ (void)pluginRegister;

- (void)pluginReaderComicInfoDidLoad:(id)arg0 updateType:(unsigned long long)arg1;
- (void)pluginReaderPageChange:(id)arg0 target:(id)arg1 changeInfo:(id)arg2;
- (void)pluginWillOpenReader:(id)arg0 url:(id)arg1 nav:(id)arg2;
- (void)pluginReaderViewWillAppear;
- (void)pluginReaderViewWillDisAppear;

@end