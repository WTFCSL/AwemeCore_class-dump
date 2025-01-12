//
//     Generated by private class-dump
//

@class IESECGoodsDetailComponentUIConfig, NSString, IESECGoodsDetailComponentViewObject, NSArray, NSDictionary, IESECSliceStyle, IESECGoodsDetailComponentConfig;

@interface IESECGoodsDetailComponentObject : MTLModel <MTLJSONSerializing> {
    BOOL _isSplit;
    BOOL _isHide;
    NSString *_componentIdentifier;
    long long _version;
    IESECGoodsDetailComponentUIConfig *_uiConfig;
    IESECGoodsDetailComponentViewObject *_viewObject;
    NSString *_sliceId;
    NSString *_sliceType;
    NSArray *_slices;
    NSDictionary *_trackMeta;
    IESECSliceStyle *_style;
    NSString *_viewType;
    IESECGoodsDetailComponentConfig *_sliceConfig;
}

@property (copy, nonatomic) NSString *componentIdentifier;
@property (nonatomic) long long version;
@property (retain, nonatomic) IESECGoodsDetailComponentUIConfig *uiConfig;
@property (retain, nonatomic) IESECGoodsDetailComponentViewObject *viewObject;
@property (copy, nonatomic) NSString *sliceId;
@property (copy, nonatomic) NSString *sliceType;
@property (copy, nonatomic) NSArray *slices;
@property (copy, nonatomic) NSDictionary *trackMeta;
@property (retain, nonatomic) IESECSliceStyle *style;
@property (nonatomic) BOOL isSplit;
@property (copy, nonatomic) NSString *viewType;
@property (retain, nonatomic) IESECGoodsDetailComponentConfig *sliceConfig;
@property (nonatomic) BOOL isHide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)slicesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)uiConfig;
- (void)setUiConfig:(id)arg0;
- (id)sliceId;
- (void)setSliceId:(id)arg0;
- (void)setViewObject:(id)arg0;
- (id)viewObject;
- (BOOL)isHide;
- (void)setIsHide:(BOOL)arg0;
- (id)trackMeta;
- (void)setTrackMeta:(id)arg0;
- (id)sliceType;
- (void)setSliceType:(id)arg0;
- (id)sliceConfig;
- (void)setSliceConfig:(id)arg0;
- (BOOL)isSplit;
- (id)style;
- (void)setVersion:(long long)arg0;
- (void).cxx_destruct;
- (long long)version;
- (void)setIsSplit:(BOOL)arg0;
- (id)viewType;
- (void)setStyle:(id)arg0;
- (id)slices;
- (id)componentIdentifier;
- (void)setViewType:(id)arg0;
- (void)setSlices:(id)arg0;
- (void)setComponentIdentifier:(id)arg0;

@end
