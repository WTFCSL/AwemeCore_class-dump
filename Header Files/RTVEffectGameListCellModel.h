//
//     Generated by private class-dump
//

@class RTVEffectGameModel, NSString, NSArray;

@interface RTVEffectGameListCellModel : NSObject <RTVUICellModelDiffableInterface, RxPrimaryKey> {
    BOOL _ready;
    RTVEffectGameModel *_gameModel;
    NSString *_inKey;
    NSString *_title;
    NSString *_subtitle;
    NSArray *_iconURLStrings;
    unsigned long long _minPlayerCount;
    long long _status;
}

@property (readonly, nonatomic) RTVEffectGameModel *gameModel;
@property (readonly, copy, nonatomic) NSString *inKey;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSArray *iconURLStrings;
@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (readonly, nonatomic) unsigned long long minPlayerCount;
@property (readonly, nonatomic) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellModelWithGameModel:(id)arg0;

- (id)getInKey;
- (id)initWithGameModel:(id)arg0;
- (unsigned long long)minPlayerCount;
- (id)iconURLStrings;
- (id)inKey;
- (void).cxx_destruct;
- (long long)status;
- (BOOL)isReady;
- (id)title;
- (void)updateStatus:(long long)arg0;
- (id)subtitle;
- (id)gameModel;

@end
