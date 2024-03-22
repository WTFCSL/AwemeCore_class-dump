//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface HMDAppVCPageViewRecord : NSObject {
    int _changedTimes;
    NSMutableDictionary *_pvInfo;
}

@property (retain, nonatomic) NSMutableDictionary *pvInfo;
@property (nonatomic) int changedTimes;

+ (id)shared;

- (void)reportLastPageViewInfoAsync;
- (void)recordPageViewForVCAsync:(id)arg0;
- (void)writePageViewInfoToFileAsync;
- (void)setPvInfo:(id)arg0;
- (void)setChangedTimes:(int)arg0;
- (id)getHistoryPageViewStatisticInfo;
- (id)pvInfo;
- (int)changedTimes;
- (id)init;
- (void).cxx_destruct;

@end