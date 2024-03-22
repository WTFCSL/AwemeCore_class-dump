//
//     Generated by private class-dump
//

@class NSString;

@interface AWEVideoTypeTagModel : MTLModel <MTLJSONSerializing> {
    long long _tagID;
    NSString *_tagName;
    long long _level;
}

@property (nonatomic) long long tagID;
@property (copy, nonatomic) NSString *tagName;
@property (nonatomic) long long level;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setLevel:(long long)arg0;
- (long long)tagID;
- (void)setTagID:(long long)arg0;
- (long long)level;
- (void).cxx_destruct;
- (id)tagName;
- (void)setTagName:(id)arg0;

@end
