//
//     Generated by private class-dump
//

@class NSString;

@interface CSJAdDyLiteCouponInfoModel : CSJBasicModel {
    BOOL _has_coupon;
    long long _action;
    long long _activity_id;
    long long _amount;
    NSString *_button_text;
    NSString *_coupon_meta_id;
    unsigned long long _coupon_scene;
    long long _coupon_style;
    long long _device_id;
    NSString *_expire_time;
    NSString *_extra;
    long long _fc_rule_id;
    NSString *_incr_coupon;
    NSString *_scene_key;
    NSString *_start_time;
    long long _style;
    long long _style_type;
    long long _threshold;
    NSString *_toast;
    long long _type;
    NSString *_unique_id;
    long long _user_id;
    long long _version;
}

@property (nonatomic) long long action;
@property (nonatomic) long long activity_id;
@property (nonatomic) long long amount;
@property (copy, nonatomic) NSString *button_text;
@property (copy, nonatomic) NSString *coupon_meta_id;
@property (nonatomic) unsigned long long coupon_scene;
@property (nonatomic) long long coupon_style;
@property (nonatomic) long long device_id;
@property (copy, nonatomic) NSString *expire_time;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long fc_rule_id;
@property (nonatomic) BOOL has_coupon;
@property (copy, nonatomic) NSString *incr_coupon;
@property (copy, nonatomic) NSString *scene_key;
@property (copy, nonatomic) NSString *start_time;
@property (nonatomic) long long style;
@property (nonatomic) long long style_type;
@property (nonatomic) long long threshold;
@property (copy, nonatomic) NSString *toast;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *unique_id;
@property (nonatomic) long long user_id;
@property (nonatomic) long long version;

- (void)setExtra:(id)arg0;
- (unsigned long long)coupon_scene;
- (BOOL)has_coupon;
- (BOOL)canApplyCoupon;
- (long long)activity_id;
- (void)setActivity_id:(long long)arg0;
- (id)button_text;
- (void)setButton_text:(id)arg0;
- (id)coupon_meta_id;
- (void)setCoupon_meta_id:(id)arg0;
- (void)setCoupon_scene:(unsigned long long)arg0;
- (long long)coupon_style;
- (void)setCoupon_style:(long long)arg0;
- (id)expire_time;
- (void)setExpire_time:(id)arg0;
- (long long)fc_rule_id;
- (void)setFc_rule_id:(long long)arg0;
- (void)setHas_coupon:(BOOL)arg0;
- (id)incr_coupon;
- (void)setIncr_coupon:(id)arg0;
- (id)scene_key;
- (void)setScene_key:(id)arg0;
- (void)setStart_time:(id)arg0;
- (long long)style_type;
- (void)setStyle_type:(long long)arg0;
- (void)setUser_id:(long long)arg0;
- (long long)threshold;
- (long long)style;
- (void)setVersion:(long long)arg0;
- (void).cxx_destruct;
- (long long)type;
- (id)extra;
- (void)setType:(long long)arg0;
- (long long)version;
- (long long)device_id;
- (void)setDevice_id:(long long)arg0;
- (void)setAction:(long long)arg0;
- (long long)action;
- (void)setThreshold:(long long)arg0;
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
