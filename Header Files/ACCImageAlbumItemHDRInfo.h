//
//     Generated by private class-dump
//

@interface ACCImageAlbumItemHDRInfo : ACCImageAlbumItemVEResourceRestorableModel {
    BOOL _enableHDRNet;
}

@property (nonatomic) BOOL enableHDRNet;

- (BOOL)enableHDRNet;
- (void)setEnableHDRNet:(BOOL)arg0;
- (void)updateLensHDRModelWithFilePath:(id)arg0;
- (id)lensHDRModelFilePath;
- (BOOL)didInfosChangedWithTarget:(id)arg0;
- (void)deepCopyValuesIfNeedFromTarget:(id)arg0;

@end