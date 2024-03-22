//
//     Generated by private class-dump
//

@class NSString, NSMutableSet;

@interface IESLiveAnchorGameFuncPanelGameingState : NSObject <IESLiveAnchorGameFuncPanelGameingStateRouter> {
    NSMutableSet *_gameingMutableSet;
    NSString *_isOpeningNativeAppSchema;
}

@property (retain, nonatomic) NSMutableSet *gameingMutableSet;
@property (copy, nonatomic) NSString *isOpeningNativeAppSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)insertIsGameingItemWithAppId:(id)arg0;
- (void)removeIsGameingItemWithAppId:(id)arg0;
- (void)recordIsOpeningNativeAppSchemaWithSchema:(id)arg0;
- (void)removeIsOpeningNativeAppSchema;
- (id)isGameingAppId;
- (id)isOpeningNativeAppSchema;
- (id)gameingMutableSet;
- (void)setIsOpeningNativeAppSchema:(id)arg0;
- (void)setGameingMutableSet:(id)arg0;
- (void).cxx_destruct;

@end
