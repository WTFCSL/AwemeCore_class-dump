//
//     Generated by private class-dump
//

@class AWEAdLongVideoDataModel;

@interface AWEAdLongVideoResponseModel : AWEBaseApiModel {
    AWEAdLongVideoDataModel *_data;
}

@property (retain, nonatomic) AWEAdLongVideoDataModel *data;

+ (id)dataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;

@end
