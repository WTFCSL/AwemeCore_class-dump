//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWECampaignShortcutInfoModel : MTLModel <MTLJSONSerializing> {
    NSString *_willGetInfo;
    NSString *_withdrawInfo;
    long long _reqInterval;
    NSString *_webURL;
}

@property (retain, nonatomic) NSString *willGetInfo;
@property (retain, nonatomic) NSString *withdrawInfo;
@property (nonatomic) long long reqInterval;
@property (retain, nonatomic) NSString *webURL;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)willGetInfo;
- (void)setWillGetInfo:(id)arg0;
- (id)withdrawInfo;
- (void)setWithdrawInfo:(id)arg0;
- (long long)reqInterval;
- (void)setReqInterval:(long long)arg0;
- (void).cxx_destruct;
- (id)webURL;
- (void)setWebURL:(id)arg0;

@end
