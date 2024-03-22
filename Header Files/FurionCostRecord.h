//
//     Generated by private class-dump
//

@interface FurionCostRecord : NSObject {
    long long _begin;
    long long _end;
}

@property (nonatomic) long long begin;
@property (nonatomic) long long end;
@property (readonly, nonatomic) long long cost;

- (void)recordEnd;
- (void)recordBegin;
- (void)setEnd:(long long)arg0;
- (long long)end;
- (long long)begin;
- (id)init;
- (void)resetData;
- (long long)cost;
- (BOOL)invalid;
- (void)setBegin:(long long)arg0;

@end