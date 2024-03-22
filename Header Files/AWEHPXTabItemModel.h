//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEHPXTabItemModel : MTLModel <MTLJSONSerializing> {
    NSString *_tabType;
    NSString *_tabID;
    NSString *_tabTitle;
    NSString *_enterFrom;
    NSString *_channelSchema;
    NSString *_slideDownBarColor;
    NSNumber *_fullScreenShowBackground;
}

@property (copy, nonatomic) NSString *tabType;
@property (copy, nonatomic) NSString *tabID;
@property (copy, nonatomic) NSString *tabTitle;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *channelSchema;
@property (copy, nonatomic) NSString *slideDownBarColor;
@property (copy, nonatomic) NSNumber *fullScreenShowBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)tabType;
- (void)setChannelSchema:(id)arg0;
- (id)channelSchema;
- (void)setTabID:(id)arg0;
- (void)setTabType:(id)arg0;
- (id)slideDownBarColor;
- (id)fullScreenShowBackground;
- (void)setFullScreenShowBackground:(id)arg0;
- (void)setSlideDownBarColor:(id)arg0;
- (id)tabTitle;
- (void).cxx_destruct;
- (id)tabID;
- (void)setTabTitle:(id)arg0;

@end