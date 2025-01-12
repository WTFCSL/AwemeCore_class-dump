//
//     Generated by private class-dump
//

@interface YYTextPosition : UITextPosition <NSCopying> {
    long long _offset;
    long long _affinity;
}

@property (readonly, nonatomic) long long offset;
@property (readonly, nonatomic) long long affinity;

+ (id)positionWithOffset:(long long)arg0 affinity:(long long)arg1;
+ (id)positionWithOffset:(long long)arg0;

- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (long long)compare:(id)arg0;
- (long long)affinity;
- (long long)offset;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;
- (id)description;

@end
