//
//     Generated by private class-dump
//

@class NSString;

@interface AWECampaignSubmitTaskReqParams : MTLModel <MTLJSONSerializing> {
    NSString *_token;
    NSString *_uniqueID;
}

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (void)setToken:(id)arg0;
- (id)token;

@end
