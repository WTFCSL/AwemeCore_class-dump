//
//     Generated by private class-dump
//

@class NSHashTable;

@interface IESECPDPSliceUpdateContext : NSObject {
    NSHashTable *_viewList;
    long long _pdpTimes;
}

@property (retain, nonatomic) NSHashTable *viewList;
@property (nonatomic) long long pdpTimes;

+ (void)setNeedRelayout:(id)arg0;
+ (long long)enterProductDetail;
+ (BOOL)viewNeedRelayout:(id)arg0;
+ (void)removeNeedRelayout:(id)arg0;
+ (id)shareInstance;

- (long long)pdpTimes;
- (void)setPdpTimes:(long long)arg0;
- (void)setViewList:(id)arg0;
- (void).cxx_destruct;
- (id)viewList;

@end
