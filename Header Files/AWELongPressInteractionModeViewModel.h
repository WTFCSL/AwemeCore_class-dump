//
//     Generated by private class-dump
//

@interface AWELongPressInteractionModeViewModel : AWELongPressPanelBaseViewModel {
    BOOL _hasTrackShow;
}

@property (nonatomic) BOOL hasTrackShow;

+ (id)longPressPanelViewModel;

- (BOOL)needShow;
- (BOOL)hasTrackShow;
- (void)setHasTrackShow:(BOOL)arg0;
- (void)configVM;
- (void)trackInteractionModeSwitchClick:(BOOL)arg0;
- (void)trackInteractionModeSwitchShow;
- (BOOL)needShowForScene:(unsigned long long)arg0;

@end
