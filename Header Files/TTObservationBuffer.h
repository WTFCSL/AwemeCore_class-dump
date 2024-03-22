//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface TTObservationBuffer : NSObject {
    unsigned long long _bufferSizeMax;
    NSMutableArray *_list;
}

@property (nonatomic) unsigned long long bufferSizeMax;
@property (retain, nonatomic) NSMutableArray *list;

- (unsigned long long)observationCheckByPercent:(id)arg0 percent:(float)arg1 rttGap:(long long)arg2 speedGap:(long long)arg3;
- (BOOL)isExistSameCheckResultType:(id)arg0;
- (void)addObservation:(id)arg0;
- (void)addObservationWithBuffer:(id)arg0;
- (id)getAverageObservation:(long long)arg0;
- (void)clearBuff;
- (void)setBufferSizeMax:(unsigned long long)arg0;
- (unsigned long long)bufferSizeMax;
- (id)getFirstObservation;
- (unsigned long long)getBufferRealSize;
- (BOOL)isFull;
- (void)setCapacity:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)list;
- (void)setList:(id)arg0;
- (id)initWithCapacity:(unsigned long long)arg0;
- (BOOL)isEmpty;

@end
