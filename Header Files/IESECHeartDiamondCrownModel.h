//
//     Generated by private class-dump
//

@class NSString, IESECURLModel;

@interface IESECHeartDiamondCrownModel : MTLModel <MTLJSONSerializing> {
    IESECURLModel *_titleIcon;
    IESECURLModel *_liveTitleIcon;
    IESECURLModel *_baseIcon;
    IESECURLModel *_unlightedIcon;
    IESECURLModel *_liveUnlightedIcon;
    long long _baseIconNumber;
    long long _level;
    NSString *_text;
    NSString *_textColor;
    NSString *_liveTextColor;
}

@property (retain, nonatomic) IESECURLModel *titleIcon;
@property (retain, nonatomic) IESECURLModel *liveTitleIcon;
@property (retain, nonatomic) IESECURLModel *baseIcon;
@property (retain, nonatomic) IESECURLModel *unlightedIcon;
@property (retain, nonatomic) IESECURLModel *liveUnlightedIcon;
@property (nonatomic) long long baseIconNumber;
@property (nonatomic) long long level;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *liveTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)liveTitleIcon;
- (void)setLiveTitleIcon:(id)arg0;
- (id)unlightedIcon;
- (void)setUnlightedIcon:(id)arg0;
- (id)liveUnlightedIcon;
- (void)setLiveUnlightedIcon:(id)arg0;
- (long long)baseIconNumber;
- (void)setBaseIconNumber:(long long)arg0;
- (id)liveTextColor;
- (void)setLiveTextColor:(id)arg0;
- (void)setLevel:(long long)arg0;
- (long long)level;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)text;
- (void)setTextColor:(id)arg0;
- (id)textColor;
- (void)setBaseIcon:(id)arg0;
- (id)titleIcon;
- (void)setTitleIcon:(id)arg0;
- (id)baseIcon;

@end
