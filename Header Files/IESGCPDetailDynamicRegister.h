//
//     Generated by private class-dump
//

@class IESGCPDetailDataSourceFilter;

@interface IESGCPDetailDynamicRegister : NSObject {
    IESGCPDetailDataSourceFilter *_filter;
}

@property (retain, nonatomic) IESGCPDetailDataSourceFilter *filter;

+ (void)registerLayoutElementClass:(id)arg0 viewControlClass:(Class)arg1 coverOriginal:(BOOL)arg2;
+ (id)keyWithLayoutElementClass:(id)arg0;

- (id)viewControlWithLayoutElementClass:(id)arg0;
- (void)setFilter:(id)arg0;
- (id)init;
- (id)filter;
- (void).cxx_destruct;

@end