//
//     Generated by private class-dump
//

@class NSString;

@interface ACCImageAlbumItemVEResourceRestorableModel : ACCImageAlbumItemBaseResourceModel {
    NSString *_effectIdentifier;
}

@property (copy, nonatomic) NSString *effectIdentifier;

- (id)getAbsoluteFilePath;
- (void)setAbsoluteFilePath:(id)arg0;
- (void)updateRecoveredEffectIfNeedWithIdentifier:(id)arg0 filePath:(id)arg1;
- (void).cxx_destruct;
- (id)effectIdentifier;
- (void)setEffectIdentifier:(id)arg0;

@end