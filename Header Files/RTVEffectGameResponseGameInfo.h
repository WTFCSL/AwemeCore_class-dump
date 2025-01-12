//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface RTVEffectGameResponseGameInfo : JSONModel <RTVXRInteractionModelProtocol> {
    NSNumber *_gameIdentifier;
    NSString *_gameName;
    NSNumber *_gameRoomIdentifier;
    NSNumber *_fromUserIdentifier;
    NSNumber *_createAt;
    NSNumber *_expireTime;
}

@property (retain, nonatomic) NSNumber *gameIdentifier;
@property (copy, nonatomic) NSString *gameName;
@property (retain, nonatomic) NSNumber *gameRoomIdentifier;
@property (retain, nonatomic) NSNumber *fromUserIdentifier;
@property (retain, nonatomic) NSNumber *createAt;
@property (retain, nonatomic) NSNumber *expireTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)dynamicCast:(Class)arg0;
- (id)gameName;
- (void)setGameName:(id)arg0;
- (id)dynamicCastProtocol:(id)arg0;
- (id)createAt;
- (void)setCreateAt:(id)arg0;
- (id)gameIdentifier;
- (id)gameRoomIdentifier;
- (id)fromUserIdentifier;
- (void)setGameIdentifier:(id)arg0;
- (void)setGameRoomIdentifier:(id)arg0;
- (void)setFromUserIdentifier:(id)arg0;
- (unsigned long long)interactionType;
- (void).cxx_destruct;
- (id)expireTime;
- (void)setExpireTime:(id)arg0;
- (id)ownerUserID;

@end
