//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWEAdSummerCallingChargingCardModel : MTLModel <MTLJSONSerializing> {
    NSString *_title;
    NSString *_detailTitle;
    AWEURLModel *_heartImage;
    AWEURLModel *_heartFillingImage;
    double _countdown;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detailTitle;
@property (retain, nonatomic) AWEURLModel *heartImage;
@property (retain, nonatomic) AWEURLModel *heartFillingImage;
@property (nonatomic) double countdown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)heartImage;
- (id)heartFillingImage;
- (void)setHeartImage:(id)arg0;
- (void)setHeartFillingImage:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:(id)arg0;
- (double)countdown;
- (void)setCountdown:(double)arg0;
- (id)detailTitle;
- (void)setDetailTitle:(id)arg0;

@end
