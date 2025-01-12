//
//     Generated by private class-dump
//

@class AWEDoubleColumnSearchMerchandiseCouponInfoCountdownModel, NSString, AWEDoubleColumnSearchMerchandiseActivityIcon, NSArray, AWEDoubleColumnSearchMerchandiseCouponInfoContentTextModel;

@interface AWEDoubleColumnSearchMerchandiseCouponInfoModel : MTLModel <MTLJSONSerializing> {
    AWEDoubleColumnSearchMerchandiseCouponInfoCountdownModel *_countdown;
    NSString *_background;
    AWEDoubleColumnSearchMerchandiseActivityIcon *_headIcon;
    AWEDoubleColumnSearchMerchandiseCouponInfoContentTextModel *_headText;
    NSArray *_contentText;
}

@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseCouponInfoCountdownModel *countdown;
@property (copy, nonatomic) NSString *background;
@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon *headIcon;
@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseCouponInfoContentTextModel *headText;
@property (retain, nonatomic) NSArray *contentText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)countdownJSONTransformer;
+ (id)headIconJSONTransformer;
+ (id)contentTextJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)headIcon;
- (void)setHeadIcon:(id)arg0;
- (id)headText;
- (void)setHeadText:(id)arg0;
- (id)background;
- (void).cxx_destruct;
- (void)setBackground:(id)arg0;
- (id)countdown;
- (void)setCountdown:(id)arg0;
- (id)contentText;
- (void)setContentText:(id)arg0;

@end
