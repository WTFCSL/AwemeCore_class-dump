//
//     Generated by private class-dump
//

@interface BDVMetaData : NSObject {
    BOOL _ignoreCurrentVisibleEvent;
    id _itemID;
    double _stayTime;
    double _visibleViewRate;
    double _displayTimeStart;
}

@property (weak, nonatomic) id itemID;
@property (nonatomic) double stayTime;
@property (nonatomic) double visibleViewRate;
@property (nonatomic) double displayTimeStart;
@property (nonatomic) BOOL ignoreCurrentVisibleEvent;

- (void)setStayTime:(double)arg0;
- (double)stayTime;
- (void)setDisplayTimeStart:(double)arg0;
- (double)displayTimeStart;
- (double)visibleViewRate;
- (void)setVisibleViewRate:(double)arg0;
- (BOOL)ignoreCurrentVisibleEvent;
- (void)setIgnoreCurrentVisibleEvent:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)itemID;
- (void)setItemID:(id)arg0;

@end
