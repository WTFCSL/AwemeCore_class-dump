//
//     Generated by private class-dump
//

@class NSString, IESECGoodsDetailPendantFrame, NSDictionary, IESECGoodsDetailPendantTiming;

@interface IESECGoodsDetailPendantInfo : MTLModel <MTLJSONSerializing> {
    IESECGoodsDetailPendantFrame *_pendantFrame;
    IESECGoodsDetailPendantTiming *_showTiming;
    NSString *_schema;
    NSDictionary *_data;
    unsigned long long _type;
}

@property (retain, nonatomic) IESECGoodsDetailPendantFrame *pendantFrame;
@property (retain, nonatomic) IESECGoodsDetailPendantTiming *showTiming;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *data;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)showTiming;
- (id)pendantFrame;
- (void)setPendantFrame:(id)arg0;
- (void)setShowTiming:(id)arg0;
- (void)setSchema:(id)arg0;
- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;
- (id)schema;

@end