//
//     Generated by private class-dump
//

@class AWEURLModel;

@interface AWEVideoLabel : AWEBaseApiModel {
    long long _labelType;
    AWEURLModel *_labelUrl;
}

@property (nonatomic) long long labelType;
@property (retain, nonatomic) AWEURLModel *labelUrl;

+ (id)labelUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)labelUrl;
- (void)setLabelUrl:(id)arg0;
- (long long)labelType;
- (void).cxx_destruct;
- (void)setLabelType:(long long)arg0;

@end
