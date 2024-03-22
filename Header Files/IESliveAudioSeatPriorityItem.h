//
//     Generated by private class-dump
//

@interface IESliveAudioSeatPriorityItem : NSObject {
    BOOL _isActive;
    long long _priority;
    id /* block */ _startBlock;
    id /* block */ _endBlock;
}

@property (nonatomic) long long priority;
@property (nonatomic) BOOL isActive;
@property (copy, nonatomic) id /* block */ startBlock;
@property (copy, nonatomic) id /* block */ endBlock;

+ (id)itemWithPriority:(long long)arg0 startBlock:(id /* block */)arg1 endBlock:(id /* block */)arg2;

- (id /* block */)endBlock;
- (void)setEndBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (void)setPriority:(long long)arg0;
- (id /* block */)startBlock;
- (BOOL)isActive;
- (void)setStartBlock:(id /* block */)arg0;
- (long long)priority;

@end