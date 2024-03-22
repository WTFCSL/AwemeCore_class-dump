//
//     Generated by private class-dump
//

@class NSString;

@interface AWELeftSlideNMinConfigModel : MTLModel <MTLJSONSerializing, NSCopying> {
    BOOL _forceInsert;
    BOOL _similarRecommend;
    BOOL _useImplicitProduct;
    long long _nMin;
    NSString *_trafficFrom;
    NSString *_sameBlockName;
    NSString *_sameSceneId;
    NSString *_tabId;
    NSString *_isStronglyRecommend;
}

@property (nonatomic) BOOL forceInsert;
@property (nonatomic) BOOL similarRecommend;
@property (nonatomic) long long nMin;
@property (nonatomic) BOOL useImplicitProduct;
@property (retain, nonatomic) NSString *trafficFrom;
@property (retain, nonatomic) NSString *sameBlockName;
@property (retain, nonatomic) NSString *sameSceneId;
@property (retain, nonatomic) NSString *tabId;
@property (retain, nonatomic) NSString *isStronglyRecommend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)tabId;
- (void)setTabId:(id)arg0;
- (long long)nMin;
- (BOOL)useImplicitProduct;
- (id)sameBlockName;
- (id)sameSceneId;
- (id)isStronglyRecommend;
- (id)trafficFrom;
- (BOOL)forceInsert;
- (BOOL)similarRecommend;
- (void)setSameBlockName:(id)arg0;
- (void)setTrafficFrom:(id)arg0;
- (void)setIsStronglyRecommend:(id)arg0;
- (void)setForceInsert:(BOOL)arg0;
- (void)setSimilarRecommend:(BOOL)arg0;
- (void)setNMin:(long long)arg0;
- (void)setUseImplicitProduct:(BOOL)arg0;
- (void)setSameSceneId:(id)arg0;
- (void).cxx_destruct;

@end
