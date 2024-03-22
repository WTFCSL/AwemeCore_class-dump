//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPOIServiceSpuEntryModel : MTLModel <MTLJSONSerializing> {
    unsigned long long _schemaType;
    NSString *_url;
    NSString *_title;
    NSString *_schemaUrl;
    unsigned long long _entryType;
}

@property (nonatomic) unsigned long long schemaType;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schemaUrl;
@property (nonatomic) unsigned long long entryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setSchemaType:(unsigned long long)arg0;
- (id)schemaUrl;
- (void)setSchemaUrl:(id)arg0;
- (unsigned long long)entryType;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (id)title;
- (id)url;
- (unsigned long long)schemaType;
- (void)setTitle:(id)arg0;
- (void)setEntryType:(unsigned long long)arg0;

@end