//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEOpenAuthInfoClientInfo : MTLModel <MTLJSONSerializing> {
    NSString *_clientKey;
    NSString *_clientName;
    NSString *_clientIcon;
    NSArray *_protocolInfo;
}

@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSString *clientName;
@property (copy, nonatomic) NSString *clientIcon;
@property (copy, nonatomic) NSArray *protocolInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protocolInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)clientIcon;
- (void)setClientIcon:(id)arg0;
- (id)protocolInfo;
- (void)setProtocolInfo:(id)arg0;
- (id)clientKey;
- (id)clientName;
- (void)setClientName:(id)arg0;
- (void).cxx_destruct;
- (void)setClientKey:(id)arg0;

@end
