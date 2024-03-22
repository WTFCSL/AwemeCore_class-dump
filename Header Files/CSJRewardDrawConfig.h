//
//     Generated by private class-dump
//

@interface CSJRewardDrawConfig : NSObject <NSCoding> {
    unsigned long long _max_draw_playtime;
    unsigned long long _draw_rewarded_playtime;
    long long _skip_btn_left_style;
    long long _skip_btn_right_style;
}

@property (nonatomic) unsigned long long max_draw_playtime;
@property (nonatomic) unsigned long long draw_rewarded_playtime;
@property (nonatomic) long long skip_btn_left_style;
@property (nonatomic) long long skip_btn_right_style;

- (void)setMax_draw_playtime:(unsigned long long)arg0;
- (unsigned long long)max_draw_playtime;
- (void)setDraw_rewarded_playtime:(unsigned long long)arg0;
- (unsigned long long)draw_rewarded_playtime;
- (void)setSkip_btn_left_style:(long long)arg0;
- (void)setSkip_btn_right_style:(long long)arg0;
- (long long)skip_btn_left_style;
- (long long)skip_btn_right_style;
- (id)initWithDictionary:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;

@end