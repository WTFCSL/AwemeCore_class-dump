//
//     Generated by private class-dump
//

@interface BUCacheAction : NSObject {
    unsigned long long _actionType;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

@property (nonatomic) unsigned long long actionType;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)initWithActionType:(unsigned long long)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (void)setActionType:(unsigned long long)arg0;
- (unsigned long long)actionType;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;
- (id)description;

@end
