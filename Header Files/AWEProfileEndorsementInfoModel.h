//
//     Generated by private class-dump
//

@class NSString, AWEProfileEndorsementSubtitleInfo;

@interface AWEProfileEndorsementInfoModel : MTLModel <MTLJSONSerializing> {
    unsigned long long _type;
    NSString *_title;
    NSString *_action;
    NSString *_darkImageUrl;
    NSString *_lightImageUrl;
    NSString *_trackerLinkType;
    unsigned long long _lineBreakType;
    AWEProfileEndorsementSubtitleInfo *_subtitle;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *darkImageUrl;
@property (copy, nonatomic) NSString *lightImageUrl;
@property (copy, nonatomic) NSString *trackerLinkType;
@property (nonatomic) unsigned long long lineBreakType;
@property (copy, nonatomic) AWEProfileEndorsementSubtitleInfo *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subtitleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setDarkImageUrl:(id)arg0;
- (id)darkImageUrl;
- (id)trackerLinkType;
- (void)setTrackerLinkType:(id)arg0;
- (id)lightImageUrl;
- (void)setLightImageUrl:(id)arg0;
- (unsigned long long)lineBreakType;
- (void)setLineBreakType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)title;
- (void)setType:(unsigned long long)arg0;
- (void)setAction:(id)arg0;
- (id)action;
- (id)subtitle;
- (void)setSubtitle:(id)arg0;
- (void)setTitle:(id)arg0;

@end
