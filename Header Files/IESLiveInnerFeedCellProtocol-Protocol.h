//
//     Generated by private class-dump
//

@protocol IESLiveInnerFeedCellProtocol <NSObject>

- (void)didEndDisplayCell;
- (void)updateWithItemModel:(id)arg0;
- (void)mountCell;
- (void)unMountCell:(long long)arg0;
- (void)willDisplayCell;
- (BOOL)isMounted;

@optional

- (void)scrollWillEndPreMountCell;
- (void)scrollDidEndMountCell;
- (BOOL)canPreloadEnterRoom;

@end