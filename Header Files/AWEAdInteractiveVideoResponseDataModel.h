//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEAdInteractiveVideoResponseDataModel : MTLModel <MTLJSONSerializing> {
    NSArray *_awemeList;
}

@property (copy, nonatomic) NSArray *awemeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)awemeList;
- (void)setAwemeList:(id)arg0;
- (void).cxx_destruct;

@end
