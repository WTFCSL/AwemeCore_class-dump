//
//     Generated by private class-dump
//

@class NSString;

@interface UploadRange : NSObject {
    NSString *_rangeId;
    long long _startRange;
    long long _endRange;
    long long _state;
    UploadRange *_next;
}

@property (copy) NSString *rangeId;
@property long long startRange;
@property long long endRange;
@property long long state;
@property (weak) UploadRange *next;

- (id)initWithRange:(long long)arg0 end:(long long)arg1;
- (void)setRangeId:(id)arg0;
- (id)rangeId;
- (id)next;
- (void)setNext:(id)arg0;
- (void).cxx_destruct;
- (long long)state;
- (void)setState:(long long)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)dealloc;
- (long long)startRange;
- (void)setStartRange:(long long)arg0;
- (long long)endRange;
- (void)setEndRange:(long long)arg0;

@end
