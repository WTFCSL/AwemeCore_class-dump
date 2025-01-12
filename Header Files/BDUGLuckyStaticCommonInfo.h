//
//     Generated by private class-dump
//

@class BDUGLuckyGlobalGecko, BDUGLuckyCooling, BDUGLuckyCancelData, NSArray, BDUGLuckyShakeData, BDUGLuckyDomain, NSDictionary, BDUGLuckyPreCongfig, BDUGLuckyNotificationConfig, BDUGLuckyFeRules, BDUGLuckyLowUpdate;
@protocol BDUGLuckySceneTimeInfo;

@interface BDUGLuckyStaticCommonInfo : BDUGLuckyJSONModel {
    BDUGLuckyShakeData *_shakeData;
    BDUGLuckyCancelData *_cancelData;
    BDUGLuckyLowUpdate *_lowUpdate;
    BDUGLuckyGlobalGecko *_gecko;
    BDUGLuckyDomain *_domain;
    BDUGLuckyFeRules *_feRules;
    NSDictionary *_pageDependency;
    NSArray<BDUGLuckySceneTimeInfo> *_sceneTimeInfos;
    BDUGLuckyCooling *_cooling;
    BDUGLuckyNotificationConfig *_notificationConfig;
    BDUGLuckyPreCongfig *_preConfig;
    NSDictionary *_extra;
}

@property (retain, nonatomic) BDUGLuckyShakeData *shakeData;
@property (retain, nonatomic) BDUGLuckyCancelData *cancelData;
@property (retain, nonatomic) BDUGLuckyLowUpdate *lowUpdate;
@property (retain, nonatomic) BDUGLuckyGlobalGecko *gecko;
@property (retain, nonatomic) BDUGLuckyDomain *domain;
@property (retain, nonatomic) BDUGLuckyFeRules *feRules;
@property (copy, nonatomic) NSDictionary *pageDependency;
@property (copy, nonatomic) NSArray<BDUGLuckySceneTimeInfo> *sceneTimeInfos;
@property (retain, nonatomic) BDUGLuckyCooling *cooling;
@property (retain, nonatomic) BDUGLuckyNotificationConfig *notificationConfig;
@property (retain, nonatomic) BDUGLuckyPreCongfig *preConfig;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void)setExtra:(id)arg0;
- (id)gecko;
- (id)preConfig;
- (id)cooling;
- (id)lowUpdate;
- (id)shakeData;
- (id)cancelData;
- (id)notificationConfig;
- (id)feRules;
- (id)pageDependency;
- (void)setPageDependency:(id)arg0;
- (void)setShakeData:(id)arg0;
- (void)setCancelData:(id)arg0;
- (void)setLowUpdate:(id)arg0;
- (void)setGecko:(id)arg0;
- (void)setFeRules:(id)arg0;
- (id)sceneTimeInfos;
- (void)setSceneTimeInfos:(id)arg0;
- (void)setCooling:(id)arg0;
- (void)setNotificationConfig:(id)arg0;
- (void)setPreConfig:(id)arg0;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)extra;
- (id)domain;
- (void)setDomain:(id)arg0;

@end
