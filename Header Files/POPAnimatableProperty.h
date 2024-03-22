//
//     Generated by private class-dump
//

@class NSString;

@interface POPAnimatableProperty : NSObject <NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) id /* block */ readBlock;
@property (readonly, copy, nonatomic) id /* block */ writeBlock;
@property (readonly, nonatomic) double threshold;

+ (id)propertyWithName:(id)arg0 initializer:(id /* block */)arg1;
+ (id)propertyWithName:(id)arg0;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;

@end
