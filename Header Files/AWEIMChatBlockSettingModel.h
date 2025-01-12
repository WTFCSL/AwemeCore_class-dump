//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEIMChatBlockSettingModel : AWEBaseApiModel {
    BOOL _blockSwitch;
    long long _blockStartTimestamp;
    long long _blockDuration;
    NSArray *_availableBlockDurationList;
    NSArray *_selectedSmartBlockList;
    long long _smartBlockSwitch;
    NSArray *_availableSmartBlockList;
    NSArray *_selfDefinedBlockWordList;
}

@property (nonatomic) BOOL blockSwitch;
@property (nonatomic) long long blockStartTimestamp;
@property (nonatomic) long long blockDuration;
@property (retain, nonatomic) NSArray *availableBlockDurationList;
@property (retain, nonatomic) NSArray *selectedSmartBlockList;
@property (nonatomic) long long smartBlockSwitch;
@property (retain, nonatomic) NSArray *availableSmartBlockList;
@property (retain, nonatomic) NSArray *selfDefinedBlockWordList;

+ (id)availableSmartBlockListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)blockDuration;
- (void)setBlockDuration:(long long)arg0;
- (id)selfDefinedBlockWordList;
- (void)setSelfDefinedBlockWordList:(id)arg0;
- (BOOL)blockSwitch;
- (void)setBlockSwitch:(BOOL)arg0;
- (id)availableBlockDurationList;
- (long long)smartBlockSwitch;
- (void)setSmartBlockSwitch:(long long)arg0;
- (long long)blockStartTimestamp;
- (void)setBlockStartTimestamp:(long long)arg0;
- (void)setAvailableBlockDurationList:(id)arg0;
- (id)selectedSmartBlockList;
- (void)setSelectedSmartBlockList:(id)arg0;
- (id)availableSmartBlockList;
- (void)setAvailableSmartBlockList:(id)arg0;
- (void).cxx_destruct;

@end
