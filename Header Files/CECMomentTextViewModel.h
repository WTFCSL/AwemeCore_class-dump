//
//     Generated by private class-dump
//

@protocol CECMomentCameraSubModeService;

@interface CECMomentTextViewModel : AFDMomentCameraBaseViewModel {
    BOOL _currentIsInTransition;
    BOOL _isLandingNormalPrivateView;
    BOOL _hasObserverKeyboard;
    long long _keyboardState;
    double _keyboardShowDuration;
    long long _keyboardAnimationCurve;
    id<CECMomentCameraSubModeService> _subModeService;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _beginKeyboardFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endKeyboardFrame;
}

@property (weak, nonatomic) id<CECMomentCameraSubModeService> subModeService;
@property (nonatomic) long long keyboardState;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } beginKeyboardFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endKeyboardFrame;
@property (nonatomic) double keyboardShowDuration;
@property (nonatomic) BOOL hasObserverKeyboard;
@property (nonatomic) long long keyboardAnimationCurve;
@property (nonatomic) BOOL currentIsInTransition;
@property (nonatomic) BOOL isLandingNormalPrivateView;

- (double)keyboardShowDuration;
- (void)setCurrentIsInTransition:(BOOL)arg0;
- (id)subModeService;
- (void)setIsLandingNormalPrivateView:(BOOL)arg0;
- (void)setSubModeService:(id)arg0;
- (void)keyBoardWillShow:(id)arg0;
- (void)keyBoardWillHide:(id)arg0;
- (void)addObserverKeyBoard;
- (void)keyBoardDidShow:(id)arg0;
- (void)keyBoardDidHide:(id)arg0;
- (BOOL)isLandingNormalPrivateView;
- (BOOL)currentIsInTransition;
- (void)trackMomentTextKeyboardShowEvent;
- (void)removeObserverKeyBoard;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })endKeyboardFrame;
- (long long)keyboardAnimationCurve;
- (void)trackMomentTextLimitNoticeShowEvent;
- (BOOL)hasObserverKeyboard;
- (void)setHasObserverKeyboard:(BOOL)arg0;
- (BOOL)shouldIgnoreKeyboardEvent;
- (void)setBeginKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setEndKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setKeyboardShowDuration:(double)arg0;
- (void)setKeyboardAnimationCurve:(long long)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })beginKeyboardFrame;
- (long long)keyboardState;
- (void).cxx_destruct;
- (void)setKeyboardState:(long long)arg0;

@end
