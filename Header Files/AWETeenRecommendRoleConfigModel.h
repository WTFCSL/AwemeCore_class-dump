//
//     Generated by private class-dump
//

@class NSString;

@interface AWETeenRecommendRoleConfigModel : MTLModel <MTLJSONSerializing> {
    NSString *_longPressPanelEntranceText;
    NSString *_longPressPanelBubbleText;
    NSString *_popupBackgroundImage;
    NSString *_firstRecommendTitle;
    NSString *_firstRecommendSubTitle;
}

@property (copy, nonatomic) NSString *longPressPanelEntranceText;
@property (copy, nonatomic) NSString *longPressPanelBubbleText;
@property (copy, nonatomic) NSString *popupBackgroundImage;
@property (copy, nonatomic) NSString *firstRecommendTitle;
@property (copy, nonatomic) NSString *firstRecommendSubTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)firstRecommendTitle;
- (id)firstRecommendSubTitle;
- (id)popupBackgroundImage;
- (id)longPressPanelEntranceText;
- (id)longPressPanelBubbleText;
- (void)setLongPressPanelEntranceText:(id)arg0;
- (void)setLongPressPanelBubbleText:(id)arg0;
- (void)setPopupBackgroundImage:(id)arg0;
- (void)setFirstRecommendTitle:(id)arg0;
- (void)setFirstRecommendSubTitle:(id)arg0;
- (void).cxx_destruct;

@end
