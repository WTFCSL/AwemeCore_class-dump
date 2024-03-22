//
//     Generated by private class-dump
//

@class UIFont, NSArray, NSMutableDictionary, NSString, CECMomentTextAreaStringLengthLimit;

@interface CECMomentTextAreaFontStepIncreaseRule : NSObject <CECMomentTextAreaFontRule> {
    NSArray *_steps;
    NSArray *_fontSizes;
    UIFont *_font;
    CECMomentTextAreaStringLengthLimit *_lengthLimit;
    NSMutableDictionary *_fontCacheForSizeIndex;
}

@property (retain, nonatomic) NSArray *steps;
@property (retain, nonatomic) NSArray *fontSizes;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) CECMomentTextAreaStringLengthLimit *lengthLimit;
@property (retain, nonatomic) NSMutableDictionary *fontCacheForSizeIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)lengthLimit;
- (id)fontCacheForSizeIndex;
- (id)fontSizes;
- (id)fontFor:(id)arg0;
- (id)initWithSteps:(id)arg0 fontSizes:(id)arg1 font:(id)arg2;
- (void)setFontSizes:(id)arg0;
- (void)setLengthLimit:(id)arg0;
- (void)setFontCacheForSizeIndex:(id)arg0;
- (void).cxx_destruct;
- (id)font;
- (void)setSteps:(id)arg0;
- (void)setFont:(id)arg0;
- (id)steps;

@end