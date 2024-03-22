//
//     Generated by private class-dump
//

@protocol BDASplashComplianceViewHolder <NSObject>

@property (readonly, nonatomic) BOOL isPrepared;
@property (readonly, nonatomic) long long failedReason;

- (id)getSpecificControlsForAnimation;
- (id)getInteractionView;
- (void)updateGuideViewState:(BOOL)arg0;
- (long long)failedReason;
- (long long)getComplianceViewState;
- (long long)getComplianceGestureState;
- (void)pauseComplianceView;
- (void)stopComplianceView;
- (void)extendedSplashView:(id /* block */)arg0;
- (void)applyGreyThemeWithImage:(id)arg0;
- (id)getComplianceView;
- (long long)getComplianceType;
- (void)showComplianceView;
- (BOOL)isPrepared;

@end