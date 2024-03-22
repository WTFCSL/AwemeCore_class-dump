//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface ACCBrushDVECategoryResourceModel : NSObject <DVEResourceCategoryModelProtocol> {
    NSString *_categoryId;
    long long _order;
    NSString *_name;
    NSArray *_models;
}

@property (retain, nonatomic) NSString *categoryId;
@property (nonatomic) long long order;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *models;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)order;
- (void)setOrder:(long long)arg0;
- (void).cxx_destruct;
- (id)models;
- (void)setName:(id)arg0;
- (void)setModels:(id)arg0;
- (id)name;
- (id)categoryId;
- (void)setCategoryId:(id)arg0;

@end
