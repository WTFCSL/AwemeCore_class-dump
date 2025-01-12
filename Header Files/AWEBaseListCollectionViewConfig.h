//
//     Generated by private class-dump
//

@interface AWEBaseListCollectionViewConfig : NSObject {
    BOOL _enableStickHeader;
    BOOL _enableStickCollectionView;
    BOOL _enableInteractiveMovement;
    BOOL _disableContentOffsetRestorationAnchor;
    Class _collectionViewClass;
}

@property (retain, nonatomic) Class collectionViewClass;
@property (nonatomic) BOOL enableStickHeader;
@property (nonatomic) BOOL enableStickCollectionView;
@property (nonatomic) BOOL enableInteractiveMovement;
@property (nonatomic) BOOL disableContentOffsetRestorationAnchor;

+ (id)defaultConfig;

- (void)setDisableContentOffsetRestorationAnchor:(BOOL)arg0;
- (BOOL)disableContentOffsetRestorationAnchor;
- (Class)collectionViewClass;
- (BOOL)enableStickHeader;
- (BOOL)enableStickCollectionView;
- (BOOL)enableInteractiveMovement;
- (void)setEnableStickHeader:(BOOL)arg0;
- (void)setCollectionViewClass:(Class)arg0;
- (void)setEnableStickCollectionView:(BOOL)arg0;
- (void)setEnableInteractiveMovement:(BOOL)arg0;
- (void).cxx_destruct;

@end
