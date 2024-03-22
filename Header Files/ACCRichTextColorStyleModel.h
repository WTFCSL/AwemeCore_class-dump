//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface ACCRichTextColorStyleModel : NSObject {
    BOOL _isNeedHideImg;
    long long _toolBarStyle;
    NSString *_textColor;
    NSString *_backgroundColor;
    NSString *_bgColorName;
    NSString *_effectBgIdentifier;
    NSString *_effectBgFilePath;
    NSArray *_needHideScene;
}

@property (nonatomic) long long toolBarStyle;
@property (retain, nonatomic) NSString *textColor;
@property (retain, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) NSString *bgColorName;
@property (retain, nonatomic) NSString *effectBgIdentifier;
@property (retain, nonatomic) NSString *effectBgFilePath;
@property (nonatomic) BOOL isNeedHideImg;
@property (copy, nonatomic) NSArray *needHideScene;

- (long long)toolBarStyle;
- (void)setToolBarStyle:(long long)arg0;
- (id)bgColorName;
- (void)setBgColorName:(id)arg0;
- (id)effectBgIdentifier;
- (void)setEffectBgIdentifier:(id)arg0;
- (id)effectBgFilePath;
- (void)setEffectBgFilePath:(id)arg0;
- (BOOL)isNeedHideImg;
- (void)setIsNeedHideImg:(BOOL)arg0;
- (id)needHideScene;
- (void)setNeedHideScene:(id)arg0;
- (void).cxx_destruct;
- (id)backgroundColor;
- (void)setTextColor:(id)arg0;
- (void)setBackgroundColor:(id)arg0;
- (id)textColor;

@end