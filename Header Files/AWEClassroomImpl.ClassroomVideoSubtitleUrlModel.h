//
//     Generated by private class-dump
//

@class NSString;

@interface AWEClassroomImpl.ClassroomVideoSubtitleUrlModel : MTLModel <MTLJSONSerializing> {
    void /* unknown type, empty encoding */ index_id;
    void /* unknown type, empty encoding */ sub_id;
    void /* unknown type, empty encoding */ expire;
    void /* unknown type, empty encoding */ language_id;
    void /* unknown type, empty encoding */ language;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ format;
    void /* unknown type, empty encoding */ version;
}

@property (nonatomic) void /* unknown type, empty encoding */ index_id;
@property (nonatomic) void /* unknown type, empty encoding */ sub_id;
@property (nonatomic) void /* unknown type, empty encoding */ expire;
@property (nonatomic) void /* unknown type, empty encoding */ language_id;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *format;
@property (nonatomic, copy) NSString *version;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)index_id;
- (void)setIndex_id:(long long)arg0;
- (long long)sub_id;
- (void)setSub_id:(long long)arg0;
- (long long)language_id;
- (void)setLanguage_id:(long long)arg0;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (id)language;
- (long long)expire;
- (void)setUrl:(id)arg0;
- (void)setFormat:(id)arg0;
- (id)version;
- (id)initWithCoder:(id)arg0;
- (void)setLanguage:(id)arg0;
- (id)url;
- (id)format;
- (void)setExpire:(long long)arg0;

@end
