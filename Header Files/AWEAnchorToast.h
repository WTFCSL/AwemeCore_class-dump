//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAnchorToast : MTLModel <MTLJSONSerializing> {
    NSString *_text;
    NSString *_url;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (void)setUrl:(id)arg0;
- (id)text;
- (id)url;

@end