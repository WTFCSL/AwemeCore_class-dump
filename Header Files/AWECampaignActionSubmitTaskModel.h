//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWECampaignSubmitTaskReqParams;

@interface AWECampaignActionSubmitTaskModel : MTLModel <MTLJSONSerializing> {
    NSString *_url;
    NSString *_host;
    AWECampaignSubmitTaskReqParams *_reqParams;
    NSDictionary *_dicParam;
}

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *host;
@property (retain, nonatomic) AWECampaignSubmitTaskReqParams *reqParams;
@property (copy, nonatomic) NSDictionary *dicParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)reqParams;
- (void)setReqParams:(id)arg0;
- (id)dicParam;
- (void)setDicParam:(id)arg0;
- (void)setHost:(id)arg0;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (id)host;
- (id)url;

@end