//
//     Generated by private class-dump
//

@interface Smooth : NSObject {
    long long _mean;
    long long _m2;
    long long _count;
}

@property (nonatomic) long long mean;
@property (nonatomic) long long m2;
@property (nonatomic) long long count;
@property (readonly, nonatomic) float smooth;

- (float)smooth;
- (long long)m2;
- (void)update:(long long)arg0;
- (void)setCount:(long long)arg0;
- (id)init;
- (long long)count;
- (void)reset;
- (long long)mean;
- (void)setMean:(long long)arg0;
- (void)setM2:(long long)arg0;

@end