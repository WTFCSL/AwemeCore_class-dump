//
//     Generated by private class-dump
//

@class NSNumber, NSString, NSArray;

@interface AWEHPXTabModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_onceLandingVersion;
    NSString *_onceLandingChannel;
    NSNumber *_landingPopoverVersion;
    NSString *_landingPopoverText;
    NSString *_landingPopoverChannel;
    NSArray *_tabList;
}

@property (copy, nonatomic) NSNumber *onceLandingVersion;
@property (copy, nonatomic) NSString *onceLandingChannel;
@property (copy, nonatomic) NSNumber *landingPopoverVersion;
@property (copy, nonatomic) NSString *landingPopoverText;
@property (copy, nonatomic) NSString *landingPopoverChannel;
@property (retain, nonatomic) NSArray *tabList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tabListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)tabList;
- (void)setTabList:(id)arg0;
- (id)landingPopoverVersion;
- (id)landingPopoverText;
- (id)landingPopoverChannel;
- (id)onceLandingVersion;
- (id)onceLandingChannel;
- (void)setLandingPopoverVersion:(id)arg0;
- (void)setLandingPopoverText:(id)arg0;
- (void)setLandingPopoverChannel:(id)arg0;
- (void)setOnceLandingVersion:(id)arg0;
- (void)setOnceLandingChannel:(id)arg0;
- (void).cxx_destruct;

@end