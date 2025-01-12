//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESECGoodsDetailPageConfigure : MTLModel <MTLJSONSerializing> {
    BOOL _collapseDetail;
    NSArray *_forbidFoldSliceIds;
    long long _shareButtonAnimation;
}

@property (nonatomic) BOOL collapseDetail;
@property (copy, nonatomic) NSArray *forbidFoldSliceIds;
@property (nonatomic) long long shareButtonAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)collapseDetail;
- (void)setCollapseDetail:(BOOL)arg0;
- (id)forbidFoldSliceIds;
- (void)setForbidFoldSliceIds:(id)arg0;
- (long long)shareButtonAnimation;
- (void)setShareButtonAnimation:(long long)arg0;
- (void).cxx_destruct;

@end
