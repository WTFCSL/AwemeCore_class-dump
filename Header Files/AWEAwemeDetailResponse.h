//
//     Generated by private class-dump
//

@class AWEFilterDetail, AWEAwemeModel;

@interface AWEAwemeDetailResponse : AWEBaseApiModel {
    AWEAwemeModel *_awemeDetail;
    AWEFilterDetail *_filterDetail;
}

@property (retain, nonatomic) AWEAwemeModel *awemeDetail;
@property (retain, nonatomic) AWEFilterDetail *filterDetail;

+ (id)filterDetailJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)awemeDetail;
- (id)filterDetail;
- (void)setFilterDetail:(id)arg0;
- (void)setAwemeDetail:(id)arg0;
- (void).cxx_destruct;

@end