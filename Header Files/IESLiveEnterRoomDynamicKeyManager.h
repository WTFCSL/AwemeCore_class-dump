//
//     Generated by private class-dump
//

@class NSMutableSet;

@interface IESLiveEnterRoomDynamicKeyManager : NSObject {
    NSMutableSet *_dynamicKeys;
}

@property (retain, nonatomic) NSMutableSet *dynamicKeys;

+ (id)sharedManager;

- (void)addDynamicEventParam:(id)arg0;
- (BOOL)checkIsEventDynamicKey:(id)arg0;
- (void)setDynamicKeys:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)dynamicKeys;

@end
