//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface RTVEffectGameJoinModel : JSONModel {
    NSString *_modelIdentifier;
    NSNumber *_roomIdentifier;
    NSNumber *_master;
    NSString *_userIdentifier;
    NSString *_userName;
    NSString *_avatarURLString;
}

@property (copy, nonatomic) NSString *modelIdentifier;
@property (retain, nonatomic) NSNumber *roomIdentifier;
@property (retain, nonatomic) NSNumber *master;
@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *avatarURLString;

+ (id)keyMapper;
+ (id)modelWithModelIdentifier:(id)arg0 roomIdentifier:(id)arg1 userIdentifier:(id)arg2 userName:(id)arg3 master:(id)arg4 avatarURLString:(id)arg5;

- (id)avatarURLString;
- (void)setAvatarURLString:(id)arg0;
- (id)initWithModelIdentifier:(id)arg0 roomIdentifier:(id)arg1 userIdentifier:(id)arg2 userName:(id)arg3 master:(id)arg4 avatarURLString:(id)arg5;
- (id)modelIdentifier;
- (id)userName;
- (void).cxx_destruct;
- (id)userIdentifier;
- (void)setUserName:(id)arg0;
- (id)master;
- (void)setUserIdentifier:(id)arg0;
- (void)setModelIdentifier:(id)arg0;
- (void)setMaster:(id)arg0;
- (id)roomIdentifier;
- (void)setRoomIdentifier:(id)arg0;

@end
