//
//     Generated by private class-dump
//

@class IESECGoodsDetailHeaderSliceModel, NSString, IESECGoodsDetailHeaderLynxModel, NSDictionary, IESECGoodsDetailHeaderPendantConfigModel;

@interface IESECGoodsDetailHeaderPendantModel : IESECBaseApiModel {
    NSString *_pendantID;
    IESECGoodsDetailHeaderSliceModel *_slice;
    IESECGoodsDetailHeaderLynxModel *_lynx;
    NSDictionary *_native;
    IESECGoodsDetailHeaderPendantConfigModel *_config;
}

@property (copy, nonatomic) NSString *pendantID;
@property (retain, nonatomic) IESECGoodsDetailHeaderSliceModel *slice;
@property (retain, nonatomic) IESECGoodsDetailHeaderLynxModel *lynx;
@property (copy, nonatomic) NSDictionary *native;
@property (retain, nonatomic) IESECGoodsDetailHeaderPendantConfigModel *config;

+ (id)JSONKeyPathsByPropertyKey;

- (id)lynx;
- (id)pendantID;
- (void)setPendantID:(id)arg0;
- (void)setLynx:(id)arg0;
- (void)setNative:(id)arg0;
- (id)slice;
- (void)setSlice:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)native;

@end
