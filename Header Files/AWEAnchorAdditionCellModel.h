//
//     Generated by private class-dump
//

@class NSDictionary, NSString, AWEURLModel;

@interface AWEAnchorAdditionCellModel : MTLModel <MTLJSONSerializing> {
    NSString *_itemID;
    NSString *_name;
    NSString *_title;
    NSString *_subtitle;
    AWEURLModel *_iconURL;
    NSString *_schema;
    NSString *_extra;
    long long _sectionType;
    NSDictionary *_cachedExtraDic;
}

@property (retain, nonatomic) NSDictionary *cachedExtraDic;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) AWEURLModel *iconURL;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long sectionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (id)extraDic;
- (id)recommendReason;
- (id)cachedExtraDic;
- (void)setCachedExtraDic:(id)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (void)setSectionType:(long long)arg0;
- (long long)sectionType;
- (void)setIconURL:(id)arg0;
- (id)iconURL;
- (id)itemID;
- (id)extra;
- (void)setItemID:(id)arg0;
- (id)title;
- (void)setName:(id)arg0;
- (id)subtitle;
- (id)schema;
- (id)name;
- (void)setSubtitle:(id)arg0;
- (void)setTitle:(id)arg0;

@end
