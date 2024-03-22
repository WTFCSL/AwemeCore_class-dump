//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel;

@interface AWEFeedAdAwemeItem : MTLModel <MTLJSONSerializing> {
    NSString *_awemeID;
    long long _type;
    AWEAwemeModel *_aweme;
    NSString *_creativeID;
}

@property (copy, nonatomic) NSString *awemeID;
@property (nonatomic) long long type;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSString *creativeID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)aweme;
- (void)setAweme:(id)arg0;
- (void)setAwemeID:(id)arg0;
- (void)setCreativeID:(id)arg0;
- (id)awemeID;
- (void).cxx_destruct;
- (long long)type;
- (void)setType:(long long)arg0;
- (id)creativeID;

@end