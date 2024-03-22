//
//     Generated by private class-dump
//

@protocol CKDDData, CKDDDataChangeRecorder;

@interface CKDDDataIterator : NSObject {
    id<CKDDDataChangeRecorder> _recorder;
    id<CKDDData> _initialData;
    id<CKDDData> _data;
}

@property (retain, nonatomic) id<CKDDData> initialData;
@property (retain, nonatomic) id<CKDDDataChangeRecorder> recorder;
@property (retain, nonatomic) id<CKDDData> data;

- (id)initialData;
- (void)setInitialData:(id)arg0;
- (id)initWith:(id)arg0 recorder:(id)arg1;
- (id)data;
- (void).cxx_destruct;
- (id)recorder;
- (void)setData:(id)arg0;
- (void)next:(id /* block */)arg0;
- (void)setRecorder:(id)arg0;

@end