//
//     Generated by private class-dump
//

@class UIView;

@interface PuzzleToast : NSObject {
    UIView *_toastView;
}

@property (retain, nonatomic) UIView *toastView;

+ (void)showToast:(id)arg0 withDuration:(long long)arg1;
+ (void)showToast:(id)arg0 withDuration:(long long)arg1 andImage:(id)arg2;
+ (void)showToast:(id)arg0 withDuration:(long long)arg1 andImage:(id)arg2 limitTextLines:(BOOL)arg3;

- (void)_showToast:(id)arg0 withDuration:(long long)arg1 andImage:(id)arg2 limitTextLines:(BOOL)arg3;
- (void)dissMiss;
- (void).cxx_destruct;
- (id)toastView;
- (void)setToastView:(id)arg0;

@end
