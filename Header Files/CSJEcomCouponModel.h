//
//     Generated by private class-dump
//

@class NSString;

@interface CSJEcomCouponModel : NSObject <BUYYModel, CSJModelSerialization> {
    BOOL _has_coupon;
    long long _user_id;
    NSString *_coupon_meta_id;
    NSString *_unique_id;
    long long _device_id;
    long long _coupon_scene;
    long long _type;
    long long _threshold;
    NSString *_scene_key;
    long long _activity_id;
    long long _amount;
    long long _action;
    long long _style;
    NSString *_start_time;
    NSString *_expire_time;
    NSString *_button_text;
    NSString *_extra;
    NSString *_toast;
}

@property (nonatomic) long long user_id;
@property (copy, nonatomic) NSString *coupon_meta_id;
@property (copy, nonatomic) NSString *unique_id;
@property (nonatomic) long long device_id;
@property (nonatomic) BOOL has_coupon;
@property (nonatomic) long long coupon_scene;
@property (nonatomic) long long type;
@property (nonatomic) long long threshold;
@property (copy, nonatomic) NSString *scene_key;
@property (nonatomic) long long activity_id;
@property (nonatomic) long long amount;
@property (nonatomic) long long action;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *start_time;
@property (copy, nonatomic) NSString *expire_time;
@property (copy, nonatomic) NSString *button_text;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *toast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)fromDictionary:(id)arg0;

- (void)setExtra:(id)arg0;
- (long long)coupon_scene;
- (BOOL)has_coupon;
- (BOOL)canApplyCoupon;
- (long long)activity_id;
- (void)setActivity_id:(long long)arg0;
- (id)button_text;
- (void)setButton_text:(id)arg0;
- (id)coupon_meta_id;
- (void)setCoupon_meta_id:(id)arg0;
- (void)setCoupon_scene:(long long)arg0;
- (id)expire_time;
- (void)setExpire_time:(id)arg0;
- (void)setHas_coupon:(BOOL)arg0;
- (id)scene_key;
- (void)setScene_key:(id)arg0;
- (void)setStart_time:(id)arg0;
- (void)setUser_id:(long long)arg0;
- (BOOL)canShowToast;
- (long long)threshold;
- (long long)style;
- (void).cxx_destruct;
- (long long)type;
- (id)extra;
- (void)setType:(long long)arg0;
- (id)toDictionary;
- (long long)device_id;
- (void)setDevice_id:(long long)arg0;
- (id)initWithCoder:(id)arg0;
- (void)setAction:(long long)arg0;
- (long long)action;
- (void)setThreshold:(long long)arg0;
- (void)encodeWithCoder:(id)arg0;
- (void)setStyle:(long long)arg0;
- (id)unique_id;
- (id)start_time;
- (void)setUnique_id:(id)arg0;
- (long long)amount;
- (void)setAmount:(long long)arg0;
- (void)setToast:(id)arg0;
- (id)toast;
- (long long)user_id;

@end