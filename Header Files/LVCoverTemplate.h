//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface LVCoverTemplate : NSObject {
    struct shared_ptr<CutSame::CoverTemplate> { struct CoverTemplate *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
    NSArray *_coverTemplateMaterialIds;
}

@property (copy, nonatomic) NSString *coverTemplateCategory;
@property (copy, nonatomic) NSString *coverTemplateCategoryID;
@property (copy, nonatomic) NSString *coverTemplateID;
@property (copy, nonatomic) NSArray *coverTemplateMaterialIds;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::CoverTemplate> { struct CoverTemplate *x0; struct __shared_weak_count *x1; })arg0;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)arg0;
- (struct shared_ptr<CutSame::CoverTemplate> { struct CoverTemplate *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)setCPPModel:(struct shared_ptr<CutSame::CoverTemplate> { struct CoverTemplate *x0; struct __shared_weak_count *x1; })arg0;
- (id)coverTemplateCategory;
- (void)setCoverTemplateCategory:(id)arg0;
- (id)coverTemplateCategoryID;
- (void)setCoverTemplateCategoryID:(id)arg0;
- (id)coverTemplateID;
- (void)setCoverTemplateID:(id)arg0;
- (id)coverTemplateMaterialIds;
- (void)setCoverTemplateMaterialIds:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id).cxx_construct;

@end