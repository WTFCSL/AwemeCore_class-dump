//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWELVideoEntranceData : MTLModel <MTLJSONSerializing> {
    NSArray *_meta;
    NSArray *_play;
}

@property (copy, nonatomic) NSArray *meta;
@property (copy, nonatomic) NSArray *play;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metaJSONTransformer;
+ (id)playJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setPlay:(id)arg0;
- (void)setMeta:(id)arg0;
- (id)meta;
- (void).cxx_destruct;
- (id)play;

@end
