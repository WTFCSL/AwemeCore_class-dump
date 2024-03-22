//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface CJPayBaseSafeFeature : JSONModel {
    BOOL _needPersistence;
    NSString *_name;
    NSString *_value;
    NSArray *_valueList;
    unsigned long long _type;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSArray *valueList;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL needPersistence;

+ (BOOL)propertyIsOptional:(id)arg0;

- (BOOL)needPersistence;
- (id)valueList;
- (void)setValueList:(id)arg0;
- (void)setNeedPersistence:(BOOL)arg0;
- (void).cxx_destruct;
- (id)value;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;
- (void)setName:(id)arg0;
- (void)setValue:(id)arg0;
- (id)name;

@end