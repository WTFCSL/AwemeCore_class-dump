//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface LVDraftTextTemplatePayload : LVDraftEffectTemplatePayload {
    struct shared_ptr<CutSame::MaterialTextTemplate> { struct MaterialTextTemplate *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
    NSArray *_resources;
}

@property (copy, nonatomic) NSString *fallbackFontPath;
@property (copy, nonatomic) NSArray *resources;
@property (nonatomic) long long sourcePlatform;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialTextTemplate> { struct MaterialTextTemplate *x0; struct __shared_weak_count *x1; })arg0;
- (id)initWithType:(unsigned long long)arg0 effectID:(id)arg1 resourceID:(id)arg2 rootPath:(id)arg3 path:(id)arg4 name:(id)arg5 platformSupport:(unsigned long long)arg6;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)arg0;
- (struct shared_ptr<CutSame::MaterialTextTemplate> { struct MaterialTextTemplate *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialTextTemplate> { struct MaterialTextTemplate *x0; struct __shared_weak_count *x1; })arg0;
- (long long)sourcePlatform;
- (void)setSourcePlatform:(long long)arg0;
- (id)fallbackFontPath;
- (void)setFallbackFontPath:(id)arg0;
- (id)resources;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setResources:(id)arg0;
- (id).cxx_construct;

@end