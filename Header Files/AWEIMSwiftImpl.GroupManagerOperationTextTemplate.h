//
//     Generated by private class-dump
//

@class NSString;

@interface AWEIMSwiftImpl.GroupManagerOperationTextTemplate : MTLModel <MTLJSONSerializing> {
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ schema;
    void /* unknown type, empty encoding */ formatKey;
}

@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *schema;
@property (nonatomic, copy) NSString *formatKey;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setSchema:(id)arg0;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (id)text;
- (id)schema;
- (id)formatKey;
- (void)setFormatKey:(id)arg0;

@end