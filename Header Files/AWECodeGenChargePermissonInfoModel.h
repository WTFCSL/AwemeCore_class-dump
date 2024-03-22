//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWECodeGenChargePermissonInfoModel : AWEBaseDataModel {
    BOOL _permission;
    long long _type;
    NSString *_text;
    NSString *_schema;
    NSString *_schemaText;
    NSArray *_denySubTypesArray;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL permission;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *schemaText;
@property (copy, nonatomic) NSArray *denySubTypesArray;

+ (id)JSONKeyPathsByPropertyKey;

- (id)schemaText;
- (void)setSchemaText:(id)arg0;
- (id)denySubTypesArray;
- (void)setDenySubTypesArray:(id)arg0;
- (void)setSchema:(id)arg0;
- (BOOL)permission;
- (void).cxx_destruct;
- (void)setPermission:(BOOL)arg0;
- (void)setText:(id)arg0;
- (long long)type;
- (void)setType:(long long)arg0;
- (id)text;
- (id)schema;

@end