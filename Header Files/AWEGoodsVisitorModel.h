//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEGoodsVisitorModel : MTLModel <MTLJSONSerializing> {
    NSArray *_visitorAvatars;
    unsigned long long _count;
}

@property (copy, nonatomic) NSArray *visitorAvatars;
@property (nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)visitorAvatarsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)visitorAvatars;
- (void)setVisitorAvatars:(id)arg0;
- (void)setCount:(unsigned long long)arg0;
- (void).cxx_destruct;
- (unsigned long long)count;

@end
