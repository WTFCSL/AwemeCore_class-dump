//
//     Generated by private class-dump
//

@interface AWELongPressPanelScreenCastViewModel : AWELongPressPanelBaseViewModel {
    double _lastTappedTime;
}

@property (nonatomic) double lastTappedTime;

+ (id)longPressPanelViewModel;

- (void)showPopoverIfNeeded;
- (BOOL)needShow;
- (void)configVM;
- (BOOL)checkCanShowPopover;
- (double)getCellToScreenBottomDistance;
- (void)recordClickScreenCast;
- (void)recordShowPopOver;
- (double)lastTappedTime;
- (void)setLastTappedTime:(double)arg0;

@end
