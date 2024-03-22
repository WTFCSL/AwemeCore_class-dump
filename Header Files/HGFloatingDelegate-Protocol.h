//
//     Generated by private class-dump
//

@class UIView;

@protocol HGFloatingDelegate <NSObject>

@property (readonly, nonatomic) double closeZoneRadius;
@property (readonly, copy, nonatomic) id /* block */ showFloatingView;
@property (readonly, nonatomic) UIView *floatingView;
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) BOOL iconLoaded;

- (void)changeUIReadyClose:(BOOL)arg0;
- (void)setIconLoaded:(BOOL)arg0;
- (BOOL)iconLoaded;
- (id /* block */)showFloatingView;
- (double)closeZoneRadius;
- (void)showCloseZone;
- (void)closeFloatingView;
- (void)hideCloseZone;
- (id)floatingView;
- (BOOL)shouldShow;
- (void)setShouldShow:(BOOL)arg0;

@end
