//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEBannerAdDataSponsorModel : MTLModel <MTLJSONSerializing> {
    NSString *_title;
    NSNumber *_showTime;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *showTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)showTime;
- (void)setShowTime:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:(id)arg0;

@end