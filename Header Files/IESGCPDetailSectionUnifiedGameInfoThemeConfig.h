//
//     Generated by private class-dump
//

@class UIColor;

@interface IESGCPDetailSectionUnifiedGameInfoThemeConfig : NSObject {
    UIColor *_gameIconBgColor;
    UIColor *_gameIconBorderColor;
    UIColor *_gameNameColor;
    UIColor *_tagListItemBgColor;
    UIColor *_tagListItemTextColor;
    UIColor *_tagListItemArrowColor;
    UIColor *_descriptionLabelTextColor;
    UIColor *_ratingTextColor;
    UIColor *_commentCountTextColor;
    UIColor *_ratingDisableTextColor;
}

@property (retain, nonatomic) UIColor *gameIconBgColor;
@property (retain, nonatomic) UIColor *gameIconBorderColor;
@property (retain, nonatomic) UIColor *gameNameColor;
@property (retain, nonatomic) UIColor *tagListItemBgColor;
@property (retain, nonatomic) UIColor *tagListItemTextColor;
@property (retain, nonatomic) UIColor *tagListItemArrowColor;
@property (retain, nonatomic) UIColor *descriptionLabelTextColor;
@property (retain, nonatomic) UIColor *ratingTextColor;
@property (retain, nonatomic) UIColor *commentCountTextColor;
@property (retain, nonatomic) UIColor *ratingDisableTextColor;

+ (id)detailDarkStyleConfig;
+ (id)detailLightStyleConfig;
+ (id)gameInfoThemeConfigFrom:(id)arg0;

- (void)setGameNameColor:(id)arg0;
- (void)setTagListItemBgColor:(id)arg0;
- (void)setTagListItemTextColor:(id)arg0;
- (void)setDescriptionLabelTextColor:(id)arg0;
- (void)setRatingTextColor:(id)arg0;
- (void)setCommentCountTextColor:(id)arg0;
- (id)gameNameColor;
- (id)tagListItemBgColor;
- (id)tagListItemTextColor;
- (id)descriptionLabelTextColor;
- (id)ratingTextColor;
- (id)commentCountTextColor;
- (void)setGameIconBgColor:(id)arg0;
- (void)setGameIconBorderColor:(id)arg0;
- (void)setTagListItemArrowColor:(id)arg0;
- (id)gameIconBgColor;
- (id)gameIconBorderColor;
- (id)tagListItemArrowColor;
- (void)setRatingDisableTextColor:(id)arg0;
- (id)ratingDisableTextColor;
- (void).cxx_destruct;

@end
