//
//     Generated by private class-dump
//

@class NSString;

@interface AWEClassroomModel.ClassroomRichTextModel : MTLModel <MTLJSONSerializing> {
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ size;
    void /* unknown type, empty encoding */ color;
    void /* unknown type, empty encoding */ isBold;
}

@property (nonatomic, copy) NSString *text;
@property (nonatomic) void /* unknown type, empty encoding */ size;
@property (nonatomic, copy) NSString *color;
@property (nonatomic) void /* unknown type, empty encoding */ isBold;

+ (id)JSONKeyPathsByPropertyKey;

- (id)color;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (BOOL)isBold;
- (void)setIsBold:(BOOL)arg0;
- (id)initWithCoder:(id)arg0;
- (id)text;
- (long long)size;
- (void)setSize:(long long)arg0;
- (void)setColor:(id)arg0;

@end