//
//     Generated by private class-dump
//

@interface AWEThreeTuple : AWETuple

@property (readonly, nonatomic) id first;
@property (readonly, nonatomic) id second;
@property (readonly, nonatomic) id third;

+ (id)pack:(id)arg0 :(id)arg1 :(id)arg2;

- (id)initWithBackingArray:(id)arg0;
- (id)tupleByAddingObject:(id)arg0;
- (id)init;
- (BOOL)isEqual:(id)arg0;

@end
