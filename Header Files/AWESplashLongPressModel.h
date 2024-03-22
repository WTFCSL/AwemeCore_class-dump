//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWESplashLongPressModel : MTLModel <MTLJSONSerializing> {
    NSString *_title;
    NSDictionary *_guideIcon;
    long long _disableFullScreenPress;
    NSString *_progressColor;
    long long _duration;
    long long _longClickPeriod;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *guideIcon;
@property (nonatomic) long long disableFullScreenPress;
@property (copy, nonatomic) NSString *progressColor;
@property (nonatomic) long long duration;
@property (nonatomic) long long longClickPeriod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setGuideIcon:(id)arg0;
- (id)guideIcon;
- (long long)disableFullScreenPress;
- (void)setDisableFullScreenPress:(long long)arg0;
- (long long)longClickPeriod;
- (void)setLongClickPeriod:(long long)arg0;
- (void).cxx_destruct;
- (long long)duration;
- (id)title;
- (void)setTitle:(id)arg0;
- (void)setDuration:(long long)arg0;
- (id)progressColor;
- (void)setProgressColor:(id)arg0;

@end