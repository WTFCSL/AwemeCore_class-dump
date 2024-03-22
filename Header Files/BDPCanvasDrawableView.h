//
//     Generated by private class-dump
//

@class BDPCanvasDisableScrollGestureRecognizer, SonicView, NSString, BDPPromise, BDPCanvasModel;
@protocol BDPPageContextProtocol;

@interface BDPCanvasDrawableView : UIView <BDPComponentViewProtocol> {
    BOOL _disableHeliumGestureRecognizer;
    long long _componentID;
    id<BDPPageContextProtocol> _pageContext;
    BDPCanvasModel *_canvasModel;
    long long _heliumPtr;
    SonicView *_sonicView;
    BDPPromise *_readyPromise;
    long long _state;
    BDPCanvasDisableScrollGestureRecognizer *_disableScrollGesture;
}

@property (retain, nonatomic) BDPPromise *readyPromise;
@property (nonatomic) long long state;
@property (retain, nonatomic) SonicView *sonicView;
@property (retain, nonatomic) BDPCanvasDisableScrollGestureRecognizer *disableScrollGesture;
@property (copy, nonatomic) BDPCanvasModel *canvasModel;
@property (nonatomic) long long heliumPtr;
@property (nonatomic) BOOL disableHeliumGestureRecognizer;
@property (nonatomic) long long componentID;
@property (retain, nonatomic) id<BDPPageContextProtocol> pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)dispatchTouch:(long long)arg0 touches:(id)arg1 withEvent:(id)arg2;
- (void)setSonicView:(id)arg0;
- (id)sonicView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 useSonicView:(BOOL)arg1;
- (void)createSonicViewIfNeed:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setDisableScrollGesture:(id)arg0;
- (id)disableScrollGesture;
- (void)updateNeedDisableScroll;
- (id)canvasModel;
- (void)updatePageContext;
- (void)addDrawableViewIfNeededWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)readyPromise;
- (void)setCanvasModel:(id)arg0;
- (void)removeFromCanvasInstance;
- (BOOL)disableHeliumGestureRecognizer;
- (long long)heliumPtr;
- (void)setHeliumPtr:(long long)arg0;
- (void)setDisableHeliumGestureRecognizer:(BOOL)arg0;
- (void)setReadyPromise:(id)arg0;
- (void).cxx_destruct;
- (long long)state;
- (void)setState:(long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)dealloc;
- (void)willMoveToWindow:(id)arg0;
- (void)addGestureRecognizer:(id)arg0;
- (long long)componentID;
- (void)setComponentID:(long long)arg0;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (void)updateWithModel:(id)arg0;
- (void)updateModel:(id)arg0;

@end