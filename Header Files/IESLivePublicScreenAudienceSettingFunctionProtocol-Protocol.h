//
//     Generated by private class-dump
//

@protocol IESLivePublicScreenAudienceSettingFunctionProtocol <NSObject>

- (void)setFontSizeType:(unsigned long long)arg0;
- (void)setupWithRoom:(id)arg0 trackContext:(id)arg1;
- (unsigned long long)currentFontSizeType;
- (void)publicScreenWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (void)publicScreenWillBeginDragging:(id)arg0;
- (void)publicScreenTapped;
- (void)publicScreenLongPressed;
- (void)publicScreenCollectionView:(id)arg0 heightWillChangeWithLayoutData:(id)arg1;
- (void)publicScreenCollectionView:(id)arg0 heightDidChangeWithLayoutData:(id)arg1;

@end