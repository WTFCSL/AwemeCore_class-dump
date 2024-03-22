//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface CKCacheInfo_OC : NSObject {
    struct shared_ptr<ckresource::cache::CKCacheInfo> { struct CKCacheInfo *__ptr_; struct __shared_weak_count *__cntrl_; } _cppModel;
}

@property (copy, nonatomic) NSString *primaryKey;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *panel;
@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *modelName;
@property (nonatomic) long long type;
@property (nonatomic) long long bizSpace;
@property (nonatomic) long long source;
@property (nonatomic) double lastAccessTime;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) unsigned long long useCount;
@property (copy, nonatomic) NSDictionary *extraMap;

+ (id)toAbsolutePath:(id)arg0;
+ (id)toRelativePath:(id)arg0;

- (id)resourceId;
- (void)setResourceId:(id)arg0;
- (id)initWithCppModel:(const void *)arg0;
- (struct shared_ptr<ckresource::cache::CKCacheInfo> { struct CKCacheInfo *x0; struct __shared_weak_count *x1; })cppModel;
- (long long)bizSpace;
- (double)lastAccessTime;
- (void)setBizSpace:(long long)arg0;
- (void)setLastAccessTime:(double)arg0;
- (id)extraMap;
- (void)setExtraMap:(id)arg0;
- (id)init;
- (long long)source;
- (void).cxx_destruct;
- (id)primaryKey;
- (void)setModelName:(id)arg0;
- (id)modelName;
- (long long)type;
- (void)setUseCount:(unsigned long long)arg0;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg0;
- (void)setType:(long long)arg0;
- (unsigned long long)useCount;
- (id)description;
- (void)setSource:(long long)arg0;
- (void)setUri:(id)arg0;
- (id).cxx_construct;
- (id)uri;
- (id)panel;
- (void)setPrimaryKey:(id)arg0;
- (id)effectId;
- (void)setPanel:(id)arg0;
- (void)setEffectId:(id)arg0;

@end
