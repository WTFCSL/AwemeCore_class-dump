//
//     Generated by private class-dump
//

@class NSString;

@interface AWEStoryContainerCollectionView : UICollectionView <AWEStoryContainerCollectionViewProtocol> {
    BOOL _enableEnterProfile;
    BOOL _enableGestureBeginAlways;
    BOOL _enableEdgePanWhenBounce;
}

@property (nonatomic) BOOL enableEnterProfile;
@property (nonatomic) BOOL enableGestureBeginAlways;
@property (nonatomic) BOOL enableEdgePanWhenBounce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)edgePan:(id)arg0;
- (void)setEnableEdgePanWhenBounce:(BOOL)arg0;
- (BOOL)enableEnterProfile;
- (void)setEnableEnterProfile:(BOOL)arg0;
- (BOOL)enableEdgePanWhenBounce;
- (void)setEnableGestureBeginAlways:(BOOL)arg0;
- (BOOL)enableGestureBeginAlways;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;

@end
