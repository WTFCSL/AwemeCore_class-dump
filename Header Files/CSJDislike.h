//
//     Generated by private class-dump
//

@class CSJNativeAd, NSArray, NSMutableArray;

@interface CSJDislike : NSObject {
    NSArray *_filterWords;
    CSJNativeAd *_nativeAd;
    NSMutableArray *_AllFilterWords;
}

@property (retain, nonatomic) CSJNativeAd *nativeAd;
@property (copy, nonatomic) NSArray *filterWords;
@property (retain, nonatomic) NSMutableArray *AllFilterWords;

- (id)AllFilterWords;
- (void)didSelectedFilterWordWithReason:(id)arg0;
- (void)setAllFilterWords:(id)arg0;
- (id)filterWords;
- (void)setNativeAd:(id)arg0;
- (id)nativeAd;
- (void)setFilterWords:(id)arg0;
- (id)initWithNativeAd:(id)arg0;
- (BOOL)isMemberOfClass:(Class)arg0;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:(Class)arg0;

@end
