//
//     Generated by private class-dump
//

@class NSString;

@interface BDNovelECDHDefaultImpl : NSObject <BDNovelDiffieHellmanProtocol> {
    struct ec_group_st { } *_group;
    struct ec_key_st { } *_privateKey;
}

@property (nonatomic) struct ec_group_st { } *group;
@property (nonatomic) struct ec_key_st { } *privateKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generateKey;
- (id)computeWithShareKey:(id)arg0;
- (id)getParams;
- (struct ec_key_st { } *)privateKey;
- (id)init;
- (id)initWithDict:(id)arg0;
- (struct ec_group_st { } *)group;
- (void)setPrivateKey:(struct ec_key_st { } *)arg0;
- (void)dealloc;
- (void)setGroup:(struct ec_group_st { } *)arg0;

@end
