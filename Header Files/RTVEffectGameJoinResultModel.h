//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface RTVEffectGameJoinResultModel : JSONModel {
    NSString *_modelIdentifier;
    NSString *_resultReason;
    NSNumber *_roomIdentifier;
    NSNumber *_master;
    NSNumber *_result;
    NSNumber *_state;
    NSNumber *_role;
    NSNumber *_roleIdentifier;
}

@property (copy, nonatomic) NSString *modelIdentifier;
@property (copy, nonatomic) NSString *resultReason;
@property (retain, nonatomic) NSNumber *roomIdentifier;
@property (retain, nonatomic) NSNumber *master;
@property (retain, nonatomic) NSNumber *result;
@property (retain, nonatomic) NSNumber *state;
@property (retain, nonatomic) NSNumber *role;
@property (retain, nonatomic) NSNumber *roleIdentifier;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)resultReason;
- (BOOL)isWatcher;
- (void)setResultReason:(id)arg0;
- (id)modelIdentifier;
- (void)setResult:(id)arg0;
- (void).cxx_destruct;
- (id)state;
- (void)setState:(id)arg0;
- (id)result;
- (void)setRole:(id)arg0;
- (id)role;
- (id)master;
- (void)setModelIdentifier:(id)arg0;
- (void)setMaster:(id)arg0;
- (id)roomIdentifier;
- (void)setRoomIdentifier:(id)arg0;
- (id)roleIdentifier;
- (void)setRoleIdentifier:(id)arg0;

@end