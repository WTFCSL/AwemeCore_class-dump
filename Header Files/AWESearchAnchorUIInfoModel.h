//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWESearchAnchorUIInfoModel : MTLModel <MTLJSONSerializing> {
    NSArray *_textsModel;
    NSArray *_iconsModel;
}

@property (copy, nonatomic) NSArray *textsModel;
@property (copy, nonatomic) NSArray *iconsModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textsModelJSONTransformer;
+ (id)iconsModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)textsModel;
- (void)setTextsModel:(id)arg0;
- (id)iconsModel;
- (void)setIconsModel:(id)arg0;
- (void).cxx_destruct;

@end
