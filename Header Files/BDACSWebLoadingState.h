//
//     Generated by private class-dump
//

@interface BDACSWebLoadingState : NSObject <NSCopying> {
    BOOL _loading;
    unsigned long long _jumpNumber;
}

@property unsigned long long jumpNumber;
@property BOOL loading;

- (unsigned long long)jumpNumber;
- (void)setJumpNumber:(unsigned long long)arg0;
- (void)setLoading:(BOOL)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (BOOL)loading;

@end