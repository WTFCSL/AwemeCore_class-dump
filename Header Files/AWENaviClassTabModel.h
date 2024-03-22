//
//     Generated by private class-dump
//

@class NSString;

@interface AWENaviClassTabModel : MTLModel <MTLJSONSerializing> {
    BOOL _selected;
    NSString *_key;
    NSString *_name;
    NSString *_icon;
    unsigned long long _selectedCategoryIndex;
}

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *icon;
@property (nonatomic) unsigned long long selectedCategoryIndex;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)key;
- (id)icon;
- (id)init;
- (void).cxx_destruct;
- (void)setKey:(id)arg0;
- (void)setSelected:(BOOL)arg0;
- (void)setName:(id)arg0;
- (void)setIcon:(id)arg0;
- (id)name;
- (BOOL)isSelected;
- (void)setSelectedCategoryIndex:(unsigned long long)arg0;
- (unsigned long long)selectedCategoryIndex;

@end