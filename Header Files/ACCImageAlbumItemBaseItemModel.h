//
//     Generated by private class-dump
//

@class NSString;

@interface ACCImageAlbumItemBaseItemModel : MTLModel {
    NSString *_taskId;
}

@property (readonly, copy, nonatomic) NSString *taskId;

- (id)initWithTaskId:(id)arg0;
- (void)amazingMigrateResourceToNewDraftWithTaskId:(id)arg0;
- (void)updateRecoveredEffectIfNeedWithIdentifier:(id)arg0 filePath:(id)arg1;
- (BOOL)didInfosChangedWithTarget:(id)arg0;
- (void)deepCopyValuesIfNeedFromTarget:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)taskId;

@end
