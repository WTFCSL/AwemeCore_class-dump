//
//     Generated by private class-dump
//

@interface AWELongPressPanelWatchVideoLaterViewModel : AWELongPressPanelBaseViewModel {
    BOOL _hasTrackShow;
}

@property (nonatomic) BOOL hasTrackShow;

+ (id)longPressPanelViewModel;

- (BOOL)needShow;
- (BOOL)hasTrackShow;
- (void)setHasTrackShow:(BOOL)arg0;
- (void)addToWatchLater;
- (void)configVM;
- (BOOL)needShowForScene:(unsigned long long)arg0;
- (void)trackWatchVideoLaterShow;

@end
