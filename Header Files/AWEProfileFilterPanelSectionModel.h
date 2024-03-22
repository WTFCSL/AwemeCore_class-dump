//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEProfileFilterPanelSectionModel : MTLModel <MTLJSONSerializing> {
    NSString *_title;
    long long _columnCount;
    NSArray *_itemModels;
    NSString *_type;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long columnCount;
@property (retain, nonatomic) NSArray *itemModels;
@property (copy, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)itemModels;
- (void)setItemModels:(id)arg0;
- (long long)columnCount;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)type;
- (id)title;
- (void)setType:(id)arg0;
- (void)setColumnCount:(long long)arg0;
- (void)setTitle:(id)arg0;

@end