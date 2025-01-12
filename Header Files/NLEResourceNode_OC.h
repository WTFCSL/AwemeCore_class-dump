//
//     Generated by private class-dump
//

@class NSString;

@interface NLEResourceNode_OC : NLENode_OC

@property (copy, nonatomic) NSString *dve_iconUrlStr;
@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) BOOL acc_isPrivate;
@property (nonatomic) BOOL acc_isNetworkUrl;
@property (copy, nonatomic) NSString *acc_draftFolder;
@property (copy, nonatomic) NSString *acc_draftFolder;
@property (readonly, nonatomic) BOOL acc_isPrivate;
@property (nonatomic) struct shared_ptr<cut::model::NLEResourceNode> { struct NLEResourceNode *x0; struct __shared_weak_count *x1; } cppValue;
@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSString *resourceFile;
@property (copy, nonatomic) NSString *resourceName;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned long long resourceType;
@property (nonatomic) unsigned long long resourceTag;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (nonatomic) BOOL necessary;

+ (id)resourceTypeConvertToStr:(unsigned long long)arg0;
+ (id)p_newFilePathIfNeedWithURL:(id)arg0 dirPath:(id)arg1 isMove:(BOOL *)arg2;

- (id)resourceId;
- (void)setResourceId:(id)arg0;
- (id)resourceFile;
- (void)setResourceFile:(id)arg0;
- (id)dve_iconUrlStr;
- (void)setDve_iconUrlStr:(id)arg0;
- (BOOL)necessary;
- (void)setNecessary:(BOOL)arg0;
- (unsigned long long)resourceTag;
- (void)setResourceTag:(unsigned long long)arg0;
- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLEResourceNode> { struct NLEResourceNode *x0; struct __shared_weak_count *x1; })arg0;
- (void)setAcc_draftFolder:(id)arg0;
- (id)acc_path;
- (void)acc_setGlobalResouceWithPath:(id)arg0;
- (void)acc_setPrivateResouceWithURL:(id)arg0 draftFolder:(id)arg1;
- (BOOL)isRelatedPath:(id)arg0;
- (id)acc_draftFolder;
- (void)acc_fixSandboxDirWithDraftFolder:(id)arg0;
- (BOOL)acc_isPrivate;
- (void)setAcc_isPrivate:(BOOL)arg0;
- (BOOL)acc_isNetworkUrl;
- (void)setAcc_isNetworkUrl:(BOOL)arg0;
- (BOOL)acc_movePrivateResouceToDraftFolder:(id)arg0;
- (void)setAcc_path:(id)arg0 draftFolder:(id)arg1;
- (id)init;
- (unsigned long long)resourceType;
- (void)setResourceType:(unsigned long long)arg0;
- (unsigned int)height;
- (void)setResourceName:(id)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (void)setWidth:(unsigned int)arg0;
- (void)setHeight:(unsigned int)arg0;
- (unsigned int)width;
- (id)resourceName;
- (void)setDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (id)effectId;
- (void)setEffectId:(id)arg0;

@end
