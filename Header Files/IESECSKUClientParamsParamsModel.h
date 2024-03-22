//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSString;

@interface IESECSKUClientParamsParamsModel : MTLModel <MTLJSONSerializing> {
    BOOL _scrollToInstallment;
    BOOL _popOnWindow;
    BOOL _disableServerDefaultSelect;
    NSArray *_defaultSpecId;
    long long _defaultCount;
    NSDictionary *_poiInfo;
    NSString *_skuSessionId;
    NSString *_maskBackgroundColor;
}

@property (copy, nonatomic) NSArray *defaultSpecId;
@property (nonatomic) long long defaultCount;
@property (nonatomic) BOOL scrollToInstallment;
@property (copy, nonatomic) NSDictionary *poiInfo;
@property (nonatomic) BOOL popOnWindow;
@property (copy, nonatomic) NSString *skuSessionId;
@property (copy, nonatomic) NSString *maskBackgroundColor;
@property (nonatomic) BOOL disableServerDefaultSelect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)poiInfo;
- (void)setPoiInfo:(id)arg0;
- (void)setMaskBackgroundColor:(id)arg0;
- (id)maskBackgroundColor;
- (id)skuSessionId;
- (void)setSkuSessionId:(id)arg0;
- (void)setScrollToInstallment:(BOOL)arg0;
- (BOOL)scrollToInstallment;
- (void)setDisableServerDefaultSelect:(BOOL)arg0;
- (id)defaultSpecId;
- (BOOL)disableServerDefaultSelect;
- (BOOL)popOnWindow;
- (void)setDefaultSpecId:(id)arg0;
- (void)setDefaultCount:(long long)arg0;
- (void)setPopOnWindow:(BOOL)arg0;
- (void).cxx_destruct;
- (long long)defaultCount;

@end