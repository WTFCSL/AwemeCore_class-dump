//
//     Generated by private class-dump
//

@protocol ACCSerializationProtocol <NSObject>

+ (id)accs_covertRelations:(Class)arg0;
+ (id)accs_includeKeys:(BOOL)arg0;
+ (id)accs_excludeKeys:(BOOL)arg0;
+ (id)accs_acceptClasses:(BOOL)arg0;
+ (id)accs_customSaveByOriginObj:(id)arg0;

@optional

- (BOOL)accs_customCheckAcceptClass:(Class)arg0 isTransform:(BOOL)arg1;
- (id)accs_customRestoreOriginObj:(Class)arg0;
- (void)accs_extraFinishTransform:(id)arg0;
- (void)accs_extraFinishRestore:(id)arg0;

@end
