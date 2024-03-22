//
//     Generated by private class-dump
//

@class NSString;

@interface Diff : NSObject <NSCopying> {
    int operation;
    NSString *text;
}

@property (nonatomic) int operation;
@property (copy, nonatomic) NSString *text;

+ (id)diffWithOperation:(int)arg0 andText:(id)arg1;

- (id)initWithOperation:(int)arg0 andText:(id)arg1;
- (void)setOperation:(int)arg0;
- (int)operation;
- (void)setText:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (unsigned long long)hash;
- (id)text;
- (BOOL)isEqual:(id)arg0;
- (id)description;
- (void)dealloc;
- (BOOL)isEqualToDiff:(id)arg0;

@end