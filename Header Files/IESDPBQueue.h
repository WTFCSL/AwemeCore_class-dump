//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface IESDPBQueue : NSObject {
    NSMutableArray *_array;
    long long _headIndex;
}

@property (retain, nonatomic) NSMutableArray *array;
@property (nonatomic) long long headIndex;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) BOOL empty;
@property (readonly, nonatomic) id peekHead;

- (id)peekHead;
- (BOOL)empty;
- (id)array;
- (id)init;
- (void).cxx_destruct;
- (id)dequeue;
- (unsigned long long)count;
- (void)enqueue:(id)arg0;
- (void)setArray:(id)arg0;
- (id)description;
- (long long)headIndex;
- (void)setHeadIndex:(long long)arg0;

@end