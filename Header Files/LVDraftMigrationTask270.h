//
//     Generated by private class-dump
//

@interface LVDraftMigrationTask270 : LVDraftMigrationTask

+ (id)generateWithPrefix:(id)arg0;
+ (id)imageWithColor:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1;
+ (id)generate;

- (BOOL)checkExistMaterialVideo:(id)arg0;
- (long long)createInnerMaterialIfNeed;
- (long long)migrateMaterial:(id)arg0;
- (id)mirgateSpeed:(id)arg0;
- (id)mirgateMask:(id)arg0;
- (void)mirgateCrop:(id)arg0;
- (long long)createInnerMaterialWithColor:(id)arg0 materialFilePath:(id)arg1;
- (void)migrateDraft:(id)arg0;

@end
