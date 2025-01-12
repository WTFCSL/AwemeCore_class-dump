//
//     Generated by private class-dump
//

@class NSString, BDASplashComplianceBaseView, BDASplashComplianceModel;
@protocol BDASplashViewModelProtocol, BDASplashComplianceViewHolderDelegate;

@interface BDASplashComplianceViewHolder : NSObject <BDASplashComplianceViewHolder, BDASplashComplianceViewDelegate> {
    BOOL _isPrepared;
    BOOL _splashViewHasEnded;
    long long _failedReason;
    id<BDASplashComplianceViewHolderDelegate> _delegate;
    BDASplashComplianceBaseView *_complianceView;
    BDASplashComplianceModel *_complianceModel;
    id<BDASplashViewModelProtocol> _checkModel;
    id /* block */ _disappearBlock;
}

@property (retain, nonatomic) BDASplashComplianceBaseView *complianceView;
@property (retain, nonatomic) BDASplashComplianceModel *complianceModel;
@property (retain, nonatomic) id<BDASplashViewModelProtocol> checkModel;
@property (nonatomic) BOOL splashViewHasEnded;
@property (copy, nonatomic) id /* block */ disappearBlock;
@property (nonatomic) BOOL isPrepared;
@property (nonatomic) long long failedReason;
@property (weak, nonatomic) id<BDASplashComplianceViewHolderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)checkModel;
- (void)splashValidClickWithPoint:(struct CGPoint { double x0; double x1; })arg0 extra:(id)arg1 adExtra:(id)arg2;
- (void)splashJumpWithParams:(id)arg0 animationType:(long long)arg1;
- (void)splashInvalidClickWithPoint:(struct CGPoint { double x0; double x1; })arg0 extra:(id)arg1 adExtra:(id)arg2;
- (void)splashTrackEventWithLabel:(id)arg0 extra:(id)arg1 adExtra:(id)arg2;
- (void)splashTrackNoAdEvent:(id)arg0 params:(id)arg1;
- (id)getSpecificControlsForAnimation;
- (id)getInteractionView;
- (void)updateGuideViewState:(BOOL)arg0;
- (void)splashOptionalDataForKey:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)loadViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 model:(id)arg1;
- (void)setComplianceModel:(id)arg0;
- (void)setSplashViewHasEnded:(BOOL)arg0;
- (id)createViewModelWithModel:(id)arg0;
- (void)setCheckModel:(id)arg0;
- (void)setFailedReason:(long long)arg0;
- (long long)failedReason;
- (void)setDisappearBlock:(id /* block */)arg0;
- (id /* block */)disappearBlock;
- (void)splashFinish;
- (void)splashShakeSettings;
- (BOOL)splashViewHasEnded;
- (long long)getComplianceViewState;
- (long long)getComplianceGestureState;
- (void)pauseComplianceView;
- (void)stopComplianceView;
- (void)extendedSplashView:(id /* block */)arg0;
- (id)complianceModel;
- (void)applyGreyThemeWithImage:(id)arg0;
- (void)splashTrackALogWithInfo:(id)arg0;
- (id)getComplianceView;
- (void)setComplianceView:(id)arg0;
- (id)complianceView;
- (long long)getComplianceType;
- (void)showComplianceView;
- (id)splashGetViewForShowingEggs;
- (BOOL)splashAddViewToTheTop:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (BOOL)isPrepared;
- (void)setIsPrepared:(BOOL)arg0;

@end
