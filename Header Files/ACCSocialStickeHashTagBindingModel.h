//
//     Generated by private class-dump
//

@class NSString;

@interface ACCSocialStickeHashTagBindingModel : MTLModel <MTLJSONSerializing> {
    NSString *_hashTagName;
}

@property (copy, nonatomic) NSString *hashTagName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithHashTagName:(id)arg0;
+ (id)JSONKeyPathsByPropertyKey;

- (id)hashTagName;
- (void)setHashTagName:(id)arg0;
- (void).cxx_destruct;

@end