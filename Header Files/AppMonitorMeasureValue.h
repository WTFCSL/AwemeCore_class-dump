//
//     Generated by private class-dump
//

@class NSNumber;

@interface AppMonitorMeasureValue : NSObject {
    BOOL _isFinish;
    NSNumber *_offset;
    NSNumber *_value;
}

@property (nonatomic) BOOL isFinish;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) NSNumber *value;

- (BOOL)isFinish;
- (void)setIsFinish:(BOOL)arg0;
- (id)initWithValue:(id)arg0 offset:(id)arg1;
- (void)merge:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)value;
- (void)setOffset:(id)arg0;
- (id)initWithDictionary:(id)arg0;
- (id)jsonDict;
- (id)initWithValue:(id)arg0;
- (id)offset;
- (void)setValue:(id)arg0;

@end
