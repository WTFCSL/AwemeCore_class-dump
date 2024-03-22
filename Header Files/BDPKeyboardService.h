//
//     Generated by private class-dump
//

@class NSString, BDPMultiDelegateProxy;
@protocol BDPKeyboardResponderDelegate;

@interface BDPKeyboardService : NSObject <BDPKeyboardService> {
    BOOL _keyboardShow;
    BOOL _needFixKeyboardObserve;
    BDPMultiDelegateProxy<BDPKeyboardResponderDelegate> *_delegates;
    double _keyboardAnimationDuration;
    long long _keyboardAnimationCurve;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardFrame;
@property (nonatomic) double keyboardAnimationDuration;
@property (nonatomic) long long keyboardAnimationCurve;
@property (nonatomic, getter=isKeyboardShow) BOOL keyboardShow;
@property (nonatomic, getter=isNeedFixKeyboardObserve) BOOL needFixKeyboardObserve;
@property (retain, nonatomic) BDPMultiDelegateProxy<BDPKeyboardResponderDelegate> *delegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)addKeyboardObserve;
- (void)setKeyboardShow:(BOOL)arg0;
- (BOOL)isKeyboardShow;
- (id)initService;
- (long long)keyboardAnimationCurve;
- (void)setKeyboardAnimationCurve:(long long)arg0;
- (BOOL)isNeedFixKeyboardObserve;
- (void)setKeyboardAnimationDuration:(double)arg0;
- (void)setNeedFixKeyboardObserve:(BOOL)arg0;
- (id)delegates;
- (void)setDelegates:(id)arg0;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)arg0;
- (void)keyboardWillHide:(id)arg0;
- (void)dealloc;
- (void)keyboardWillChange:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })keyboardFrame;
- (void)setKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)keyboardAnimationDuration;

@end
