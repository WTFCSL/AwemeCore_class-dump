//
//     Generated by private class-dump
//

@class BDUGLuckyUrlReplaceRules, BDUGLuckyInjectRules;

@interface BDUGLuckyFeRules : BDUGLuckyJSONModel {
    BDUGLuckyInjectRules *_injectRules;
    BDUGLuckyUrlReplaceRules *_urlReplaceRules;
}

@property (retain, nonatomic) BDUGLuckyInjectRules *injectRules;
@property (retain, nonatomic) BDUGLuckyUrlReplaceRules *urlReplaceRules;

+ (id)modelCustomPropertyMapper;

- (id)injectRules;
- (id)urlReplaceRules;
- (void)setInjectRules:(id)arg0;
- (void)setUrlReplaceRules:(id)arg0;
- (void).cxx_destruct;

@end