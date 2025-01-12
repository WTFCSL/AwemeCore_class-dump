//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface RTVEffectGameReconnectResult : JSONModel {
    BOOL _success;
    NSString *_result;
    NSNumber *_state;
    NSNumber *_role;
    NSNumber *_master;
}

@property (nonatomic) BOOL success;
@property (copy, nonatomic) NSString *result;
@property (retain, nonatomic) NSNumber *state;
@property (retain, nonatomic) NSNumber *role;
@property (retain, nonatomic) NSNumber *master;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (void)setResult:(id)arg0;
- (void).cxx_destruct;
- (id)state;
- (void)setState:(id)arg0;
- (id)result;
- (void)setRole:(id)arg0;
- (id)role;
- (BOOL)success;
- (void)setSuccess:(BOOL)arg0;
- (id)master;
- (void)setMaster:(id)arg0;

@end
