//
//     Generated by private class-dump
//

@class NSString, AWENearbyForwardTabCouponInfoModel, AWEURLModel;

@interface AWENearbyForwardTabExtraInfoModel : MTLModel <MTLJSONSerializing> {
    AWEURLModel *_imageUrl;
    NSString *_pintopText;
    NSString *_highlightText;
    AWENearbyForwardTabCouponInfoModel *_couponInfo;
    NSString *_actionText;
    long long _showTime;
    NSString *_componentId;
    NSString *_closeActionText;
}

@property (retain, nonatomic) AWEURLModel *imageUrl;
@property (copy, nonatomic) NSString *pintopText;
@property (copy, nonatomic) NSString *highlightText;
@property (retain, nonatomic) AWENearbyForwardTabCouponInfoModel *couponInfo;
@property (copy, nonatomic) NSString *actionText;
@property (nonatomic) long long showTime;
@property (retain, nonatomic) NSString *componentId;
@property (copy, nonatomic) NSString *closeActionText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)imageUrlJSONTransformer;
+ (id)couponInfoJSONTransformer;

- (id)componentId;
- (void)setComponentId:(id)arg0;
- (long long)showTime;
- (void)setShowTime:(long long)arg0;
- (id)highlightText;
- (void)setHighlightText:(id)arg0;
- (id)couponInfo;
- (void)setCouponInfo:(id)arg0;
- (id)closeActionText;
- (id)pintopText;
- (void)setPintopText:(id)arg0;
- (void)setCloseActionText:(id)arg0;
- (void).cxx_destruct;
- (id)imageUrl;
- (void)setImageUrl:(id)arg0;
- (id)actionText;
- (void)setActionText:(id)arg0;

@end