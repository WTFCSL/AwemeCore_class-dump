//
//     Generated by private class-dump
//

@class UIWindow;

@interface AWEIMFakeBlackScreenHelper : NSObject {
    UIWindow *_topMaskWindow;
}

@property (retain, nonatomic) UIWindow *topMaskWindow;

+ (BOOL)shouldUseTopMaskWindow;

- (id)topMaskWindow;
- (void)fakeTurnOnScreenIfNeeded;
- (void)fakeTurnOffScreenIfNeeded;
- (void)setTopMaskWindow:(id)arg0;
- (void).cxx_destruct;

@end