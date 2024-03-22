//
//     Generated by private class-dump
//

@class NSString, IESGCPFastEvaluationView, UIView;

@interface IESGCPDetailFastEvaluationTipView : IESGCPDetailBaseView <IESGCPEvaluationActions, IESGCPAudienceDetailActions> {
    BOOL _didAddObserver;
    IESGCPFastEvaluationView *_evaluateView;
    UIView *_lineV;
}

@property (retain, nonatomic) IESGCPFastEvaluationView *evaluateView;
@property (retain, nonatomic) UIView *lineV;
@property (nonatomic) BOOL didAddObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)didAddObserver;
- (void)setDidAddObserver:(BOOL)arg0;
- (void)bindViewModel:(id)arg0;
- (void)didSetGameCPDIContext;
- (void)bindActions;
- (void)evaluationPublished:(id)arg0;
- (void)showQuickStarCommentEntrance:(BOOL)arg0 score:(double)arg1;
- (void)updateStarRate:(double)arg0;
- (id)evaluateView;
- (BOOL)contentIsFullscreen;
- (BOOL)isShowAlertPageView:(id)arg0;
- (void)makeViewTrackAlertPageShowNode:(double)arg0;
- (void)showEvaluateStarAlertPage:(id)arg0;
- (void)makeViewTrackAlertPageClickNodeClickString:(id)arg0;
- (void)setQuickStarEvalutionKVStoreInfo;
- (void)setEvaluateView:(id)arg0;
- (id)lineV;
- (void)setLineV:(id)arg0;
- (void).cxx_destruct;
- (double)contentHeight;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)removeObserver;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)dealloc;
- (void)addObserver;
- (void)setupViews;

@end
