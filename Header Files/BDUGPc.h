//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface BDUGPc : NSObject <NSCopying> {
    NSMutableArray *diffs;
    unsigned long long start1;
    unsigned long long start2;
    unsigned long long length1;
    unsigned long long length2;
}

@property (retain, nonatomic) NSMutableArray *diffs;
@property (nonatomic) unsigned long long start1;
@property (nonatomic) unsigned long long start2;
@property (nonatomic) unsigned long long length1;
@property (nonatomic) unsigned long long length2;

- (unsigned long long)start1;
- (void)setStart1:(unsigned long long)arg0;
- (unsigned long long)start2;
- (void)setStart2:(unsigned long long)arg0;
- (unsigned long long)length1;
- (void)setLength1:(unsigned long long)arg0;
- (unsigned long long)length2;
- (void)setLength2:(unsigned long long)arg0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)description;
- (void)dealloc;
- (id)diffs;
- (void)setDiffs:(id)arg0;

@end
