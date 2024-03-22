//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWESocialTagModel : MTLModel <MTLJSONSerializing> {
    AWEURLModel *_icon;
    NSString *_title;
    NSString *_schema;
    long long _tagType;
    NSString *_mobLabel;
}

@property (copy, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long tagType;
@property (copy, nonatomic) NSString *mobLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)mobLabel;
- (void)setMobLabel:(id)arg0;
- (void)setSchema:(id)arg0;
- (id)icon;
- (long long)tagType;
- (void).cxx_destruct;
- (id)title;
- (void)setIcon:(id)arg0;
- (id)schema;
- (void)setTitle:(id)arg0;
- (void)setTagType:(long long)arg0;

@end