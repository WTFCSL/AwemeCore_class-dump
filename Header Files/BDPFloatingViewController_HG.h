//
//     Generated by private class-dump
//

@class NSString, BDPFloatingCloseZone_HG, UIView, BDPUniqueID, BDPFloatingView_HG;

@interface BDPFloatingViewController_HG : NSObject <BDPFloatingDelegate_HG> {
    BOOL _shouldShow;
    BOOL _iconLoaded;
    BDPUniqueID *_uniqueID;
    BDPFloatingView_HG *_floatingView;
    BDPFloatingCloseZone_HG *_closeZone;
    id /* block */ _showFloatingView;
    UIView *_containerView;
    double _closeZoneRadius;
    NSString *_frequencyKey;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPFloatingView_HG *floatingView;
@property (retain, nonatomic) BDPFloatingCloseZone_HG *closeZone;
@property (copy, nonatomic) id /* block */ showFloatingView;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) double closeZoneRadius;
@property (copy, nonatomic) NSString *frequencyKey;
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) BOOL iconLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUniqueID:(id)arg0 withSafeArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)showOn:(id)arg0;
- (void)changeUIReadyClose:(BOOL)arg0;
- (void)setIconLoaded:(BOOL)arg0;
- (BOOL)iconLoaded;
- (id /* block */)showFloatingView;
- (double)closeZoneRadius;
- (void)showCloseZone;
- (void)closeFloatingView;
- (void)hideCloseZone;
- (void)setCloseZone:(id)arg0;
- (id)closeZone;
- (void)setShowFloatingView:(id /* block */)arg0;
- (void)recordFloatingBallControl;
- (void)setCloseZoneRadius:(double)arg0;
- (void)setFrequencyKey:(id)arg0;
- (id)frequencyKey;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (id)floatingView;
- (BOOL)shouldShow;
- (void)setFloatingView:(id)arg0;
- (void)setShouldShow:(BOOL)arg0;

@end