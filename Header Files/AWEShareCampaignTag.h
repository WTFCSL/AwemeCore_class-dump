//
//     Generated by private class-dump
//

@class NSString;

@interface AWEShareCampaignTag : MTLModel <MTLJSONSerializing> {
    long long _type;
    NSString *_content;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (long long)type;
- (id)content;
- (void)setType:(long long)arg0;
- (void)setContent:(id)arg0;

@end
