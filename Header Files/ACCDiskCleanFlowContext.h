//
//     Generated by private class-dump
//

@protocol ACCDiskCleanStrategyProtocol;

@interface ACCDiskCleanFlowContext : NSObject {
    id<ACCDiskCleanStrategyProtocol> _strategy;
    long long _cleanCount;
    long long _failCount;
    unsigned long long _cleanSize;
    unsigned long long _sizeBefore;
}

@property (weak, nonatomic) id<ACCDiskCleanStrategyProtocol> strategy;
@property (nonatomic) long long cleanCount;
@property (nonatomic) long long failCount;
@property (nonatomic) unsigned long long cleanSize;
@property (nonatomic) unsigned long long sizeBefore;

- (unsigned long long)cleanSize;
- (void)setCleanSize:(unsigned long long)arg0;
- (long long)failCount;
- (void)setFailCount:(long long)arg0;
- (long long)cleanCount;
- (void)setCleanCount:(long long)arg0;
- (unsigned long long)sizeBefore;
- (void)setSizeBefore:(unsigned long long)arg0;
- (id)strategy;
- (void).cxx_destruct;
- (void)setStrategy:(id)arg0;

@end