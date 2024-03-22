//
//     Generated by private class-dump
//

@class UIPanGestureRecognizer, NSString, NSMutableArray, UITapGestureRecognizer;
@protocol BDPXScreenGestureTranslationDelegate;

@interface BDPXScreenGestureObject : NSObject <UIGestureRecognizerDelegate> {
    BOOL _gestureOptFlag;
    double _XScreenRate;
    long long _XScreenPositionTop;
    UIPanGestureRecognizer *_pan;
    UITapGestureRecognizer *_tap;
    id<BDPXScreenGestureTranslationDelegate> _delegate;
    double _containerBottom;
    long long _quarterPositionTopUnderXScreen;
    long long _quarterPositionTopAboveXScreen;
    long long _threeQuarterPositionTopAboveXScreen;
    NSMutableArray *_otherGestureRecognizers;
}

@property (nonatomic) double containerBottom;
@property (nonatomic) long long quarterPositionTopUnderXScreen;
@property (nonatomic) long long quarterPositionTopAboveXScreen;
@property (nonatomic) long long threeQuarterPositionTopAboveXScreen;
@property (nonatomic) double XScreenRate;
@property (nonatomic) long long XScreenPositionTop;
@property (retain, nonatomic) NSMutableArray *otherGestureRecognizers;
@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (nonatomic) BOOL gestureOptFlag;
@property (weak, nonatomic) id<BDPXScreenGestureTranslationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContainerBottom:(double)arg0;
- (double)containerBottom;
- (void)setXScreenRate:(double)arg0;
- (double)XScreenRate;
- (void)onTapGestureAction:(id)arg0;
- (id)otherGestureRecognizers;
- (void)setOtherGestureRecognizers:(id)arg0;
- (void)setGestureOptFlag:(BOOL)arg0;
- (void)updateXScreenRate:(double)arg0 containerBottom:(double)arg1;
- (void)onPanGestureAction:(id)arg0;
- (void)setXScreenPositionTop:(long long)arg0;
- (void)setQuarterPositionTopUnderXScreen:(long long)arg0;
- (long long)XScreenPositionTop;
- (void)setQuarterPositionTopAboveXScreen:(long long)arg0;
- (void)setThreeQuarterPositionTopAboveXScreen:(long long)arg0;
- (BOOL)tryToDisableOtherConflictingGestures:(struct CGPoint { double x0; double x1; })arg0;
- (unsigned long long)getTranslationPosition:(long long)arg0;
- (void)restoreAndClearOtherConflictingGestures;
- (long long)quarterPositionTopAboveXScreen;
- (long long)threeQuarterPositionTopAboveXScreen;
- (long long)quarterPositionTopUnderXScreen;
- (BOOL)gestureOptFlag;
- (BOOL)newTryToDisableOtherConflictingGestures:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)canDisableConflictingGesture:(id)arg0 translation:(struct CGPoint { double x0; double x1; })arg1;
- (long long)countOfScrollView;
- (BOOL)newCanDisableConflictingGesture:(id)arg0 translation:(struct CGPoint { double x0; double x1; })arg1;
- (void)addOtherConflictingGesture:(id)arg0;
- (id)initWithXScreenRate:(double)arg0 containerBottom:(double)arg1;
- (void)setupXScreenPanGestureOnView:(id)arg0;
- (id)pan;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)setPan:(id)arg0;
- (id)tap;
- (void)setTap:(id)arg0;

@end