//
//     Generated by private class-dump
//

@class CXCallObserver, NSString;
@protocol CJPayFeatureRecord;

@interface CJPayCallFeatureCollector : NSObject <CXCallObserverDelegate, CJPayFeatureCollector> {
    BOOL _isCalling;
    id<CJPayFeatureRecord> recordManager;
    CXCallObserver *_callObserver;
}

@property (retain, nonatomic) CXCallObserver *callObserver;
@property (nonatomic) BOOL isCalling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)recordManager;
- (void)setRecordManager:(id)arg0;
- (void)setIsCalling:(BOOL)arg0;
- (BOOL)isCalling;
- (void)beginCollect;
- (void)endCollect;
- (id)buildDeviceParams;
- (void)callObserver:(id)arg0 callChanged:(id)arg1;
- (id)callObserver;
- (id)init;
- (void).cxx_destruct;
- (void)setCallObserver:(id)arg0;

@end
