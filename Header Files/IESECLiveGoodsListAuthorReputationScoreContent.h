//
//     Generated by private class-dump
//

@class NSString, IESECLiveImageURLModel;

@interface IESECLiveGoodsListAuthorReputationScoreContent : MTLModel <MTLJSONSerializing> {
    BOOL _bold;
    IESECLiveImageURLModel *_bgImage;
    long long _fontSize;
    NSString *_text;
    NSString *_textColor;
    long long _leftSpace;
}

@property (retain, nonatomic) IESECLiveImageURLModel *bgImage;
@property (nonatomic) long long fontSize;
@property (nonatomic) BOOL bold;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) long long leftSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)leftSpace;
- (void)setLeftSpace:(long long)arg0;
- (void).cxx_destruct;
- (void)setFontSize:(long long)arg0;
- (void)setText:(id)arg0;
- (long long)fontSize;
- (id)text;
- (void)setTextColor:(id)arg0;
- (id)textColor;
- (void)setBold:(BOOL)arg0;
- (BOOL)bold;
- (void)setBgImage:(id)arg0;
- (id)bgImage;

@end
