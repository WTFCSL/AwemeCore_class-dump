//
//     Generated by private class-dump
//

@class NSArray;
@protocol CJPayPrefetchRequestModel;

@interface CJPayPrefetchConfig : JSONModel {
    NSArray<CJPayPrefetchRequestModel> *_prefetchDatas;
}

@property (copy, nonatomic) NSArray<CJPayPrefetchRequestModel> *prefetchDatas;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)getRequestModelByUrl:(id)arg0;
- (id)prefetchDatas;
- (void)setPrefetchDatas:(id)arg0;
- (void).cxx_destruct;

@end
