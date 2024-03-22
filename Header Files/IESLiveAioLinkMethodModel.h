//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary, NSMethodSignature;

@interface IESLiveAioLinkMethodModel : IESLiveDynamicMTLModel <MTLJSONSerializing> {
    NSString *_routerName;
    NSString *_protocolName;
    NSMethodSignature *_signature;
}

@property (copy, nonatomic) NSString *routerName;
@property (copy, nonatomic) NSString *protocolName;
@property (copy, nonatomic) NSString *methodName;
@property (copy, nonatomic) NSArray *paramsNames;
@property (copy, nonatomic) NSString *methodType;
@property (copy, nonatomic) NSString *selectorName;
@property (copy, nonatomic) NSString *returnName;
@property (retain, nonatomic) NSMethodSignature *signature;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)routerName;
- (void)setRouterName:(id)arg0;
- (void)setSignature:(id)arg0;
- (id)signature;
- (void).cxx_destruct;
- (id)protocolName;
- (void)setProtocolName:(id)arg0;

@end
