//
//     Generated by private class-dump
//

@interface BDUGLuckyDogToastManager : NSObject {
    long long _lastPopUpId;
}

@property (nonatomic) long long lastPopUpId;

+ (void)startupDialogModule;
+ (id)sharedInstance;

- (void)showDefaultToastWithParams:(id)arg0;
- (void)showToast:(id)arg0 model:(id)arg1;
- (long long)lastPopUpId;
- (void)__requestImageWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)setLastPopUpId:(long long)arg0;
- (id)defaultParentView;
- (void)dismissToast:(id)arg0 animated:(BOOL)arg1;
- (id)__imageWithImageName:(id)arg0;
- (void)showDefaultToastWithText:(id)arg0;

@end
