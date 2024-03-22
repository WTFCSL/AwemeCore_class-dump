//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, IESLivePublicScreenLayoutInfoModel;
@protocol IESLivePublicScreenLayoutCalculateDataProvider;

@interface IESLivePublicScreenNormalLayoutCalculator : NSObject <IESLivePublicScreenLayoutCalculator> {
    BOOL disableCalculate;
    BOOL _enableHeightSetting;
    id<IESLivePublicScreenLayoutCalculateDataProvider> provider;
    IESLivePublicScreenLayoutInfoModel *infoModel;
    unsigned long long _heightType;
    double _topAvoidHeight;
    NSMutableDictionary *_avoidHeightDic;
}

@property (nonatomic) unsigned long long heightType;
@property (nonatomic) double topAvoidHeight;
@property (nonatomic) BOOL enableHeightSetting;
@property (retain, nonatomic) NSMutableDictionary *avoidHeightDic;
@property (weak, nonatomic) id<IESLivePublicScreenLayoutCalculateDataProvider> provider;
@property (retain, nonatomic) IESLivePublicScreenLayoutInfoModel *infoModel;
@property (nonatomic) BOOL disableCalculate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)infoModel;
- (void)setInfoModel:(id)arg0;
- (id)layoutInfoDict;
- (void)updatePublicScreenHeightWithScene:(unsigned long long)arg0;
- (void)updatePublicScreenWidth:(double)arg0 withSource:(unsigned long long)arg1;
- (void)removePublicScreenOutSetWidth;
- (BOOL)enableHeightSetting;
- (void)setEnableHeightSetting:(BOOL)arg0;
- (double)calculateMessageListHeightWithConstHeight:(double)arg0;
- (double)topAvoidHeight;
- (double)getSafeHeight:(double)arg0;
- (double)calculateAvoidHeightWithConstHeight:(double)arg0;
- (void)calculatePublicScreenLayout;
- (void)setDisableCalculate:(BOOL)arg0;
- (void)calculateRealMessageListHeight;
- (void)updateHeightSetSwitchWithScene:(unsigned long long)arg0;
- (void)updatePublicScreenHeightWithReason:(id)arg0;
- (void)setTopAvoidHeight:(double)arg0 withScene:(id)arg1;
- (BOOL)disableCalculate;
- (void)setAvoidHeightDic:(id)arg0;
- (BOOL)hitedMinProtectHeight;
- (id)avoidHeightDic;
- (void)setTopAvoidHeight:(double)arg0;
- (BOOL)hitedMaxProtectHeight;
- (void)setProvider:(id)arg0;
- (id)init;
- (id)provider;
- (void).cxx_destruct;
- (double)bottomPadding;
- (unsigned long long)heightType;
- (void)setHeightType:(unsigned long long)arg0;

@end