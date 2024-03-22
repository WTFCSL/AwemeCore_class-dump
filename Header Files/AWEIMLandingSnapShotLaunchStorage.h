//
//     Generated by private class-dump
//

@class NSArray, NSData;

@interface AWEIMLandingSnapShotLaunchStorage : NSObject {
    BOOL _isIMDylibLoaded;
    NSArray *_snapShotModelList;
    NSData *_snapShotData;
}

@property (retain, nonatomic) NSArray *snapShotModelList;
@property (retain, nonatomic) NSData *snapShotData;
@property (nonatomic) BOOL isIMDylibLoaded;

+ (id)storageKey:(id)arg0;
+ (id)shared;

- (BOOL)isIMDylibLoaded;
- (void)asyncPreloadChatSnapShotData;
- (id)p_getStoredData;
- (id)snapShotData;
- (id)snapShotModelList;
- (void)doTaskAfterIMDylibLoaded;
- (void)setSnapShotModelList:(id)arg0;
- (void)setSnapShotData:(id)arg0;
- (void)setIsIMDylibLoaded:(BOOL)arg0;
- (void).cxx_destruct;
- (void)clear;

@end
