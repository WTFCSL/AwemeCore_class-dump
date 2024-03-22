//
//     Generated by private class-dump
//

@class NSString;

@interface AWEOpenAuthInfoProtocolInfo : MTLModel <MTLJSONSerializing> {
    NSString *_protocolUrl;
    NSString *_protocolTitle;
    NSString *_protocolPage;
}

@property (copy, nonatomic) NSString *protocolUrl;
@property (copy, nonatomic) NSString *protocolTitle;
@property (copy, nonatomic) NSString *protocolPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)protocolUrl;
- (void)setProtocolUrl:(id)arg0;
- (id)protocolTitle;
- (void)setProtocolTitle:(id)arg0;
- (id)protocolPage;
- (void)setProtocolPage:(id)arg0;
- (void).cxx_destruct;

@end
