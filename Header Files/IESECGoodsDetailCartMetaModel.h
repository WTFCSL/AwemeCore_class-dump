//
//     Generated by private class-dump
//

@class NSString;

@interface IESECGoodsDetailCartMetaModel : MTLModel <MTLJSONSerializing> {
    BOOL _isMarked;
    NSString *_cartUrl;
    long long _cartNum;
    NSString *_trackParams;
}

@property (copy, nonatomic) NSString *cartUrl;
@property (nonatomic) long long cartNum;
@property (copy, nonatomic) NSString *trackParams;
@property (nonatomic) BOOL isMarked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (BOOL)isMarked;
- (long long)cartNum;
- (void)setCartNum:(long long)arg0;
- (id)cartUrl;
- (void)setCartUrl:(id)arg0;
- (void)setIsMarked:(BOOL)arg0;
- (void).cxx_destruct;

@end
