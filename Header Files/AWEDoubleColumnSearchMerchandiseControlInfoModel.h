//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDoubleColumnSearchMerchandiseControlInfoModel : MTLModel <MTLJSONSerializing> {
    BOOL _hideUserWindowBottomLine;
    BOOL _hasLynxLongPressAbility;
    NSString *_jumpDestination;
    NSString *_outPlayType;
    NSString *_replayVideoStartTime;
}

@property (nonatomic) BOOL hideUserWindowBottomLine;
@property (nonatomic) BOOL hasLynxLongPressAbility;
@property (copy, nonatomic) NSString *jumpDestination;
@property (copy, nonatomic) NSString *outPlayType;
@property (copy, nonatomic) NSString *replayVideoStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)hideUserWindowBottomLine;
- (void)setHideUserWindowBottomLine:(BOOL)arg0;
- (BOOL)hasLynxLongPressAbility;
- (void)setHasLynxLongPressAbility:(BOOL)arg0;
- (id)jumpDestination;
- (void)setJumpDestination:(id)arg0;
- (id)outPlayType;
- (void)setOutPlayType:(id)arg0;
- (id)replayVideoStartTime;
- (void)setReplayVideoStartTime:(id)arg0;
- (void).cxx_destruct;

@end