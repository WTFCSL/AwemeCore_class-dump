//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPadLiveBookingConfig : MTLModel <MTLJSONSerializing> {
    NSString *_title;
    NSString *_subTitle;
    NSString *_coverUrl;
    NSString *_cardColor;
    long long _liveTime;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *cardColor;
@property (nonatomic) long long liveTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)liveTime;
- (void)setCoverUrl:(id)arg0;
- (id)coverUrl;
- (void)setLiveTime:(long long)arg0;
- (id)cardColor;
- (void)setCardColor:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setTitle:(id)arg0;

@end
