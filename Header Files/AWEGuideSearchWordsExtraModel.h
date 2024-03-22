//
//     Generated by private class-dump
//

@class NSString;

@interface AWEGuideSearchWordsExtraModel : AWEBaseApiModel {
    NSString *_type;
    NSString *_hintText;
    unsigned long long _guideSearchWordsType;
    NSString *_maskType;
    NSString *_imprExtra;
}

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *hintText;
@property (nonatomic) unsigned long long guideSearchWordsType;
@property (copy, nonatomic) NSString *maskType;
@property (copy, nonatomic) NSString *imprExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (id)hintText;
- (unsigned long long)guideSearchWordsType;
- (void)setGuideSearchWordsType:(unsigned long long)arg0;
- (id)imprExtra;
- (void)setImprExtra:(id)arg0;
- (void).cxx_destruct;
- (id)type;
- (void)setType:(id)arg0;
- (id)maskType;
- (void)setMaskType:(id)arg0;
- (void)setHintText:(id)arg0;

@end
