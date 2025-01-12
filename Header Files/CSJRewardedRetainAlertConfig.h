//
//     Generated by private class-dump
//

@class NSString;

@interface CSJRewardedRetainAlertConfig : NSObject {
    BOOL _didReduceTime;
    long long _alertType;
    NSString *_template_url;
    NSString *_template_md5;
    long long _reduce_time;
    long long _reduce_duration;
    NSString *_red_pack_amount;
    long long _amount;
    long long _threshold;
    NSString *_start_time;
    NSString *_expire_time;
}

@property (nonatomic) long long alertType;
@property (copy, nonatomic) NSString *template_url;
@property (copy, nonatomic) NSString *template_md5;
@property (nonatomic) long long reduce_time;
@property (nonatomic) long long reduce_duration;
@property (nonatomic) BOOL didReduceTime;
@property (copy, nonatomic) NSString *red_pack_amount;
@property (nonatomic) long long amount;
@property (nonatomic) long long threshold;
@property (copy, nonatomic) NSString *start_time;
@property (copy, nonatomic) NSString *expire_time;

- (id)expire_time;
- (void)setExpire_time:(id)arg0;
- (void)setStart_time:(id)arg0;
- (void)setRed_pack_amount:(id)arg0;
- (void)setDidReduceTime:(BOOL)arg0;
- (void)setupDataWithDictionary:(id)arg0;
- (id)template_md5;
- (void)setTemplate_url:(id)arg0;
- (void)setTemplate_md5:(id)arg0;
- (void)setReduce_time:(long long)arg0;
- (void)setReduce_duration:(long long)arg0;
- (long long)reduce_duration;
- (id)red_pack_amount;
- (BOOL)didReduceTime;
- (id)template_url;
- (void)prefetchDSLWithSlotId:(id)arg0;
- (long long)reduce_time;
- (long long)threshold;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg0;
- (void)setAlertType:(long long)arg0;
- (BOOL)isValid;
- (id)initWithCoder:(id)arg0;
- (void)setThreshold:(long long)arg0;
- (void)encodeWithCoder:(id)arg0;
- (long long)alertType;
- (id)start_time;
- (long long)amount;
- (void)setAmount:(long long)arg0;

@end
