//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWEVCDLinkTextModel : AWEBaseApiModel {
    NSString *_text;
    AWEURLModel *_link;
}

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) AWEURLModel *link;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)linkJSONTransformer;

- (void)setLink:(id)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)text;
- (id)link;

@end
