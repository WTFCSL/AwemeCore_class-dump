//
//     Generated by private class-dump
//

@protocol IESLivePublicScreenComponent <IESLivePluginLayoutViewAdapter>

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (long long)targetContainer;

@optional

- (void)startShowAnimation:(id /* block */)arg0;
- (BOOL)widthEqualToPublicScreen;
- (BOOL)widthUnlimitedWithPublicScreen;
- (void)dismissWithAnimation:(id /* block */)arg0;
- (void)orientationChanged:(long long)arg0;

@end
