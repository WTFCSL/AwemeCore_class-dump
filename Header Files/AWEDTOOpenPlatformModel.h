//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDTOOpenPlatformModel : MTLModel <MTLJSONSerializing> {
    NSString *_shareId;
    NSString *_extra;
    NSString *_content;
}

@property (copy, nonatomic) NSString *shareId;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (id)shareId;
- (void)setShareId:(id)arg0;
- (void).cxx_destruct;
- (id)content;
- (id)extra;
- (void)setContent:(id)arg0;

@end
