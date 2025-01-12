//
//     Generated by private class-dump
//

@class IESLiveRevenueInteractBattleChooseButton, NSString, SpecifyGiftConfig, HTSLiveImage, IESLiveRevenueInteractBattleChooseBadge, CustomConfig, BattleSelfData;

@interface IESLiveRevenueInteractBattleChooseItem : NSObject {
    BOOL _isForbidden;
    BOOL _isSelfData;
    BOOL _exposed;
    NSString *_title;
    NSString *_subTitle;
    NSString *_subTitleSuffix;
    NSString *_tagText;
    IESLiveRevenueInteractBattleChooseBadge *_badge;
    IESLiveRevenueInteractBattleChooseButton *_button;
    long long _type;
    NSString *_forbiddenText;
    NSString *_descTagText;
    HTSLiveImage *_titleIconImage;
    NSString *_titleIconSchemaURL;
    long long _selfOptId;
    BattleSelfData *_selfData;
    SpecifyGiftConfig *_specifyGiftConfig;
    CustomConfig *_customConfigNew;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *subTitleSuffix;
@property (copy, nonatomic) NSString *tagText;
@property (retain, nonatomic) IESLiveRevenueInteractBattleChooseBadge *badge;
@property (retain, nonatomic) IESLiveRevenueInteractBattleChooseButton *button;
@property (nonatomic) long long type;
@property (nonatomic) BOOL isForbidden;
@property (copy, nonatomic) NSString *forbiddenText;
@property (copy, nonatomic) NSString *descTagText;
@property (retain, nonatomic) HTSLiveImage *titleIconImage;
@property (copy, nonatomic) NSString *titleIconSchemaURL;
@property (nonatomic) BOOL isSelfData;
@property (nonatomic) long long selfOptId;
@property (retain, nonatomic) BattleSelfData *selfData;
@property (nonatomic) BOOL exposed;
@property (retain, nonatomic) SpecifyGiftConfig *specifyGiftConfig;
@property (retain, nonatomic) CustomConfig *customConfigNew;

- (void)setTagText:(id)arg0;
- (id)tagText;
- (BOOL)isForbidden;
- (void)setIsForbidden:(BOOL)arg0;
- (id)selfData;
- (id)specifyGiftConfig;
- (id)descTagText;
- (BOOL)isSelfData;
- (long long)selfOptId;
- (id)forbiddenText;
- (void)setCustomConfigNew:(id)arg0;
- (void)setSpecifyGiftConfig:(id)arg0;
- (id)customConfigNew;
- (id)titleIconSchemaURL;
- (void)setForbiddenText:(id)arg0;
- (void)setSelfData:(id)arg0;
- (void)setIsSelfData:(BOOL)arg0;
- (void)setSelfOptId:(long long)arg0;
- (id)initWithBattlePanel:(id)arg0;
- (void)setTitleIconImage:(id)arg0;
- (void)setTitleIconSchemaURL:(id)arg0;
- (void)setDescTagText:(id)arg0;
- (void)setSubTitleSuffix:(id)arg0;
- (id)subTitleSuffix;
- (id)titleIconImage;
- (void)setExposed:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setBadge:(id)arg0;
- (id)button;
- (void)setButton:(id)arg0;
- (id)badge;
- (long long)type;
- (id)title;
- (void)setType:(long long)arg0;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setTitle:(id)arg0;
- (BOOL)exposed;

@end
