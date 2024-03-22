//
//     Generated by private class-dump
//

@interface TIMXRange : NSObject {
    unsigned long long _left;
    unsigned long long _right;
}

@property (nonatomic) unsigned long long left;
@property (nonatomic) unsigned long long right;

+ (id)rangeWithLeft:(unsigned long long)arg0 right:(unsigned long long)arg1;

- (unsigned long long)left;
- (unsigned long long)right;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;
- (id)initWithLeft:(unsigned long long)arg0 right:(unsigned long long)arg1;
- (void)setLeft:(unsigned long long)arg0;
- (void)setRight:(unsigned long long)arg0;

@end