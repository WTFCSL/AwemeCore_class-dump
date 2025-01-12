//
//     Generated by private class-dump
//

@class RTVEffectGameModel, NSDictionary, RTVInteractionInitialAction, NSString;

@interface RTVEffectGameContext : NSObject <RTVInteractionContext> {
    BOOL _isFromInteractionTypeChange;
    BOOL _isInitialGameUsed;
    RTVInteractionInitialAction *_initialAction;
    NSDictionary *_trackDict;
    long long _enterFrom;
    RTVEffectGameModel *_initialGameModel;
}

@property (readonly, nonatomic) long long enterFrom;
@property (readonly, nonatomic) BOOL isFromInteractionTypeChange;
@property (readonly, nonatomic) BOOL isInitialGameUsed;
@property (readonly, nonatomic) RTVEffectGameModel *initialGameModel;
@property (readonly, nonatomic) RTVInteractionInitialAction *initialAction;
@property (readonly, copy, nonatomic) NSDictionary *trackDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)enterFrom;
- (id)trackDict;
- (id)initWithEnterFrom:(long long)arg0 trackDict:(id)arg1;
- (void)updateInitialGameModel:(id)arg0;
- (void)updateIsFromInteractionTypeChange:(BOOL)arg0;
- (id)initialGameModel;
- (BOOL)isInitialGameUsed;
- (BOOL)isFromInteractionTypeChange;
- (void)updateIsInitialGameUsed:(BOOL)arg0;
- (void).cxx_destruct;
- (id)initialAction;

@end
