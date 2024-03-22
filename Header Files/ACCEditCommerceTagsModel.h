//
//     Generated by private class-dump
//

@class NSString, NSArray, ACCEditTagsURLModel;

@interface ACCEditCommerceTagsModel : MTLModel <MTLJSONSerializing> {
    ACCEditTagsURLModel *_imageURL;
    NSString *_title;
    NSString *_itemID;
    NSArray *_categories;
    long long _type;
    long long _importCount;
    NSString *_schema;
}

@property (retain, nonatomic) ACCEditTagsURLModel *imageURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSArray *categories;
@property (nonatomic) long long type;
@property (nonatomic) long long importCount;
@property (copy, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setSchema:(id)arg0;
- (id)categories;
- (void).cxx_destruct;
- (void)setCategories:(id)arg0;
- (void)setImageURL:(id)arg0;
- (long long)type;
- (id)itemID;
- (id)imageURL;
- (void)setItemID:(id)arg0;
- (id)title;
- (void)setType:(long long)arg0;
- (id)schema;
- (void)setTitle:(id)arg0;
- (long long)importCount;
- (void)setImportCount:(long long)arg0;

@end