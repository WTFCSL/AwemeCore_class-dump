//
//     Generated by private class-dump
//

@class NSString;
@protocol RTVVoipStorageAreaInterface;

@interface RTVVoipPublisherBeautyResourceService : NSObject <RTVVoipPublisherBeautyResourceServiceInterface> {
    id<RTVVoipStorageAreaInterface> _storageArea;
}

@property (retain, nonatomic) id<RTVVoipStorageAreaInterface> storageArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)storageArea;
- (BOOL)isBeautyFeatureAvailable;
- (id)cachedBeautyResourceURLStr;
- (id)downloadBeautyResourceIfNeeded;
- (id)beautySettingsDictionary;
- (id)beautyEffects;
- (id)beautyEffectsPromise;
- (id)loadBeautyEffects;
- (id)__checkNeedUpdate;
- (id)__cachedResp;
- (id)__downloadEffects:(id)arg0;
- (id)__cachedEffects;
- (void)setStorageArea:(id)arg0;
- (void).cxx_destruct;

@end
