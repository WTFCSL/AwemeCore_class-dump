//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPadPMCSeriesContentTypeModel : MTLModel <MTLJSONSerializing> {
    long long _contentType;
    NSString *_name;
}

@property (nonatomic) long long contentType;
@property (copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setContentType:(long long)arg0;
- (long long)contentType;
- (void).cxx_destruct;
- (void)setName:(id)arg0;
- (id)name;

@end