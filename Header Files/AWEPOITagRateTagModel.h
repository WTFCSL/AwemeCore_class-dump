//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPOITagRateTagModel : MTLModel <MTLJSONSerializing> {
    long long _tagID;
    NSString *_tagText;
}

@property (nonatomic) long long tagID;
@property (copy, nonatomic) NSString *tagText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setTagText:(id)arg0;
- (id)tagText;
- (long long)tagID;
- (void)setTagID:(long long)arg0;
- (void).cxx_destruct;

@end
