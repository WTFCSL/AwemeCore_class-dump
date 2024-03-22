//
//     Generated by private class-dump
//

@class NSString, AWELVideoSideBarGuideCoverText, AWEURLModel;

@interface AWELVideoSideBarGuideModel : MTLModel <MTLJSONSerializing> {
    BOOL _needGuide;
    AWEURLModel *_guideCoverImage;
    AWELVideoSideBarGuideCoverText *_guideCoverText;
    long long _showStartTime;
    long long _showIntervalDuration;
    long long _maxShowNum;
}

@property (nonatomic) BOOL needGuide;
@property (retain, nonatomic) AWEURLModel *guideCoverImage;
@property (retain, nonatomic) AWELVideoSideBarGuideCoverText *guideCoverText;
@property (nonatomic) long long showStartTime;
@property (nonatomic) long long showIntervalDuration;
@property (nonatomic) long long maxShowNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)guideCoverImageJSONTransformer;
+ (id)guideCoverTextJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)showStartTime;
- (void)setShowStartTime:(long long)arg0;
- (BOOL)needGuide;
- (void)setNeedGuide:(BOOL)arg0;
- (id)guideCoverImage;
- (void)setGuideCoverImage:(id)arg0;
- (id)guideCoverText;
- (void)setGuideCoverText:(id)arg0;
- (long long)showIntervalDuration;
- (void)setShowIntervalDuration:(long long)arg0;
- (long long)maxShowNum;
- (void)setMaxShowNum:(long long)arg0;
- (void).cxx_destruct;

@end