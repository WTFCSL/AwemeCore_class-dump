//
//     Generated by private class-dump
//

@protocol ACCCameraSwapService <NSObject>

@property (readonly, nonatomic) BOOL isUserSwappedCamera;
@property (readonly, nonatomic) BOOL shootFromMaskNeedBlockSwapButton;
@property (readonly, nonatomic) long long currentCameraPosition;

- (long long)currentCameraPosition;
- (void)syncCameraActualPosition;
- (void)switchToCameraPosition:(long long)arg0 source:(unsigned long long)arg1;
- (void)switchToOppositeCameraPositionWithSource:(unsigned long long)arg0;
- (BOOL)isUserSwappedCamera;
- (BOOL)shootFromMaskNeedBlockSwapButton;

@end