//
//     Generated by private class-dump
//

@class IESECGoodsDetailHeaderSliceModel, IESECGoodsDetailHeaderLynxModel, NSDictionary, IESECHeaderSliceAction, IESECGoodsDetailHeaderMediaModel;

@interface IESECGoodsDetailHeaderContentModel : IESECBaseApiModel {
    IESECGoodsDetailHeaderMediaModel *_media;
    IESECGoodsDetailHeaderSliceModel *_slice;
    IESECGoodsDetailHeaderLynxModel *_lynx;
    IESECHeaderSliceAction *_clickAction;
    NSDictionary *_trackMeta;
    NSDictionary *_bizMeta;
}

@property (retain, nonatomic) IESECGoodsDetailHeaderMediaModel *media;
@property (retain, nonatomic) IESECGoodsDetailHeaderSliceModel *slice;
@property (retain, nonatomic) IESECGoodsDetailHeaderLynxModel *lynx;
@property (retain, nonatomic) IESECHeaderSliceAction *clickAction;
@property (copy, nonatomic) NSDictionary *trackMeta;
@property (copy, nonatomic) NSDictionary *bizMeta;

+ (id)slicesJSONTransformer;
+ (id)lynxsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)clickAction;
- (void)setClickAction:(id)arg0;
- (id)lynx;
- (void)setLynx:(id)arg0;
- (id)trackMeta;
- (void)setTrackMeta:(id)arg0;
- (id)bizMeta;
- (void)setBizMeta:(id)arg0;
- (id)slice;
- (void)setSlice:(id)arg0;
- (void).cxx_destruct;
- (id)media;
- (void)setMedia:(id)arg0;

@end
